// Interview favourite but a little old
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
        int length = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            length++;
            temp = temp->next;
        }
        int midIdx = length/2;
        ListNode* mid = head;
        for(int i= 1 ;i<=midIdx ;i++) mid = mid->next;
        return mid;
    }
};