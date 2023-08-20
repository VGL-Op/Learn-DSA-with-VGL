// Given the radius of the circle, predict whether numerically the area of this circle is larger than the
// circumference or not.

#include <iostream>
#define pi 3.14
using namespace std;
int main(){
    int radius ; cin >> radius ;
    float area = pi * radius *radius ,circumference = 2 * pi * radius;
    if (area > circumference){
        cout << "The area of the circle is larger "<<endl;
    }
    else {
        cout << "The circumference of the circle is greater " <<endl;
    }

    return 0;
}