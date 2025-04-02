#include "symulator.h"
#include <QMessageBox>

symulator::symulator()
    : generator(), regulator(), obiekt() {}
symulator::symulator(Generator g, Regulator r, ObiektARX o)
    : generator(g), regulator(r), obiekt(o) {}

double symulator::symulujKrok(double czas) {
    double wartoscZadana = generator.generuj(czas);
    regulator.setWartoscZadana(wartoscZadana);
    regulator.aktualizujUchyb(wyjscieObiektu);
    double sygnalSterowania = regulator.obliczSterowanie();
    wyjscieObiektu = obiekt.obliczWyjscie(sygnalSterowania);
    setLastRegulatorValue(sygnalSterowania);
    setLastObjectOutput(wyjscieObiektu);
    return wyjscieObiektu;
}

double symulator::getWartoscZadana() { return regulator.getWartoscZadana(); }
double symulator::getZaklocenie() { return obiekt.getZaklocenie(); }
double symulator::getSterowanie() { return regulator.getWartoscSterujaca(); }
double symulator::getWyjscieObiektu() { return wyjscieObiektu; }
void symulator::setGenerator(Generator &g) { generator = g; }
void symulator::setRegulatorzHistoria(Regulator &r) {
    double uchyb = regulator.getUchybPrzed();
    double poprzedniUchyb = regulator.getPoprzedniUchybPrzed();
    double sumaUchyb = regulator.getSumaUchybowPrzed();
    double wartoscSterujaca = regulator.getWartoscSterujacaPrzed();
    r.setHistoriaRegulatora(uchyb, poprzedniUchyb, sumaUchyb, wartoscSterujaca);
    regulator = r;
}
void symulator::setRegulator(Regulator &r) {
    regulator = r;
}
void symulator::setObiektARXzHistoria(ObiektARX &o) {
    o.setHistoriaWejsciaWyjscia(obiekt.getUi(), obiekt.getYi());
    obiekt = o;
}
void symulator::setObiektARX(ObiektARX &o){
    obiekt = o;
}
Generator &symulator::getGenerator(){
    return generator;
};
Regulator &symulator::getRegulator(){
    return regulator;
};
ObiektARX symulator::getObiektARX(){
    return obiekt;
};
