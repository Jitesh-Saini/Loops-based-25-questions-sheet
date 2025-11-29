// 11. Check if the number is prime
// 0(n)
// 0(n/2)
// Sqrt of n
// Use loop to check divisibility.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = false;
        }
    }

    //Slightly better O(n/2) method
    // for (int i = 2; i <= n / 2; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }


    // Optimized O(√n) method
    // for (int i = 2; i * i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }

    if (flag == true)
        cout << "prime";
    else
        cout << "not prime";
}