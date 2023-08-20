//2058. Find the Minimum and Maximum Number of Nodes Between Critical Points
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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        // Shorter Version of the code
        int idx = 1;
        int fidx = -1;
        int sidx = -1;
        ListNode* a = head;
        ListNode* b = head->next;
        ListNode* c = head->next->next;
        if(c==NULL) return {-1,-1};
        int mind = INT_MAX;
        int f = -1; // for mind
        int s = -1;
        while(c){
            if((b->val > a->val && b->val > c->val) || (b->val < a->val && b->val < c->val)){
                // maxd
                if(fidx==-1) fidx = idx ;
                else sidx = idx;
                // mind
                f = s;
                s = idx;
                if(f!=-1){
                    int d = s-f;
                    mind = min(d,mind);
                }
            }
            a = a->next;
            b = b->next;
            c = c->next;
            idx++;
        }
        if(sidx==-1) return {-1,-1};
        int maxd = sidx - fidx;
        return {mind,maxd};

    }
};