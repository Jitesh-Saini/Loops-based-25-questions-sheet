// 8. Find factorial of a number (for loop while loop and do-while loop)
// Example: 5 → 120

#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    // int i = 1;
    // while (i <= n) {
    //     fact *= i;
    //     i++;
    // }


    // int i = 1;
    // do {
    //     fact *= i;
    //     i++;
    // } while (i <= n);
    

    cout << "Factorial = " << fact;
    return 0;
}
