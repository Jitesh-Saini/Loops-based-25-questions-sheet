// 19. Print numbers divisible by A and B between 1 to N
// Example: divisible by 3 & 5 → 15, 30, 45…
// Divisible by 4 and 16

#include <iostream>
using namespace std;

int main()
{
    int N, A, B;
    cout << "Enter N, A, B: ";
    cin >> N >> A >> B;

    for (int i = 1; i <= N; i++)
    {
        if (i % A == 0 && i % B == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}
