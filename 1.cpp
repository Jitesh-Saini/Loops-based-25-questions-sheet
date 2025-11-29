// 1. Print numbers from 1 to N (using for loop, while loop and do-while loop)
// Input: N
//  Output: 1 2 3 ... N

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cout << i << " ";
    }

    // int i = 1;
    // while (i <= N)
    // {
    //     cout << i << " ";
    //     i++;
    // }

    // int i = 1;

    // do
    // {
    //     cout << i << " ";
    //     i++;
    // } while (i <= N);

    cout << endl;

    return 0;
}
