// Given an integer array, find the length of longest subarray which has maximum possible bitwise AND value.
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[] = {12,3,1,6,6,6,6,4,3,8,13,3,3,13,8}; // ans = 2 , because 13,13
    int n = 15;
    int ans = 0;
    int maxi = INT_MIN;
    int count = 0;
    for(int i = 0; i< n;i++){
        if(arr[i] > maxi){
            maxi = arr[i];
            count = 1;
        }
        else if(arr[i] == maxi){
            count++;
        }
        ans = max(count,ans);
    } 
    cout << ans <<endl;
}