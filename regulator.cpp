#include "regulator.h"


Regulator::Regulator(double kp, double ki, double kd)
    : wartoscZadana(0), wzmocnienieP(kp), stalaI(ki), stalaD(kd), Uchyb(0), WczesniejszyUchyb(0), sumaUchybow(0),sumaUchybow2(0), WartoscSterujaca(0) {}
void Regulator::setWartoscZadana(double war) { wartoscZadana = war; }
double Regulator::getWartoscZadana() const { return wartoscZadana; }

void Regulator::aktualizujUchyb(double wartoscRegulowana) {
    WczesniejszyUchyb = Uchyb;
    Uchyb = wartoscZadana - wartoscRegulowana;
    if (stalaI != 0) {
        if(!CalkowanieWsumie){
            sumaUchybow += Uchyb;
        }else if(CalkowanieWsumie){
            sumaUchybow += Uchyb/stalaI;
        }
    }
}

Regulator::Regulator()
    : wartoscZadana(0), wzmocnienieP(0.1), stalaI(5), stalaD(0.1),
    Uchyb(0), WczesniejszyUchyb(0), sumaUchybow(0), WartoscSterujaca(0),CalkowanieWsumie(true) {}


double Regulator::obliczSterowanie() {
    nastawaP = wzmocnienieP * Uchyb;
    //nastawaI = 0;
    if (std::abs(stalaI) > 1e-6) {
        if(!CalkowanieWsumie){
            nastawaI = sumaUchybow/stalaI ;
        }else if(CalkowanieWsumie){
            nastawaI =  sumaUchybow;
        }

    } else {
        nastawaI = 0;
    }

    nastawaD = stalaD * (Uchyb - WczesniejszyUchyb);

    WartoscSterujaca = nastawaP + nastawaI + nastawaD;
    return WartoscSterujaca;
}

double Regulator::getWartoscSterujaca() {
    return WartoscSterujaca;
}
double Regulator::getUchyb(){
    return Uchyb;
}
double Regulator::getNastawaP(){
    return nastawaP;
}
double Regulator::getNastawaI(){
    return nastawaI;
}
double Regulator::getNastawaD(){
    return nastawaD;
}
void Regulator::ZerowanieNastawaD(){
    sumaUchybow=0;
    nastawaI=0;
}
void Regulator::ZerowanieNastawaI(){
    nastawaI=0;
    nastawaD =0;
}
void Regulator::ZerowanieNastawaP(){
    nastawaP=0;
    Uchyb=0;
}
double Regulator::getUchybPrzed() const {
    return Uchyb;
}

double Regulator::getPoprzedniUchybPrzed() const {
    return WczesniejszyUchyb;
}

double Regulator::getSumaUchybowPrzed() const {
    return sumaUchybow;
}

double Regulator::getWartoscSterujacaPrzed() const {
    return WartoscSterujaca;
}

void Regulator::setHistoriaRegulatora(double uchyb, double poprzedniUchyb, double sumaUchyb, double wartoscSterujaca) {
    Uchyb = uchyb;
    WczesniejszyUchyb = poprzedniUchyb;
    sumaUchybow = sumaUchyb;
    WartoscSterujaca = wartoscSterujaca;
}
void Regulator::resetuj() {
    wartoscZadana = 0;
    wzmocnienieP = 0;
    stalaI = 0;
    stalaD = 0;
    Uchyb = 0;
    WczesniejszyUchyb = 0;
    sumaUchybow = 0;
    WartoscSterujaca = 0;
}

