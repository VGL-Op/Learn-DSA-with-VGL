#include <iostream>
#include <stack>
using namespace std;

// Using Stack T.C = O(n) , S.C = O(n)

int main(){
    int arr[] = {3,1,2,7,5,6,1,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int nge[n];
    for(int i = 0; i< n;i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
    // Using Stack , pop , ans , push Technique

    stack <int> st;
    nge[n-1] = -1;
    st.push(arr[n-1]);
    for(int i =n-1 ;i>=0;i--){
        // pop the elements smaller than or equal to arr[i]
        while(st.size()>0 && st.top()<= arr[i]){
            st.pop();
        }
        // Mark the ans in nge array
        if(st.size()==0) nge[i] = -1;
        else nge[i] = st.top();
        // push the array
        st.push(arr[i]);
    }
     for(int i = 0; i< n;i++){
        cout << nge[i] <<" ";
    }
}