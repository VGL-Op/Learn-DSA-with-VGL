//234. Palindrome Linked List (Slow and Fast Pointer Method)
// 

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
    bool isPalindrome(ListNode* head) {
       // Slow and fast pointer approach 
       ListNode* slow = head;
       ListNode* fast = head;
       while(fast->next != NULL && fast->next->next != NULL){
           slow = slow->next;
           fast = fast->next->next;
       }
       // Slow will be on the left middle / middle
       ListNode* newHead = reverseList(slow->next);
       ListNode* a = head;
       ListNode* b = newHead;
       while(b){
           if(a->val != b->val) return false;
           a = a->next;
           b = b->next;
       }
       return true;
    }
};