// 14. Sum of digits of a number(do-while for while)
// Example: 789 → 7+8+9 = 24
// 12345=1+2+3+45

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    while (n)
    {
        int digit=n%10;
        sum+=digit;
        n/=10;

    }
    // int temp=n;
    // for (int i = 0; i <= n; i++)
    // {
    //     int digit = temp % 10;
    //     sum += digit;
    //     temp /= 10;
    // }
    cout << sum;
}