#include <iostream>
#include <vector>
using namespace std;
void printArray(vector <int> arr, int idx){
    if(idx == arr.size()) return ;
    cout << arr[idx] <<endl;
    printArray(arr,idx+1);
}


int main(){
   vector<int> arr = {1,2,3,4,5,66,76,865};
    printArray(arr,0);
    return 0;
} 