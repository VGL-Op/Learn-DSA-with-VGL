
#include <iostream>
#include <stack>
using namespace std;

// Using Stack T.C = O(n) , S.C = O(n)

int main(){
    int arr[] = {100,80,60,81,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pgi[n];
    for(int i = 0; i< n;i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
    // Using Stack , pop , ans , push Technique

    stack <int> st;
    pgi[0] = 1;
    st.push(0);
    for(int i =0 ;i<n;i++){
        // pop the elements smaller than or equal to arr[i]
        while(st.size()>0 && arr[st.top()] <= arr[i]){
            st.pop();
        }
        // Mark the ans in nge array
        if(st.size()==0) pgi[i] = -1;
        else pgi[i] = st.top();
        pgi[i] = i-pgi[i]; // index minus kiya taki final ans mile
        // push the array
        st.push(i);
    }
     for(int i = 0; i< n;i++){
        cout << pgi[i] <<" ";
    }
}