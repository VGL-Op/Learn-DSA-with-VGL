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
    ListNode* middleNode(ListNode* head) {
       ListNode* slow = head;
       ListNode* fast = head;
       // Conditions in reverse order will give runtime error
       while(fast != NULL && fast->next != NULL){ // condition for even and odd
           slow = slow->next;
           fast = fast->next->next;
       }
       return slow;
    }
};

// if for any node temp we want to check/ getValue of temp->next
// then please first check whether the temp itself is NULL or not
// ****************************************************************
// to find the left middle in case of even size ll use this condition
// while(fast->next->next != NULL){same code}