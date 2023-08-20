// Two elements of an array a, a[i] and a[j] form an inversion if a[i] >
// a[j] and i < j. Given an array of integers. Find the Inversion Count in
// the array.

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[] = {5,1,3,0,4,9,6}; // 4+1+1+1 TIMES   
    int n = sizeof(arr) / sizeof(arr[0]);
    vector <int> v(arr,arr+n);// same as arr but the copy
    for(int i = 0; i< v.size() ; i++){
        cout << v[i] <<" ";
    }
    cout << endl;
    int count = 0;
    for(int i = 0; i< n-1;i++){
        for(int j = i+1;j<n ;j++){
            if(v[i] > v[j]) count++;
        }
    }
    cout << count <<endl;
    return 0;
}

// Time comp. = O(n2)
// space comp. = O(1)