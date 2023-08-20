//234. Palindrome Linked List

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
        ListNode* c = new ListNode(100);
        // Deep Copy of head 
        ListNode* temp = head;
        ListNode* tempC = c;
        while(temp){
            ListNode* node = new ListNode(temp->val);
            tempC->next = node;
            temp = temp->next;
            tempC = tempC->next;
        }
        c = c->next;
        c = reverseList(c); // TC = O(N)
        ListNode* a = head;
        ListNode* b = c;
        while(a){
            if(a->val != b->val) return false;
            a = a->next;
            b = b->next;
        }
        return true;
    }
};

// TC = O(N) SC = O(N)