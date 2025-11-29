// 2. Print sum of first N natural numbers(for loop, while loop and do-while loop)
// 1+2+3+4+5+6
// Example: N=5 → Output: 15

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;

    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }

    //  int i = 1;
    // while (i <= N) {
    //     sum += i;
    //     i++;
    // }

    // do
    // {
    //     sum += i;
    //     i++;
    // } while (i <= N);

    cout << "Sum = " << sum << endl;
    return 0;
}
