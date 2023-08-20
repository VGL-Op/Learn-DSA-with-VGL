
// Partition List

// Given the head of a linked list and a value x, partition it such that all
//  nodes less than x come before nodes greater than or equal to x.
// You should preserve the original relative order of the nodes in each of 
// the two partitions.

#include <bits/stdc++.h>
using namespace std;


// Definition for singly-linked list.
  struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* hi = new ListNode(100);
        ListNode* lo = new ListNode(99);
        ListNode* temp = head;
        ListNode* tempLo = lo;
        ListNode* tempHi = hi;
        while(temp!=NULL){
            if(temp->val < x){
                tempLo->next = temp; // Connect the LL
                temp = temp->next ; // aage badhavo dono pointers ko
                tempLo = tempLo->next;
            }
            else {
                tempHi->next = temp;
                temp = temp->next ;
                tempHi = tempHi->next;
            }
        }
        tempLo->next = hi->next;
        tempHi->next = NULL;
        return lo->next;
    }
};

// HW :- Apply Insertion sort on ll