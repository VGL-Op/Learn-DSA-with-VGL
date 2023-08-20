// Merge K sorted LL
// You are given an array of k linked-lists lists, each linked-list is sorted
// in ascending order.

// Merge all the linked-lists into one sorted linked-list and return it.

#include <bits/stdc++.h>
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
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        if(arr.size() == 0) return NULL;
        while(arr.size()>1){
            ListNode* a = arr[0];
            arr.erase(arr.begin());
            ListNode* b = arr[0];
            arr.erase(arr.begin());
            ListNode* c = merge(a,b);
            arr.push_back(c);
        }
        return arr[0];
    }
};
// TC = O(N*K*logK)
