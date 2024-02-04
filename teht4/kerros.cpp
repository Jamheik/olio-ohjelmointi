#include "kerros.h"

Kerros::Kerros()
{
    cout<<"Kerros luotu"<<endl;
    cout<<"Maaritetaan 4kpl kerroksen asuntoja"<<endl;
    as1.maaritaAsunnot();
    as2.maaritaAsunnot();
    as3.maaritaAsunnot();
    as4.maaritaAsunnot();
    laskeKulutus(1);
}

double Kerros::laskeKulutus(double hinta){
    double katutasokulutus = Katutaso::laskeKulutus(1);
    double kerroskulutus = as1.laskeKulutus(1) + as2.laskeKulutus(1) + as3.laskeKulutus(1) + as4.laskeKulutus(1);
    cout<<"Katutason ja kerroksen yhteis kulutus kun hinta on "<<hinta<< " = "<<katutasokulutus + kerroskulutus<<endl;

}
