#ifndef GAME_H
#define GAME_H
#include "iostream"
#include "time.h"
using namespace std;
class Game
{
public:
    Game(int i);
    ~Game(){
        cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
    }
    void play();

private:
    void printGameResult();
    int maxNumber, randomNumber, playerGuess;
    int numOfGuesses = 0;


};

#endif // GAME_H
