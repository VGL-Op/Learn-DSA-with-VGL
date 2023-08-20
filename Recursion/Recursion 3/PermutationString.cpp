#include <iostream>
#include <vector>
#include <string>
using namespace std;

void permutation(string ans , string original){
    if(original==""){
        cout << ans <<endl;
        return ;
    }
    for(int i = 0 ; i< original.length(); i++){
        char ch = original[i];
        string left = original.substr(0,i);  // string left part
        string right = original.substr(i+1); // right part from the choosen idx
        permutation(ans+ch,left+right);
    }
}

int main(){
    string str = "abc";
    permutation("",str);
    return 0;
}

// In Permutation no of calls will be based on the size of the array or string 
// str.substr(x,y); means take substr from x index and size y 