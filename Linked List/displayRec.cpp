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
// But Iterative Solution is better
// SC = O(n)  local variable formation in stack memory, TC = O(n)

void displayRec(Node* head){
    if(head == NULL) return ; // base case
    cout << head->val << " "; // kaam 
    displayRec(head->next);   // recursive solution
}
void reverseDisplay(Node* head){
     if(head == NULL) return ;   // base case
     reverseDisplay(head->next); // recursive solution
    cout << head->val << " ";    // kaam
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
    displayRec(a); cout << endl;
    reverseDisplay(a);
}