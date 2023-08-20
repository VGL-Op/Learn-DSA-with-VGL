#include <iostream>
#include <stack>
using namespace std;

class Node{ // USER Defined Data Type
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class Stack{ // User Defined Data Structure
public : 
    Node* head;
    int size;
    Stack(){
        head = NULL;
        size = 0;
    }
    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size = size+1;
    }
    void pop(){
       if(head==NULL){
        cout << "Stack is empty " <<endl;
        return;
       }
       head = head->next;
       size = size-1;
    }
    int top(){
        if(head ==NULL){
            cout << "Stack is empty "<<endl;
            return -1;
        }
        return head->val;
    }

    // This will print the values in the Opposite Order
    // void display(){
    //     Node* temp = head;
    //     while(temp){
    //         cout << temp->val <<" ";
    //         temp = temp->next;
    //     }
    //     cout <<endl;
    // }

    //**********THis will print them in proper order
    
    void print(Node* temp){
        if(temp==NULL) return;
        print(temp->next);
        cout <<temp->val <<" ";
    }
    void display(){
        Node* temp = head;
        print(temp);
        cout << endl;
    }

};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << "top :- " <<st.top() <<endl;
    cout << "Size :- " <<st.size<<endl;
    st.pop();
    cout << "top :- " <<st.top() <<endl;
    cout << "Size :- " <<st.size<<endl;
    st.push(40);
    st.push(50);
    st.push(60);
    cout << st.top() <<endl;
    st.display();
}