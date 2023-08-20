#include <iostream>
using namespace std;

class Player{
    public:
    int score; // Data mEmbers 
    int health;
    void showScore(){ // Member Functions
        cout << score <<endl;
    }
    void showHealth(){
        cout << health <<endl;
    }
};

class Calculator{
    public : 
    int a ; 
    int b;
    void add(){
        cout << a+b;
    }
    void product(){
        cout << a*b;
    }
};

int main(){
    // ignore these lines
    Player amit;
    amit.score = 90;
    amit.health = 70;
    amit.showScore();
    amit.showHealth();

    Player ayush;
    ayush.score = 100;
    ayush.health = 69;
    ayush.showScore();
    ayush.showHealth();

    Calculator calci ;
    calci.a = 5;
    calci.b = 10;
    calci.add();
}