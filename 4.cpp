// 4. Print sum of odd numbers from 1 to N( for loop while loop and do-while loop)
// Start value user input and End value hai wo bhi user input hoga
// Example: N=7 → 1+3+5+7 = 16

#include <iostream>
using namespace std;

int main()
{
    int start, end;
    cout << "Enter start and end values: ";
    cin >> start >> end;

    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    // int i = start;
    // while (i <= end) {
    //     if (i % 2 != 0) {
    //         sum += i;
    //     }
    //     i++;
    // }

    // int i = start;
    // do
    // {
    //     if (i % 2 != 0)
    //     {
    //         sum += i;
    //     }
    //     i++;
    // } while (i <= end);

    cout << "Sum of odd numbers = " << sum << endl;
    return 0;
}
