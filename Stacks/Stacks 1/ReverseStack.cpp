#include <iostream>
#include <stack>
using namespace std;

// ****** USING 2 EXTRA STACKS *********
void print(stack<int>st){
    stack <int> temp ;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout << temp.top() <<" ";
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack <int> st; 

    st.push(10); 
    st.push(20); 
    st.push(30); 
    st.push(40); 
    st.push(50);

    stack <int> temp1;
    stack <int> temp2;
    while(st.size()>0){
        temp1.push(st.top());
        st.pop();
    }
    while(temp1.size()>0){
        temp2.push(temp1.top());
        temp1.pop();
    }
    while(temp2.size()>0){
        st.push(temp2.top());
        temp2.pop();
    }
    print(st);

// H.W :- Revererse the stack using Linked List
}