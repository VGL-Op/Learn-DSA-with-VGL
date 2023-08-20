// Leetcode [1004]
//Given a binary array nums and an integer k, return the maximum number of consecutive 1's
// in the array if you can flip at most k 0's.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int flips = 0, i = 0, j =0;
        int maxLen = INT_MIN, len = INT_MIN;
        while(j<n){
            if(nums[j]==1) j++;
            else{
                if(flips < k){
                    flips++;
                    j++;
                }
                else{
                    // flips == k
                    // calculate the length

                    len = j-i; // because j ka index 1 element aage hain
                    maxLen = max (len,maxLen);
                    // i ko first 0 se just ek element aage le jao
                    while(nums[i]==1) i++; 
                    i++;
                    j++;
                }
            }
        }
        len = j-i;
        maxLen = max(len,maxLen); // To check the length of the last remaining window
        return maxLen;
    }
};