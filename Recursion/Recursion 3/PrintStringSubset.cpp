// a subset is nothing but a any possible combination of the original array (or set)
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void printSubset(string ans , string original ){
    if(original ==""){
        cout << ans <<endl;
        return ;
    }
    char ch = original[0];
    printSubset(ans,original.substr(1));
    printSubset(ans+ch,original.substr(1));
}
int main(){ 
    string str = "abc";
    printSubset("",str);
    return 0;
}