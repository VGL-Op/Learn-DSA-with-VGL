#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i< n;i++){
        arr[i] += arr[i-1];
    }
    // Partition Formula or Logic
    int idx = -1;
    for(int i=1; i<n;i++){
        if(2*arr[i] == arr[n-1]){
             idx = i;
             break;
        }
    }
    if(idx!=-1) cout << "Yes It can be partitioned at "<<idx <<endl;
    else cout <<"NO , It cannot be partitioned" <<endl;

    return 0;
}