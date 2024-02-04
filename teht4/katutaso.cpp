#include "katutaso.h"

Katutaso::Katutaso(){
    cout<<"Katutaso luotu"<<endl;
    cout<<"Maaritetaan 2kpl katutason asuntoja"<<endl;
    as1.maaritaAsunnot();
    as2.maaritaAsunnot();
}

double Katutaso::laskeKulutus(double hinta){
    double kulutus = (as1.asukasMaara * as1.neliot * hinta) + (as2.asukasMaara * as2.neliot * hinta);

    return kulutus;
}
