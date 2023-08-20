#include <iostream>
#include <vector>
#include <string>
using namespace std;
void removeInt(vector<int> &ans ,vector<int> &original, int idx){
    if(idx == original.size()){
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] <<" ";
        }
        return ;
    }
    int elem = original[idx];
    if(elem==1) removeInt(ans,original,idx+1);
    else{
    ans.push_back(elem);
    removeInt(ans,original,idx+1);
    }

}
int main(){ 
    vector<int>arr = {12,32,45,54,23,12,1,1,32,1,12};
    vector<int>ans;
    removeInt(ans,ans,0);
    return 0;
}
