// 10. Print all divisors of a number (for while and do-while)
// Example: 12 → 1,2,3,4,6,12
//  15 : 1, 3 ,5 , 15
// O(n)
// 0(n/2) two pointer approach

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

  
    // int i = 1;
    // while (i <= n)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << " ";
    //     }
    //     i++;
    // }
    // cout << endl;

    
    // int i = 1;
    // do
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << " ";
    //     }
    //     i++;
    // } while (i <= n);

    return 0;
}
