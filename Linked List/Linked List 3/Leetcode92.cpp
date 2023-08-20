// Given the head of a singly linked list and two integers left and right where
//  left <= right, reverse the nodes of the list from position left to position right,
//  and return the reversed list.

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right) return head;
        ListNode* a = NULL;
        ListNode* b = NULL;
        ListNode* c = NULL;
        ListNode* d = NULL;
        ListNode* temp = head;
        int count = 1;
        while(temp){
            if(count==left-1) a = temp;
            if(count==left) b = temp;
            if(count==right) c = temp;
            if(count==right+1) d = temp;
            temp = temp ->next;
            count++;
        }
        if(a) a->next = NULL;
        c->next = NULL;
        c = reverseList(b);
        if(a) a->next = c;
        b->next = d;
        if(a) return head;
        return c;
    }
};