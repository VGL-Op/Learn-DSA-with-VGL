#include <iostream>
using namespace std;
bool isArmstrong(int n){
    int sum = 0;int temp = n;// we declared temp coz we sacrificesd n (sigh)
    while(n>0){
    int digit = n%10;
    sum += digit*digit*digit;
    n/=10;
    }
    if(temp==sum) return true;
    else return false;
}

int main(){
    int n ; cin >> n;
    for(int i = 0; i <= n;i++){
        if(isArmstrong(i)) cout <<i<<" ";
    }
    return 0;
}