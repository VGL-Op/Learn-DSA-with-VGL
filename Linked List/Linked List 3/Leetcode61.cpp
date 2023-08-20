// Given the head of a linked list, rotate the list to the right by k places.

#include <bits/stdc++.h>
using namespace std;

 //Definition for singly-linked list.
  struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        // condition in case of empty or 1 sized ll
        if(head == NULL || head->next == NULL) return head;
        // First find the length of the LL
        int n = 0;
        ListNode* temp = head;
        ListNode* tail = NULL;
        while(temp != NULL){
            if(temp->next == NULL) tail = temp;
            temp = temp->next;
            n++;
        }
        k = k%n;
        if(k==0) return head;
        // Placing temp at (n-k)th position
        temp = head;
        for(int i = 1; i< n-k ;i++){
            temp= temp->next;
        }
        tail->next = head;
        head = temp->next; // To return Head
        temp->next = NULL;
        return head;
    }
};

// This can also be solved by fast and slow pointers but it will 
// not be good in case of k>=n 