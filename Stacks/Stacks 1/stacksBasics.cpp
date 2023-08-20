#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack <int> st; // Declaration of stack
    cout << st.size()<<endl; // Gives the size of the stack
    st.push(10); // 1
    st.push(20); // 2
    st.push(30); // 3
    st.push(40); // 4 , 10 20 30 40
    cout << st.size()<<endl; 
    st.pop(); // 3 , 10 20 30 
    cout << st.size() <<endl; // 3
    cout <<st.top() <<endl; // 30
    // cout << st <<endl; ****** IN CPP it gives error but in Java it prints whole stack
    

}
