// 20. Find GCD (HCF) of two numbers using loop

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cout << "Enter a:";
    cin >> a;
    int b;
    cout << "Enter b:";
    cin >> b;

    while (b!=0)
    {
       int rem=a%b;
       a=b;
       b=rem;
    }
    int gcd=a;
    cout<<gcd;
    
}
