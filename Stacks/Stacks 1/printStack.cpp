#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack <int> st; 
    cout << st.size()<<endl;
    st.push(10); 
    st.push(20); 
    st.push(30); 
    st.push(40);
    st.push(50);
   // Printing in reverse Order -> emptying the original stack permanently
//    while(st.size()>0){
//     cout << st.top() << " ";
//     st.pop();
//    }

// *******Printing the stack with extra stack
    
    // Step 1 :- Transfer the elements from one stack to another
    stack <int> temp;
    while(st.size()>0){
        cout << st.top() <<" ";
        int x = st.top();
        st.pop();
        temp.push(x);
    } 
    // Step 2 :- Again put all the elements in the original stack
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    // H.W :- Print elements of the stack in bottom to top approach

    

}
