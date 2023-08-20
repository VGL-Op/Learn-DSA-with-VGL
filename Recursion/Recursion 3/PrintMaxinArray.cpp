#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int storeMax(int arr[], int size , int idx){
    if(idx == size) return INT_MIN; // base case
    return max(arr[idx],storeMax(arr,size,idx+1));
}

int main(){
    int arr[] = {1,2,3,4,5,66,7678,865};
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout << storeMax(arr,n,0);
    return 0;
} 