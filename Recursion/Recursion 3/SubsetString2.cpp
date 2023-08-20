#include <iostream>
#include <vector>
#include <string>
using namespace std;
void storeSubset(string ans , string original,vector <string> &v,bool flag ){
    if(original ==""){
        v.push_back(ans);
        return ;
    }
    char ch = original[0];
    // Last mein ek hi element hoga to usse right wale element ke sath nhi compare kar sakte
    if(original.length() == 1){
        if(flag == true) storeSubset(ans+ch,original.substr(1),v,true);    
        storeSubset(ans,original.substr(1),v,true); 
        return ; // taki niche wale codition na execute ho isske bad
    }
    char dh = original[1];
    if(ch==dh){
        if(flag == true) storeSubset(ans+ch,original.substr(1),v,true);    
        storeSubset(ans,original.substr(1),v,false); 
    }
    else{
        if(flag == true) storeSubset(ans+ch,original.substr(1),v,true);    
        storeSubset(ans,original.substr(1),v,true); 
    }

}
int main(){ 
    string str = "aab";
    vector<string> v;
    storeSubset("",str,v,true);
    for(string ele : v){
        cout << ele << endl;
    }
    return 0;
}