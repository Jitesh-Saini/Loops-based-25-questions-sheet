// 16. Find the largest digit of a number(while loop)
// Example: 6395 → largest = 9

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int lar = 0;

    while (n != 0)
    {
        int digit = n % 10; // last digit
        if (digit > lar)
        {
            lar = digit;
        }
        n /= 10; // remove last digit
    }

    cout << lar;
}
