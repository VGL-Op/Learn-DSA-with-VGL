#include <iostream>
#include <vector>
using namespace std;   
   
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int k = minutes;
        vector <int> &arr = customers;
        int n = arr.size();
        int prevLoss = 0;
        // calculate prevLoss for Single (first) window
        for(int i = 0; i< k; i++){
            if(grumpy[i]==1) prevLoss+=arr[i];
        }
        int maxLoss = prevLoss;
        int maxIdx = 0;
        int i = 1;
        int j = k;
        // Apply Sliding Window algorithm

        while(j<n){
            int currLoss = prevLoss;
            if(grumpy[j]==1) currLoss += arr[j];
            if(grumpy[i-1] == 1) currLoss -= arr[i-1];
            if(maxLoss < currLoss){
                maxLoss = currLoss;
                maxIdx = i;
            }
            prevLoss = currLoss;
            i++;
            j++;
        }

        // Filling 0s in the grumpy array window
        for(int i = maxIdx; i<maxIdx +k;i++){
            grumpy[i] = 0;
        }

        // Sum of Satisfaction
        int ans = 0;
        for(int i = 0; i< n;i++){
            if(grumpy[i] == 0) ans+=arr[i];
        }
        return ans;
    }
// LEETCODE (1052)
// There is a bookstore owner that has a store open for n minutes. Every minute, some number of customers enter the store. You are given an integer array customers of length n where customers[i]
// is the number of the customer that enters the store at the start of the ith minute and all those customers leave after the end of that minute.

// On some minutes, the bookstore owner is grumpy. You are given a binary array grumpy where grumpy[i] is 1 if the bookstore owner is grumpy during the ith minute, and is 0 otherwise.

// When the bookstore owner is grumpy, the customers of that minute are not satisfied, otherwise, they are satisfied.

// The bookstore owner knows a secret technique to keep themselves not grumpy for minutes consecutive minutes, but can only use it once.

// Return the maximum number of customers that can be satisfied throughout the day.