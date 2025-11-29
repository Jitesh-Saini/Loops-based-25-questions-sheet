// 22. Check if the number N is a power of 7 if it is then find which power? 


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Number daal: ";
    cin >> n;
    
    int originalN = n;
    int count = 0;

    if (n <= 0) {
        cout << "No, 0 ya negative number nahi chalega." << endl;
        return 0;
    }

    while (n > 1) {
        if (n % 7 == 0) {
            n = n / 7; // Number ko chhota kar
            count++;   // Power count badha
        } else {
            break;     
        }
    }

    if (n == 1) {
        cout << "Yes! " << originalN << " is 7^" << count << endl;
    } else {
        cout << "No, " << originalN << " power nahi hai." << endl;
    }

    return 0;
}