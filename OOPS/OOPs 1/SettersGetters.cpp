#include <iostream>
using namespace std;

class Player{
    private :
    int score;
    int health ;

    public:
    // setters
    void setScore(int s){
        score = s;
    }
    void setHealth(int h){
        health = h;
    }
    // getters
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};

int main(){
    // ignore these lines
    Player harsh;
    harsh.setScore(10);
    cout << harsh.getScore();
    cout << endl;
    harsh.setHealth(100);
    cout << harsh.getHealth();


}