#ifndef KATUTASO_H
#define KATUTASO_H
#include <iostream>
#include "asunto.h"

using namespace std;

class Katutaso
{
public:
    Katutaso();
    Asunto* as1;
    Asunto* as2;

    void maaritaAsunnot();
    double laskeKulutus(double);
};

#endif // KATUTASO_H
