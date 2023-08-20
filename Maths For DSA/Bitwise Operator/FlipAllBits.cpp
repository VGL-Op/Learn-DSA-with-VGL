#include <bits/stdc++.h>
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
    int n = 19;
    int x = max_Power_of2(n);
    int n1 = x<<1;
    cout << x <<endl;
    cout << (n^(n1-1));
    return 0;
}
// CPP program to invert actual bits
// of a number.
// #include <bits/stdc++.h>
// using namespace std;

// void invertBits(int num)
// {
// 	// calculating number of bits
// 	// in the number
// 	int x = log2(num) + 1;

// 	// Inverting the bits one by one
// 	for (int i = 0; i < x; i++)
// 	num = (num ^ (1 << i));

// 	cout << num;
// }

// // Driver code
// int main()
// {
// 	int num = 11;
// 	invertBits(num);
// 	return 0;
// }
