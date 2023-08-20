//725. Split Linked List in Parts

#include <iostream>
#include <vector>
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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        // Find the length of the linked list
        int n = 0;
        ListNode* temp = head;
        while(temp){
            n++;
            temp = temp->next;
        }
        // Breaking the list into k lists
        vector <ListNode*> ans;
        int size = n/k;
        int rem = n%k;
        temp = head;
        while(temp){
            ListNode* c = new ListNode(100); // Farzi Node
            ListNode* tempC = c;
            int s = size;
            if(rem>0) s++;
            rem--;
            for(int i=1; i<=s; i++){
                tempC->next = temp;
                tempC = tempC->next;
                temp = temp->next;
            }
            tempC->next = NULL;
            ans.push_back(c->next);
        }   
        if(ans.size()<k){
            int extra = k-ans.size();
            for(int i = 1;i<=extra ;i++){
                ans.push_back(NULL);
            }
        }
        return ans;
    }
};

// Given the head of a singly linked list and an integer k, split the linked list into k consecutive linked list parts.

// The length of each part should be as equal as possible: no two parts should have a size differing by more than one. This may lead to some parts being null.

// The parts should be in the order of occurrence in the input list, and parts occurring earlier should always have a size greater than or equal to parts occurring later.

// Return an array of the k parts.