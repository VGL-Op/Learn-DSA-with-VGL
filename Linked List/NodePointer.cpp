#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this-> val = val;
        this-> next = NULL; 
    }
};

void display(Node* head){ // Node* is an adress
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int size(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    return n;
}
void insertAtEnd(Node* head , int val){
    Node* t = new Node(val); 
    while(head->next != NULL) head = head->next;\
    head->next = t;
}


int main(){
    Node* a = new Node(10); //(HEAD)// Node with val 10 and address NULL is formed
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50); //(TAIL)
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    
    cout << endl;
    cout <<" \n \nValue of b using a "<<a->next->val <<endl;
    cout << "Value of c using a " << a->next->next->val <<endl;

    display(a); // This is Pass by value
    cout << size(a);
}

// // Traversing is easier relative to Node Class
    // Node* temp = a;
    // while(temp!=NULL){
    //     cout << temp->val << " ";
    //     temp = temp->next;
    // }
    // TC = O(N) , SC = O(1)
