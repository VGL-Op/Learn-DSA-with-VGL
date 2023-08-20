#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this-> val = val; // (*this).val ===> this->val
        this-> next = NULL; // To fill Null Adress in every node
    }
};
int main(){
    Node a(10) ;
    Node b(20) ;
    Node c(30) ;
    Node d(40) ;
    // Forming LL 
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;

    // cout << (*a.next).val <<endl;
    cout << a.next->val <<endl; // a ke pass be ke value ka aceess hain

    // ((a.next)->next) address of c
    cout << ((a.next)->next)->val <<endl; // val at address of c

    // This is value at d
    cout << (*(*(*a.next).next).next).val <<endl ;
    cout << a.next->next->next->val <<endl ; // value at d

    // Printing Using Loops 
    cout << "Printing LL using Loop " <<endl <<endl;
    Node temp = a;
    // Here It will be printed only till 30 
    // while(temp.next != NULL){
    //     cout << temp.val << " ";
    //     temp = *(temp.next);
    // }


    // To print till 40 i.e, till last node 


    while(1){
        cout << temp.val << " ";
        if(temp.next == NULL) break;
        temp = *(temp.next) ;
    } // NULL ka kabhi next nhi hota 


}