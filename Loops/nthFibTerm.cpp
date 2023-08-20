#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    int sum = 0;
    int a = 1, b = 1;
    if (n == 1)
        cout << "1" << endl;
    else if (n == 2)
        cout << "1" << endl;
    else
    {
        for (int i = 3; i <= n; i++)
        {
            sum = a + b;
            a = b;
            b = sum;
        }
    }
    cout << "The nth term is : " << sum << endl;
    return 0;
}