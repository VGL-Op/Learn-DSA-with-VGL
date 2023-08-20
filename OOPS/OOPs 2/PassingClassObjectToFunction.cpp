#include <iostream>
using namespace std;

class Gun{
    public : 
    int ammo ;
    int damage ;
    int scope ;
};
class Player{
    //************** NESTED CLASS ******************
    class Helmet {
        int hp; 
        int level;
        public:
        void setHp(int hp){
            this->hp = hp;
        }
        void setLevel(int level){
            this->level = level;
        }
        int getHp(){
            return hp ;
        }
        int getLevel(){
            return level;
        }
    };
// ***********************************************
    private :
    int health ;
    int age ;
    int score;
    bool alive;
    Gun gun ; // Class as a data type yaha pe use kar rhe hain
    Helmet helmet ;

    public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int isAlive(){
        return alive;
    }
    void setHealth(int health){
        this->health = health;
    }
    void setAge(int age){
        this->age = age;
    }
    void setScore(int score ){
        this->score = score ;
    }
    void setIsAlive(int alive){
        this->alive= alive;
    }
    void setGun(Gun gun){
        this->gun = gun;
    }
    void setHelmet(int level){
        Helmet *helmet = new Helmet;
        helmet-> setLevel(level);
        int health = 0;
        if(level == 1) health = 25;
        else if (level == 2) health = 50;
        else if (level == 3) health = 100;
        else cout << "ERROR, Invalid Helmet !! " <<endl;

        helmet-> setHp(health);
        this->helmet = *helmet ; // means Class ka jo helmet hain ussme hi mein set kar dunga
    }
};

int addScore(Player a , Player b){ // Passing Class as object function
    return a.getScore() + b.getScore();
}

Player getMaxScorePlayer(Player a , Player b){ // Returning Class as a return type
    if(a.getScore() > b.getScore()) 
        return a;
    else 
        return b;
}

int main(){
    Player harsh; // Object Creation , statically
    Player raghav; // Compile time , Static

    Player *urvi = new Player ; // RUn time , Dynamic
    Player urviObject = *urvi;

    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setIsAlive(true);
    harsh.setHealth(70);

    raghav.setAge(24);
    raghav.setScore(70);
    raghav.setIsAlive(true);
    raghav.setHealth(90);

    urvi->setAge(21);
    urvi->setHealth(12);
    cout << urvi->getAge() <<endl;

    // (*urvi).setHealth(23);
    // cout << (*urvi).getHealth() ;
    // cout << endl;

    cout << addScore(harsh,raghav) <<endl;
    Player sanket = getMaxScorePlayer(harsh,raghav);
    cout << sanket.getHealth();

    Gun akm ;
    akm.ammo = 30;
    akm.damage = 12;
    akm.scope = 3;

    Gun awm ;
    awm.ammo = 7;
    awm.damage = 150;
    awm.scope = 8;

    return 0;
}
