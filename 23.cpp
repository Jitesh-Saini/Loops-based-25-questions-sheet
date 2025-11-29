// 23. Using ( for loop and while loop) iterate and start with 1 to nth number jump by 
//  2
// 4
// 5
// 6 
// 8
// 10


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i = i + 2) {
        cout<<"Output: " << i << " ";
    }

    /*
    int j = 1;
    while (j <= n) {
        cout << j << " ";
        j = j + 2; // Yahan jump lag rahi hai
    }
    */

    cout << endl;
    return 0;
}