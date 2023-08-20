#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void fillSieve(vector <bool> &sieve){
        int n = sieve.size() -1;
        for(int i = 2;i<=sqrt(n) ;i++){
            for(int j = 2*i; j<=n; j+=i){
                sieve[j] = 0;
            }
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        int n = nums.size();
        // to find max element 
        int maxi = 0;
        for(int i =0 ;i<n ;i++){
            maxi = max(nums[i],maxi);
        }
        // Find Primes till biggest number
        vector <bool> sieve(maxi+1,1); // 1 represents prime
        if((maxi+1) >0) sieve[0] = 0;
        if((maxi+1) >1) sieve[1] = 0;
        fillSieve(sieve);
        // Put all the prime numbers in the Primes vector
        vector <int> primes;
        for(int i=2 ;i<=maxi;i++){
            if(sieve[i] == 1) primes.push_back(i);
        }
        // See if the Prime number is taken i.e, it is a factor of any of the given numbers in the nums array
        vector<bool> taken(primes.size(),0);

        for(int i = 0; i<nums.size();i++){
            int ele = nums[i];
            for(int j = 0 ;j<primes.size() ; j++){
                if(primes[j] > ele) break;
                if(ele%primes[j] == 0) taken[j] = 1;
            }
        }
        int count = 0;
        for(int i =0 ;i< taken.size() ;i++){
            if(taken[i] == 1) count++;
        }
        return count ;
    }
};

// LEETCODE [2521]
// Given an array of positive integers nums,
// return the number of distinct prime factors in the product of the elements of nums.
// Note that:
// A number greater than 1 is called prime if it is divisible by only 1 and itself.
// An integer val1 is a factor of another integer val2 if val2 / val1 is an integer.