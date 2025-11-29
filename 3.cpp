// 3. Print sum of even numbers from 1 to N (for loop while loop and do-while loop)
// Example: N=10 → 2+4+6+8+10 = 30



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
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    //   int i = 1;
    // while (i <= N) {
    //     if (i % 2 == 0) {
    //         sum += i;
    //     }
    //     i++;
    // }

    // do {
    //     if (i % 2 == 0) {
    //         sum += i;
    //     }
    //     i++;
    // } while (i <= N);

    cout << "Sum of even numbers = " << sum << endl;
    return 0;
}
