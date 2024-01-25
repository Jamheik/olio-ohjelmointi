#include "chef.h"

Chef::Chef(string chefName)
{
    name = chefName;
    cout<<"Chef "<<name<<" constructor"<<endl;
}
Chef::~Chef(){
    cout<<"chef "<<name<< " destructor"<<endl;
}
void Chef::makeSalad(){
    cout<<"Chef "<<name<<" makes salad"<<endl;
}
void Chef::makeSoup(){
    cout<<"Chef "<<name<<" makes soup"<<endl;
}
