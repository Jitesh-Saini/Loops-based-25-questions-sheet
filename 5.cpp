// 5. Count digits in a number (while and do-while)
// Example: 4582 → 4 digits
// Best case : 1 
// Wrost case:10^9 -1 
// Algorithmic time complexity derive  


#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=n,count=0;
    while (temp)
    {
        count++;
        temp/=10;
    }

    //  do {
    //     count++;
    //     temp /= 10;
    // } while (temp != 0);

    cout<<count;

    if(count==1) cout<<"Best case";
    else if(count==9) cout<<"Worst case";
    else cout<<"Avg case";


    
}