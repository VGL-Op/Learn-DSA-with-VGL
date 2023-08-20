#include <iostream>
#include <vector>
#include <string>
using namespace std;
// a = source , b = helper , c = destination
void hanoi(int n , char a , char b, char c){
    if(n==0) return ; // base case
    hanoi(n-1,a,c,b);
    cout << a << "-->" <<c <<endl;
    hanoi(n-1,b,a,c);
 }

int main(){
    hanoi(3,'a','b','c');
return 0;
}