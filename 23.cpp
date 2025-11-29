// 23. Using ( for loop and while loop) iterate and start with 1 to nth number jump by
//  2
// 4
// 5
// 6
// 8
// 10

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Jump by 2: ";
    for (int i = 1; i <= n; i = i + 2)
    {
        cout << i << " ";
    }
    cout << endl;

    /*
  int j = 1;
  while (j <= n) {
      cout << j << " ";
      j = j + 2;
  }
  */

    // for n = 4,5,6,8,10 
    // i + 4, j + 4
    // i + 5, j + 5
    // i + 6, j + 6
    // i + 8, j + 8
    // i + 10, j + 10 aa jayega
   

    return 0;
}