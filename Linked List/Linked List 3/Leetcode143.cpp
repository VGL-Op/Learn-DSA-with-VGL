// 143. Reorder List
// You are given the head of a singly linked-list. The list can be represented as:
// L0 → L1 → … → Ln - 1 → Ln
// Reorder the list to be on the following form:
// L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
// You may not modify the values in the list's nodes. Only nodes themselves may be changed.

#include <bits/stdc++.h>
using namespace std;

//  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head ){
       ListNode *curr = head, *prev = NULL ,*Next = head;
       while(curr){
           Next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = Next;
       }
       return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!= NULL && fast->next->next != NULL){
            slow = slow ->next;
            fast = fast->next->next;
        }
        // slow is at the left middle or middle 
        ListNode* b = reverseList(slow->next);
        ListNode* a = head;
        slow->next = NULL; // To break the lists
        // merge these two a and b alternatively in a farzi list
        ListNode* c = new ListNode(100);
        ListNode* tempC = c;
        ListNode* tempA = a;
        ListNode* tempB = b;
        while(tempA != NULL && tempB != NULL){
            tempC->next = tempA;
            tempA = tempA->next;
            tempC = tempC->next;
            tempC->next = tempB;
            tempB = tempB->next;
            tempC = tempC->next;
        }
        tempC->next = tempA;
        head = c->next;
    }
};