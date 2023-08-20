// Remove Duplicates from Sorted List

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next ==NULL) return head;
        ListNode* a = head;
        ListNode* b = head->next;
        while(b!=NULL){
            while(b!=NULL && b->val==a->val){
                b = b->next;
            }
            a->next = b;
            // For next round
            a = b;
            if(b!=NULL) b = b->next;
        }
        return head;
    }
};
// Given the head of a sorted linked list, delete all duplicates such that
//  each element appears only once. Return the linked list sorted as well.