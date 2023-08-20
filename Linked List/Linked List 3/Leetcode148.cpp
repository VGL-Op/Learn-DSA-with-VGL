// Sort LL
//Given the head of a linked list, return the list after sorting it in ascending order.
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
 ListNode* merge(ListNode* a, ListNode* b) {
        // Space COmplexity O(1)
        ListNode* c = new ListNode(100);
        ListNode* temp = c;
        while(a!=NULL && b!=NULL){
            if(a->val <= b->val){
                temp->next = a;
                a = a->next ;
                temp = temp->next;
            }
            else{
                temp->next = b;
                b = b->next ;
                temp = temp->next;
            }
        }
        if(a==NULL) temp->next = b;
        else temp->next = a;
        return c->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;
        // TO find the left middle
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        // Now slow is at the left Mid
        ListNode* a = head;
        ListNode* b = slow->next;
        slow->next = NULL;
        // Magic of Recursion
        a = sortList(a);
        b = sortList(b);
        ListNode* c = merge(a,b);
        return c ;
    }
};