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
