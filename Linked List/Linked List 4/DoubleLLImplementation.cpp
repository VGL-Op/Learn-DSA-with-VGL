#include <iostream>
using namespace std;
class Node{ // DLL Node
public: 
    int val;
    Node* prev;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void display(Node* head){ // O(1) space
    while(head){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void displayRev(Node *tail){
    while(tail){
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}

void displayRec(Node* head){ // O(n) space 
    if(head == NULL) return ;
    cout << head->val <<" ";
    displayRec(head);
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL; // By Default rahega 

    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;
    display(a);
    // displayRec(a);
    displayRev(e);
}