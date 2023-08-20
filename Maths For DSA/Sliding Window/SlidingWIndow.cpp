#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,7,1,2,5,8,4,9,3,6}; int k = 3;
    int n = 10;
    int maxSum = 0;
    int maxIdx = -1;
    int prevSum = 0;
    for(int i = 0; i< k;i++){
        prevSum+=arr[i];
    }
    maxSum = prevSum;
    int i = 1;
    int j = k;
    // Sliding Window Operation
    while(j<n){ // Tno = N-K
        int currSum = prevSum + arr[j] - arr[i-1];
        if(maxSum < currSum){
            maxSum = currSum;
            maxIdx = i;
        }
        prevSum = currSum;
        i++;
        j++;
    }
    cout << maxSum << " and max index is " <<maxIdx ;
    
}
// TC = O(n)
