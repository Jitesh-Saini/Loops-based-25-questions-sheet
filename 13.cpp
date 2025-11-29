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
    for (int i = 1; i <= b; i++)
    {
        power = power * a;
    }
    cout<<"Result: "<< power << endl;
}