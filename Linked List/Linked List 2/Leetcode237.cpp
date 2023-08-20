//237. Delete Node in a Linked List
#include <bits/stdc++.h>
using namespace std;

//  Definition for singly-linked list.
 struct ListNode {
     int val;
    ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    void deleteNode(ListNode* node) {
        // give the value of target node to the next node and delete the next node simple
        node->val = node->next->val;
        node->next = node->next->next;
    }
};