#include <iostream>
using namespace std;

int countSetBits(int n ){
    return __builtin_popcount(n);
}
int countSetBits2(int n){ // Brian Kernighan's Algorithm
    int ans = 0 ;
    while(n>0){
        ans++;
        n = n&(n-1);
    }
    return ans;
}

int main(){
    int n = 7;
    cout << countSetBits(n)<<endl;
    cout << countSetBits2(n)<<endl;
    return 0;
}