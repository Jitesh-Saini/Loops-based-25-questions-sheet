// 17. Find the smallest digit of a number(do-while loop)
// Example: 6395 → smallest = 3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int small = INT_MAX; // min–max system

    do
    {
        int digit = n % 10;

        if (digit < small)
        { 
            small = digit;
        }

        n /= 10;
    } while (n != 0);

    cout << small;
}
