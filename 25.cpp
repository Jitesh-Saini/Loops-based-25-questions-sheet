// 25. Take a number from user get the first digit and last digit
// 9533 = first number = 9
//           = last digit = 3
// For loop >> 1-9
//      Run a for loop from 1 till first digit
// Do-while 3-0
//      Run a do-while loop from last digit to 0.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value: ";
    cin >> n;

    int last = n % 10;

    int first = 0;
    while (n > 0)
    {
        first = n % 10; // last digit of current temp
        n /= 10;        // remove last digit
    }
    cout << "SUM of first and last digit: " << first + last << endl;

    for (int i = 1; i <= first; i++)
    {
        cout << "From 1 to first: " << i << endl;
    }
    int i = last;
    do
    {
        cout << "From last to zero: " << i << endl;
        i--;

    } while (i >= 0);
}
