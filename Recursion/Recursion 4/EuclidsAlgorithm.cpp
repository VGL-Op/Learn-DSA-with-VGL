#include <iostream>
#include <string>
using namespace std;
int gcd (int a , int b){
    if(a==0) return b;
    else return gcd(b%a,a);
}
int main(){
    int a = 20;
    int b = 45;
    cout << gcd(b,a);
    return 0;
}

// for gcd of numbers a and b 
// TC :- O(log(a+b)) 
// can be proved by induction as such no need to proof
