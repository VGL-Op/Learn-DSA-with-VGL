#include <iostream>
#include <cmath>

using namespace std;
int fact = 1;
bool isPrime(int n ){

    for(int i = 2 ;i<= sqrt(n) ;i++){
        if(n%i == 0){
            fact = i;
            return false;
        }
    }
    return true;
}
int main(){
    int n ; cin >> n;
    cout << isPrime(n) << endl;
    cout << fact <<endl;
    return 0;
}