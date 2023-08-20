#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,4,3,5,1,2};
    int n = 9;
    int res = 0;
    for(int i = 0; i< n;i++){
        res = res ^ arr[i];
    }
    cout << res;
    return 0;
}