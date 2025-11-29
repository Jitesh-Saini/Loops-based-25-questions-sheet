// 12. Print Fibonacci series up to N terms(for loop)
// 0 1 1 2 3 5 8…

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a = 0, b = 1, c;
    // cout << a << " " << b << " ";
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}