#include <iostream>
using namespace std;
class Node{ // User Defined Data Type 
    public:
    int val;
    Node *next;
    Node(int val){
        this-> val = val;
        this-> next = NULL; 
    }
};

void display(Node* head){
    while(head!=NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

Node* deletenode(Node* head , Node* target){
    if(head == target) {
        head = head->next;
        return head ;
    }
    Node* temp = head;
    while(temp->next != target){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
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
    Node* head = a;
    display(head);
    deletenode(head,d);
    display(head);
    // head = deletenode(head,head);
    // display(head);
    
}