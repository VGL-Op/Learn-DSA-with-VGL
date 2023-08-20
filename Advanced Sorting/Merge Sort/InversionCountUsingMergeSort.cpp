#include <iostream>
#include <vector>
using namespace std;
int count  = 0; // Created a global variable

int inversion(vector <int> &a , vector <int> &b){
    int c = 0;
    int i = 0; // a
    int j = 0; // b
    while(i<a.size() && j<b.size()){
        if(a[i] > b[j]){
            count += (a.size()-i);
            j++;
        }
        else{
            i++;
        }
    }
    return c;
}
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
    // MAGIC Aka Recursion 
    mergeSort(a);
    mergeSort(b); 
    // Count the Inversion 
    count+= inversion(a,b);
    // Merge
    merge(a,b,v);
    a.clear();
    b.clear();
    // Due to clearing our space complexity changes from O(N.logN) to 
}

int main(){
    int arr[] = {5,1,3,0,4,9,6};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    vector <int> a(arr,arr+n1);
    
    for(int ele: a){
        cout << ele <<" ";
    }
   cout << endl;
    mergeSort(a);
    cout << count <<endl;

    return 0;
}
