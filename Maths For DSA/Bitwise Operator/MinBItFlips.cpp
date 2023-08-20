#include <iostream>
using namespace std;
int main(){
    int x = 20;
    int y = 21;
    cout << __builtin_popcount(x^y)<<endl;
    return 0;
}