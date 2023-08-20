#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,7,1,2,5,8,4,9,3,6}; int k = 3;
    int n = 10;
    int maxSum = 0;
    int maxIdx = -1;
    for(int i =0; i<=n-k ;i++){ // n-k+1 operations
        int sum = 0;
        for(int j = i;j<i+k ;j++){ // k operations
            sum+=arr[j];
        }
        if(maxSum < sum){
            maxSum = sum;
            maxIdx = i;
        }
    }
    cout << maxSum << " and max index is " <<maxIdx ;
    
}

// Time COmplexity =   O(n-k+1)*k
// Time COmplexity = O(n*k)