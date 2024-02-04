#include "asunto.h"
#include <iostream>


Asunto::Asunto() {
    cout << "Asunto luotu" << endl;
}

void Asunto::maaritaAsunnot() {
    asukasMaara = 2;
    neliot = 100;

    cout << "Asunnot maaritelty: Asukasmaara: " << asukasMaara << " Neliot:" << neliot<<endl;

}

double Asunto::laskeKulutus(double hinta){
    return asukasMaara * neliot * hinta;
}
