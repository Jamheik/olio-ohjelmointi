#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>

using namespace std;

class Asunto
{
public:
        Asunto();
        void maaritaAsunnot();
        int asukasMaara;
        int neliot;
        double laskeKulutus(double);
    };

#endif // ASUNTO_H
