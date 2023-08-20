#include <iostream>
#include <vector>
using namespace std;
void printArray(int arr[], int size , int idx){
    if(idx == size) return ;
    cout << arr[idx] <<endl;
    printArray(arr,size,idx+1);
}


int main(){
    int arr[] = {1,2,3,4,5,66,76,865};
    int n = sizeof(arr)/ sizeof(arr[0]);
    printArray(arr,n,0);
    return 0;
} 