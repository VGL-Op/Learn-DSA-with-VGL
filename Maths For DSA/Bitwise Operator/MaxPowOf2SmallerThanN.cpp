#include <iostream>
using namespace std;
// Approach 2
int max_Power_of2(int n){
    n = n|(n>>1);
    n = n|(n>>2);
    n = n|(n>>4);
    n = n|(n>>8);
    n = n|(n>>16);
    return (n+1)>>1;


}
int main(){
    // Approach 1
    int x = 19;
    int temp ;
    while(x!=0){
        temp  = x;
        x = x & (x-1);
    }
    cout << temp <<endl;
    cout << max_Power_of2(19) <<endl;
    return 0;
}
// to find max of power of 2 greater than x , multiply above answer with 2