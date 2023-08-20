#include <iostream>
#include <vector>
using namespace std;

class Cricketer{
    public :
    int score;
    int matches;
    int age;
    string name;

};

int main(){

    vector <Cricketer> players;

    Cricketer Virat ;
    Virat.matches = 100;
    Virat.name = "Virat";
    Virat.score = 100;

    Cricketer Mahi;
    Mahi.matches = 38;
    Mahi.name = "Mahi";
    Mahi.score = 120;

    // Cricketer players[20] = {Virat,Mahi};
    // cout<< players[0].matches <<endl; 

    // for(int i = 0; i< 2 ;i++){
    //     cout << players[i].matches <<endl;
    //     cout << players[i].name <<endl;
    //     cout << players[i].score <<endl;
    // }

    for(int i =0; i<2 ;i++){
        Cricketer *players = new Cricketer ;
        players->name ;
        cin >> players[i].push_back(*players);
    }

    return 0;
}