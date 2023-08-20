#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,7,1,2,5,8,4,9,3,6}; int k = 3;
    int n = 10;
    int maxSum = 0;
    for(int i =0; i<=n-k ;i++){
        int sum = 0;
        for(int j = i;j<i+k ;j++){
            sum+=arr[j];
        }
        maxSum = max(maxSum,sum);
    }
    cout << maxSum ;
    
}