#include <iostram>
using namespace std;
int main(){
    int n ; 
    cout << "Enter the number " <<endl;
    cin >> n;
    int n = 0;
    for (int i = 2 ; i<= n ;i++){
        int a = 0,b=1;
        int n = a+b;
        int a = b;
        int b = n ;
    }
    cout << "The nth term is : "<<n<<endl;

    return 0;
}