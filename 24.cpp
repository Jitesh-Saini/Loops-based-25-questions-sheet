// 24. Take a number from user add the first digit and last digit.
// 153 =1 + 3 =4
// 15935=1+5=6



#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int last = n % 10;

    int first = 0;
    while (n > 0) {
        first = n % 10;   // last digit of current temp
        n /= 10;          // remove last digit
    }

    cout << first + last;
}
