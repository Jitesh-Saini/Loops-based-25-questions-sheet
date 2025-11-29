// 15. Product of digits of a number (for while do-while loop)
// Example: 345 → 3×4×5 = 60


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, prod = 1;
    cin >> n;
    while (n)
    {
        int digit=n%10;
        prod*=digit;
        n/=10;

    }
    // int temp=n;
    // for (int i = 0; i <= n; i++)
    // {
    //     int digit = temp % 10;
    //     prod += digit;
    //     temp /= 10;
    // }
    cout << prod;
}