// 7. Check if a number is a palindrome ( using while and do-while loop )
//  Example: 121 → palindrome

#include <iostream>
using namespace std;

int main()
{
    int n, original, reversed = 0;
    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n > 0)
    {
        int digit = n % 10; // last digit
        reversed = reversed * 10 + digit;
        n = n / 10; // remove last digit
    }

    if (original == reversed)
        cout << "Palindrome number hai!" << endl;
    else
        cout << "Palindrome number nahi hai!" << endl;

    // n = original; // reversed check ke baad value reset
    // reversed = 0;

    // do
    // {
    //     int digit = n % 10;
    //     reversed = reversed * 10 + digit;
    //     n = n / 10;
    // } while (n > 0);

    // if (original == reversed)
    //     cout << "Do-While se: Palindrome number hai!" << endl;
    // else
    //     cout << "Do-While se: Palindrome number nahi hai!" << endl;

    return 0;
}
