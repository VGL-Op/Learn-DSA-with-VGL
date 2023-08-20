// Remove nth node from the end of the ll

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;
        // Traverse fast to n+1 steps 
        for(int i=1; i<= n+1; i++){
            if(fast==NULL) return head->next; // if node is at first index
            fast = fast->next;
        }
        // Now move slow and fast with same speed
        while(fast!=NULL){
            slow = slow->next;
            fast = fast->next;
        }
        // now the slow is exactly at left of the nth node from end
        slow->next = slow->next->next;
        return head;
    }
};