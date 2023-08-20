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
        int len = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        if(n==len){
            head = head->next ;
            return head;
        }
        int m = len-n+1;
        int idx = m-1; // the idx of node to be deleted
        temp = head;
        for(int i= 1;i<=idx-1;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};