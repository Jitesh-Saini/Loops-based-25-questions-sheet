// 21. Find the total count of 8 in a digit.


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int count = 0;

    while (n != 0) {
        int digit = n % 10;
        if (digit == 8) {
            count++;
        }
        n /= 10;
    }

    cout << count;
}
