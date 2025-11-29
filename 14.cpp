// 14. Sum of digits of a number(do-while for while)
// Example: 789 → 7+8+9 = 24
// 12345=1+2+3+45

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int sum = 0;
    int temp = n;

    while (temp > 0)
    {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    cout << "Sum using while loop: " << sum << endl;

    // sum = 0;
    // temp = n;
    // for (; temp > 0; temp /= 10)
    // {
    //     int digit = temp % 10;
    //     sum += digit;
    // }
    // cout << "Sum using for loop: " << sum << endl;

    // sum = 0;
    // temp = n;

    // if (temp > 0)
    // { // edge case: n = 0, loop won't run unless checked
    //     do
    //     {
    //         int digit = temp % 10;
    //         sum += digit;
    //         temp /= 10;
    //     } while (temp > 0);
    // }

    // cout << "Sum using do-while loop: " << sum << endl;

    return 0;
}
