#include <iostream>
#include <stack>
using namespace std;


// Brute Force : T.C = O(n^2) , S.C = O(1);
int main(){
    int arr[] = {3,1,2,7,5,6,1,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int nge[n];
    for(int i = 0; i< n;i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
    for(int i = 0; i< n; i++){
        nge[i] = -1;
        for(int j = i+1 ; j<n ;j++){
            if(arr[j]>arr[i]){
                nge[i] = arr[j];
                break;
            }
        }
    }
     for(int i = 0; i< n;i++){
        cout << nge[i] <<" ";
    }
}