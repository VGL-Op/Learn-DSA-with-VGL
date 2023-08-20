#include <iostream>
using namespace std;
int binaryToDecimal(string &s)
{ 
    int n = s.length();
    int result = 0;
    for(int i = n-1 ;i>=0;i--){
        char ch = s[i];
        int num = ch-'0';
        result += num*(1<<(n-i-1)); // this is used instead of pow(2,x);
    }
    return result;
}

string decimalToBinary(int num){
    string result = "";
    while(num>0){
        if(num%2==0){ // EVEN ke case me
            result += "0";
        }
        else{ // Odd ke case me
            result+= "1";
        }
        num = num/2;
    }
    return result;
}
int main()
{
    string str = "1100";
    cout << binaryToDecimal(str) <<endl;
    int num = 12;
    cout << decimalToBinary(num);
    return 0;
}