// *****VVIMP******
#include <iostream>
#include <vector>
using namespace std;
void findUniqueElement(int *arr,int n){
    int res = 0;
    // Sabka XOR nikalo 
    for(int i = 0; i< n;i++){
        res = res^arr[i];
    }
    int temp = res;
    int k = 0;
    // Kth Set Bit from right side in res
    while(true){
        if((temp & 1)==1) break;
        temp = temp>>1;
        k++; 
    }
    // If the Kth bit of any number in array is set then XORj it with 0
    // As we know out of given two numbers only one number will have set bit 
    // on Kth position hence , only one number will participate in the process
    // and we will get one number as answer in retVal

    int retVal = 0;
    for(int i = 0 ;i<n;i++){
        int num = arr[i];
        if(((num>>k)&1) == 1) retVal ^= num;
    }
    cout << retVal << " ";
    res = retVal ^ res; // To find other unique number 
    cout << res << " ";
}

int main(){
    int arr[] = {1,2,1,3,4,4,6,5,6,2};
    int n = 10;
    findUniqueElement(arr,n);
}