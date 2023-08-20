#include <iostream>
using namespace std;
void fib(int n){
    int a = 0 , b = 1;
    int c = 0;
    cout <<"0 1 ";
    while(c<=n){
       c = a+b;
       cout << c <<" ";
       a = b;
       b = c;
    }
    
}

int main(){
    int n ; cin >> n;
    fib(n);
    return 0;
}