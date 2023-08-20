#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string str , int i , int j ){
    if(i>j) return true;
    if(str[i]!=str[j]) return false;
    else return isPalindrome(str,i+1,j-1);
}

int main(){
    string s = "racecar";
    cout << isPalindrome(s,0,s.length()-1);
    return 0;
}