#include "italianchef.h"


ItalianChef::ItalianChef(string italianChefName, int vesi, int jauhot): Chef(italianChefName)
{
    ItalianChef::name = italianChefName;
    ItalianChef::vesi = vesi;
    ItalianChef::jauhot = jauhot;
}
string ItalianChef::getName(){
    return name;
}

void ItalianChef::makePasta(int water, int flour){
    cout<<"Chef "<<name<<" makes pasta with special recipe"<<endl;
    cout<<"Chef "<<name<<" used flour = "<<water<<endl;
    cout<<"Chef "<<name<<" used water = "<<flour<<endl;
}
