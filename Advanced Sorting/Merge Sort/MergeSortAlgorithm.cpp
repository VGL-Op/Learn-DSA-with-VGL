#include <iostream>
#include <vector>
using namespace std;
void merge(vector <int> &a , vector <int> &b , vector <int> &res){
    int i = 0; // a 
    int j = 0; // b 
    int k = 0; // res
    while(i<a.size() && j <b.size()){
        if(a[i] <= b[j]) res[k++] = a[i++]; // Here a[i] < b[j] will also work but merge sort will become UNSTABLE
        else res[k++] = b[j++];
    }
    if(i == a.size())  while(j<b.size())  res[k++] = b[j++];
    if(j == b.size()) while(i<a.size()) res[k++] = a[i++];
}

void mergeSort(vector <int> &v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2 , n2 = n-n/2;
    vector<int> a(n1),b(n2);
    // Copy Pasting
    for(int i = 0; i<n1 ; i++) a[i] = v[i];
    for(int i = 0; i<n2 ; i++) b[i] = v[i+n1];
    // MAGIC 
    mergeSort(a);
    mergeSort(b); 
    // Merge
    merge(a,b,v);
    a.clear();
    b.clear();
    // Due to clearing our space complexity changes from O(N.logN) to 
}

int main(){
    int arr[] = {1,4,6,7,89,79,8};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    vector <int> a(arr,arr+n1);
    cout << "Before Merge Sort " <<endl;
    for(int ele: a){
        cout << ele <<" ";
    }
    cout <<endl <<"After Merge Sort " <<endl;
    mergeSort(a);
    for(int ele: a){
        cout << ele <<" ";
    }
    return 0;
}
