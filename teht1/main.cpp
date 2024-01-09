#include <iostream>
#include <cstdlib>
#include <ctime>
int game(int maxNum);
using namespace std;

int main()
{
    int maxNum;
    cout<<"Anna maksimi arvo luvulle mitä haluat arvata"<<endl;
    cin>>maxNum;
    srand(10);
    int arvaukset = game(maxNum);
    cout<<"arvauksia meni: "<<arvaukset<<endl;
}

int game(int maxNum){
    int quesses = 1;
    int quessedNum;
    int randNum = rand() % maxNum;
    do {
        cout<<"Arvaa luku"<<endl;
        cin>>quessedNum;
        if(quessedNum < randNum){
            cout<<"Luku on isompi kuin arvauksesi"<<endl;
            quesses++;
        }
        else if(quessedNum > randNum){
            cout<<"Luku on pienempi kuin arvauksesi"<<endl;
            quesses++;
        }
        else if(quessedNum == randNum){
            cout<<"oikea vastaus"<<endl;
        }
    }
    while(quessedNum != randNum);

    return quesses;


}
