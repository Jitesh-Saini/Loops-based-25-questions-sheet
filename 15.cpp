// 15. Product of digits of a number (for while do-while loop)
// Example: 345 → 3×4×5 = 60

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int prod = 1;
    int temp = n;

    while (temp > 0)
    {
        int digit = temp % 10;
        prod *= digit;
        temp /= 10;
    }
    cout << "Product using while loop: " << prod << endl;

    // prod = 1;
    // temp = n;

    // for (; temp > 0; temp /= 10)
    // {
    //     int digit = temp % 10;
    //     prod *= digit;
    // }
    // cout << "Product using for loop: " << prod << endl;

    // prod = 1;
    // temp = n;

    // if (temp > 0)
    // { 
    //     do
    //     {
    //         int digit = temp % 10;
    //         prod *= digit;
    //         temp /= 10;
    //     } while (temp > 0);
    // }

    // cout << "Product using do-while loop: " << prod << endl;

    return 0;
}
