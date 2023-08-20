//2074. Reverse Nodes in Even Length Groups


#include <iostream>
#include <vector>
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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* temp = head;
        int gap = 1;
        while(temp && temp->next){
            // Find out remLen for last block
            int remLen = 0;
            ListNode *t = temp->next;
            for(int i = 1; i<=gap+1 && t!=NULL;i++){
                t = t->next;
                remLen++;
            }
            if(remLen < gap+1) gap = remLen-1;
            if(gap%2 != 0) reverseBetween(temp,2,2+gap); // odd gap means even length
            gap++;
            // traverse the temp
            for(int i =1;temp!=NULL && i<=gap ;i++){
                temp = temp->next;
            } 
        }
        return head;
    }
};

// You are given the head of a linked list.

// The nodes in the linked list are sequentially assigned to non-empty groups whose lengths form the sequence of the natural numbers (1, 2, 3, 4, ...). The length of a group is the number of nodes assigned to it. In other words,

// The 1st node is assigned to the first group.
// The 2nd and the 3rd nodes are assigned to the second group.
// The 4th, 5th, and 6th nodes are assigned to the third group, and so on.
// Note that the length of the last group may be less than or equal to 1 + the length of the second to last group.

// Reverse the nodes in each group with an even length, and return the head of the modified linked list.

 