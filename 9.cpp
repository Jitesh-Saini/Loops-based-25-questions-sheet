// 9. Print multiplication table of a number.(only with for loop )
// Example: N=7 → 7 14 21 … 70
// I = 1-15 and J = 1-10 
// 1 * 1 = 1 
// 1 * 2 = 2



#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {        // table for 1 to N
        cout << "\nMultiplication table of " << i << ":\n";
        for (int j = 1; j <= 10; j++) {   // multiply 1 to 10
            cout << i << " * " << j << " = " << i * j << endl;
        }
    }

    return 0;
}
