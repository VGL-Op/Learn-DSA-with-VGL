//Given the head of a linked list, return the node where the cycle begins. 
//If there is no cycle, return null.

//There is a cycle in a linked list if there is some node in the list that 
//can be reached again by continuously following the next pointer. 
//Internally, pos is used to denote the index of the node that tail's 
//next pointer is connected to (0-indexed). It is -1 if there is no cycle. 
//Note that pos is not passed as a parameter.
//Do not modify the linked list.

#include <bits/stdc++.h>
using namespace std;
 // Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool flag = false; // no cycle
        while(fast!=NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                flag = true;
                break;
            }
        }
        if(flag == false) return NULL; // if there is no cycle
        else{
            ListNode* temp = head;
            // This is crazy remember it!!!
            while(temp!=slow){
                slow = slow->next;
                temp = temp->next;
            }
            return slow;
        }
    }
};