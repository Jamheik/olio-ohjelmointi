#ifndef KERROS_H
#define KERROS_H
#include <iostream>
#include "katutaso.h"
#include "asunto.h"
using namespace std;

class Kerros : public Katutaso
{
public:
    Kerros();
    Asunto *as1, *as2, *as3, *as4;
    void maaritaAsunnot();
    double laskeKulutus(double hinta);
};

#endif // KERROS_H
