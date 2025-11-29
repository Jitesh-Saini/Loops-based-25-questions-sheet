// 6. Reverse a number(check all the cases like succeeding zeros)
// (While loop and do-while loop) ⇒ (don’t change the data-type keep it integer)
// Example: 1234 → 4321
// 1000 = = 0001 
// 120500 = 005021 


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of n:";
    cin >> n;
    int sum = 0;
    int lastdigit, count = 0, last;
    int temp = n;

    while (n)
    {
        lastdigit = n % 10;
        sum = sum * 10 + lastdigit;
        n = n / 10;
    }
    while (temp)
    {
        last = temp % 10;
        if (last == 0)
        {
            count++;
        }
        else
        {
            break;
        }
        temp /= 10;
    }
    for (int i = 1; i <= count; i++)
    {
        cout << "0";
    }
    cout << sum;
}