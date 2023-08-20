#include <iostream>
#include <string>
using namespace std;
void binary(string s , int n ){
    if(s.length()==n){
        cout << s << endl; 
        return ;
    }
    binary(s+'0',n);
    binary(s+'1',n);
}

// This also works!
// void binary(string s , int n ){
//     if(n==0){
//         cout << s << endl; 
//         return ;
//     }
//     binary(s+'0',n-1);
//     binary(s+'1',n-1);
// }

int main(){
    int n = 3;
    binary("",n);
}