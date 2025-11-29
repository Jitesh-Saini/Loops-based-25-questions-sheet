// 13. Find power of a number using loop(for while and do-while)
// Example: 2^5 = 32 (no pow() allowed)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    int power = 1;
    for (int i = 1; i <= b; i++) {
        power = power * a;
    }
    cout << "Result using for loop: " << power << endl;


    // power = 1;
    // int i = 1;
    // while (i <= b) {
    //     power = power * a;
    //     i++;
    // }
    // cout << "Result using while loop: " << power << endl;


    // power = 1;
    // i = 1;
    // do {
    //     power = power * a;
    //     i++;
    // } while (i <= b);

    // cout << "Result using do-while loop: " << power << endl;

    return 0;
}
