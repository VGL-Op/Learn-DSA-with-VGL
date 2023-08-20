#include <iostream>
#include <string>
using namespace std;
void binary(string s , int n ){
    if(n==0){
        cout << s << endl; 
        return ;
    }
    binary(s+'0',n-1);
    if(s=="" || s[s.length()-1] == '0') binary(s+'1',n-1); 
    // In the above line order of conditions matters
}

int main(){
    int n = 3;
    binary("",n);
}