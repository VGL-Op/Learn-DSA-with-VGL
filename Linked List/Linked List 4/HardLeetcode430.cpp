// 430. Flatten a Multilevel Doubly Linked list

#include <iostream>
#include <vector>
using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

class Solution {
public:
    Node* flatten(Node* head) {
        Node* temp = head;
        while(temp){
            Node* a = temp->next;
            if(temp->child){
                Node* c = temp->child;
                temp->child = NULL; // Important
                c = flatten(c); // Recursion
                temp->next = c;
                c->prev = temp;
                while(c->next){
                    c = c->next;
                }
                c->next = a;
                if(a) a->prev = c; // error
            }
            temp = a;
        }
        return head;
    }
};
