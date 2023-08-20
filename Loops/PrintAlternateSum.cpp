// Print the sum of the series 
// 1 - 2 + 3 - 4 + 5 - 6 ....
// till n terms 
#include <iostream>
using namespace std;
int main (){
    int n ;
    cout <<"Enter a number : "<<endl;
    cin >>n;
    int sum = 0;
    // for (int i = 1; i<= n ;i++){
    //     if(i&1) sum += i;
    //     else sum-=i;
    // }
    if (n%2 == 0) sum = -n/2 ;
    else sum = -n/2 + n;
    cout <<"The sum is "<<sum<<endl;
    return 0;
}