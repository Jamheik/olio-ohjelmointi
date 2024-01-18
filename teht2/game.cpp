#include "game.h"

Game::Game(int i)
{
    this->maxNumber = i;
};
void Game::play(){
    srand(time(0));
    this->randomNumber = rand() % this->maxNumber;
    do {
        cout<<"Arvaa luku väliltä 0 - "<<this->maxNumber<<endl;
        cin>>this->playerGuess;
        if(this->playerGuess < this->randomNumber){
            cout<<"Luku on isompi kuin arvauksesi"<<endl;
            this->numOfGuesses++;
        }
        else if(this->playerGuess > this->randomNumber){
            cout<<"Luku on pienempi kuin arvauksesi"<<endl;
            this->numOfGuesses++;
        }
        else if(this->playerGuess == this->randomNumber){
            this->numOfGuesses++;
            cout<<"oikea vastaus, arvauksia meni: "<<this->numOfGuesses<<endl;

        }
    }
    while(this->playerGuess != this->randomNumber);
}
