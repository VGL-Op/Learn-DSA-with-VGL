#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int n){
        if(n==1) return false;
        for(int i = 2 ;i<= sqrt(n);i++){
            if(n%i == 0) return false;
        }
        return true;
    }
// Find Greatest Divisor 
    int gdiv(int n){
        for(int i = 2; i<= sqrt(n) ; i++){
            if(n%i==0) return n/i;
        }
        return 1;
    }
    int minSteps(int n) {
        int count = 0;
        
        while(n>1){
            if(isPrime(n)){
            count+= n;
            break;
        }
            int gd = gdiv(n);
            count += (n/gd);
            n = gd;
        }
        return count ;
    }
};
    
// };
// There is only one character 'A' on the screen of a notepad. You can perform one of two operations on this notepad for each step:

// Copy All: You can copy all the characters present on the screen (a partial copy is not allowed).
// Paste: You can paste the characters which are copied last time.
// Given an integer n, return the minimum number of operations to get the character 'A' exactly n times on the screen