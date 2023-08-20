// 138. Copy List With Random Pointers ********* HARD***********

#include <iostream>
#include <vector>
using namespace std;

// Definition for a Node.

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        // step 1:- Create a deep copy without random pointer
        Node* dummy = new Node(0);
        Node* tempC = dummy;
        Node* temp = head;
        while(temp){
            Node* a = new Node(temp->val);
            tempC->next = a;
            tempC = tempC->next;
            temp = temp->next;
        }
        Node* duplicate = dummy->next;
        // Step 2 :- Alternate Connections
        Node* a = head;
        Node* b = duplicate;
        dummy = new Node(-1);
        Node* tempD = dummy;
        while(a){
            tempD->next = a;
            tempD = tempD->next;
            a = a->next;
            tempD->next = b;
            tempD = tempD->next;
            b = b->next;
        }
        dummy = dummy->next; // We got new required LL here 
        // Step 3:- Assigning Random Pointer to duplicate
        Node* t1 = dummy; // t1 will traverse in the original list
        while(t1){
            Node* t2 = t1->next;
            if(t1->random != NULL) t2->random = t1->random->next;
            t1 = t1->next->next;
        }
        // Step 4:- Removing / Breaking the connections
        Node* d1 = new Node(-1);
        Node* d2 = new Node(-1);
         t1 = d1;   //Node* t1 = d1; Node removed because it's already initiallised
        Node* t2 = d2;
        Node* t = dummy;
        while(t){
            t1->next = t;
            t = t->next;
            t1 = t1->next;
            t2->next = t;
            t = t->next;
            t2 = t2->next;
        }
        t1->next = NULL;
        t2->next = NULL;
        d1 = d1->next; // Original with random
        d2 = d2->next; // duplicate with random
        return d2;
    }
};

// A linked list of length n is given such that each node contains an additional random pointer,
//  which could point to any node in the list, or null.

// Construct a deep copy of the list. The deep copy should consist of exactly n brand new
// nodes, where each new node has its value set to the value of its corresponding original
// node. Both the next and random pointer of the new nodes should point to new nodes in 
// the copied list such that the pointers in the original list and copied list represent the 
// same list state. None of the pointers in the new list should point to nodes in the 
// original list.

// For example, if there are two nodes X and Y in the original list, where X.random --> Y, then
//  for the corresponding two nodes x and y in the copied list, x.random --> y.

// Return the head of the copied linked list.

// The linked list is represented in the input/output as a list of n nodes. Each node is 
// represented as a pair of [val, random_index] where:

// val: an integer representing Node.val
// random_index: the index of the node (range from 0 to n-1) that the random pointer points
//  to, or null if it does not point to any node.
// Your code will only be given the head of the original linked list.