// a subset is nothing but a any possible combination of the original array (or set)
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void storeSubset(string ans , string original,vector <string> &v ){
    if(original ==""){
        v.push_back(ans);
        return ;
    }
    char ch = original[0];
    storeSubset(ans,original.substr(1),v); // either append first element 
    storeSubset(ans+ch,original.substr(1),v); // or not 
}
int main(){ 
    string str = "abc";
    vector<string> v;
    storeSubset("",str,v);
    for(string ele : v){
        cout << ele << endl;
    }
    return 0;
}