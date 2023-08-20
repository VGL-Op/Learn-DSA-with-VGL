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
class DLL{ // User Defined Data Structure
public:
    Node* head ;
    Node* tail ;
    int size ;
    DLL (){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp ;
        else {
            tail->next = temp;
            temp->prev = tail; // Extra
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp ;
        else {
            temp->next = head;
            head->prev = temp; // Extra
            head = temp;
        }
        size++;
    }
    void insertAtIdx( int idx,int val){
        if(idx<0 || idx > size) cout << "Invalid Index " <<endl;
        else if(idx == 0) insertAtHead(val);
        else if(idx == size) insertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i = 1;i<= idx-1 ;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp; // Extra
            t->next->prev = t; // Extra 
            size++;
        }
    }
    // Getting an element at given index 
    int getAtIdx(int idx ){
        if(idx<0 || idx > size) {
            cout << "Invalid Index" <<endl;
            return -1; 
        } 
        else if(idx == 0) return head->val;
        else if(idx == size-1) return tail->val;
        else{
           if(idx < size/2){
            Node* temp = head;
            for(int i = 1;i<=idx ;i++){
                temp = temp->next;
            }
            return temp->val;
           }
           else{ // idx > size/2
            Node* temp = tail;
            for(int i = 1; i< size-idx ;i++){
                temp = temp->prev;
            }
            return temp->val;
           }
        } 
    }

    void deleteAtHead(){
        if(size==0) {
            cout <<"List is empty "<<endl;
            return ;
        }
        head = head->next;
        if(head!=NULL) head->prev = NULL; // Extra
        if(head==NULL) tail = NULL; // Extra
        size--;
    }

    void deleteAtTail(){
        if(size==0){
            cout << "List is empty" <<endl;
            return;
        }
        else if(size==1){ // Extra
            deleteAtHead();
            return;
        }
        // Brand New Changes
        Node* temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int idx){
        if(idx<0 || idx>= size){
            cout << "Invalid Index ";
            return ;
        }
        else if (idx == 0) deleteAtHead();
        else if (idx == size-1) deleteAtTail();
        else {
            Node* temp = head;
            for(int i = 1; i<=idx-1 ;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp ; // Extra
            size--;
        }
    }
    void display(){ 
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    }
    
};
int main(){
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.display();
    list.insertAtTail(40);
    list.display();
    list.insertAtHead(50);
    list.display();
    list.insertAtIdx(2,60);
    list.display();
    list.deleteAtTail();
    list.display();
    list.deleteAtHead();
    list.display();
    list.insertAtTail(22);
    list.display();
    list.deleteAtIdx(3);
    list.display();
    cout << list.getAtIdx(1) <<endl;
    list.insertAtHead(11);
    list.insertAtHead(12);
    list.display();
    cout << list.getAtIdx(3) << endl;
    

}