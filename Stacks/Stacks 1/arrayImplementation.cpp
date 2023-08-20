#include <iostream>
#include <stack>
using namespace std;
class Stack{
public :
    int arr[5];
    int idx = -1;

    void push(int val){
        if(idx == 4){
            cout << "Stack is full "<<endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop(){
        if(idx== -1){
            cout << "Stack is empty "<<endl;
            return;
        }
        idx--;
    }
    int top(){
        if(idx== -1){
            cout << "Stack is empty "<<endl;
            return -1;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
    void display(){
        for(int i =0; i<= idx;i++){
            cout << arr[i]<<" ";
        }
    }

};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << "top :- " <<st.top() <<endl;
    cout << "Size :- " <<st.size()<<endl;
    st.pop();
    cout << "top :- " <<st.top() <<endl;
    cout << "Size :- " <<st.size()<<endl;
    st.push(40);
    st.push(50);
    st.push(60);
    cout << st.top() <<endl;
    st.display();
}