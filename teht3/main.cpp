#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main()
{
    Chef kokki1("Kokki Kolmone");
    ItalianChef italianKokki("Italian Ihme", 100, 250);
    kokki1.makeSalad();
    kokki1.makeSoup();
    italianKokki.makePasta(250, 100);
    return 0;
}
