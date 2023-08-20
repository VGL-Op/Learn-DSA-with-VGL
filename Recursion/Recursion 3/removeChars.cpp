// Normally we can do this by creating a empty string and then by
// adding single character except skipping character usign loops
#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Q. Remove all occurences of a in a string
void removeChar(string ans , string original){
    if(original.length() == 0){
        cout << ans;
        return ;
    }
    char ch = original[0];
    if(ch == 'a') removeChar(ans,original.substr(1));
    else removeChar(ans+ch,original.substr(1));
}
int main(){
    string s = "vishal" ;
    removeChar("",s);
}
// In C++ while appending a string a new temporary string is formed and then 
// both will get appended it cost some memory 
// In case of substring also the same thing happens hence it's costly for space
