#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s){
    stack <char> st;
    st.push(s[0]);
    for(int i = 1; i<s.length() ;i++){
        if(s[i] != st.top()) st.push(s[i]);
    }
    string ans = "";
    while(st.size()>0){
        ans = ans+st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    string s = "aabbcdddeffff";
    cout << s <<endl;
    s = removeDuplicates(s);
    cout << s <<endl;
}