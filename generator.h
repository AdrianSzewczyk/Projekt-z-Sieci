#ifndef GENERATOR_H
#define GENERATOR_H

#include <QString>
enum class RodzajSygnalu { Skok, Sinusoida, Prostokatny };
QString RodzajSygnaluToString(RodzajSygnalu rodzaj);
class Generator {
    RodzajSygnalu rodzaj;
    double A, T, p, czasAktywacji;
public:
    Generator();
    double generuj(double czas);
    RodzajSygnalu getRodzaj() const { return rodzaj; }
    double getAmplituda() const { return A; }
    double getOkres() const { return T; }
    double getWypelnienie() const { return p; }
    void setRodzaj(RodzajSygnalu r) { rodzaj = r; }
    void setAmplituda(double a) { A = a; }
    void setOkres(double o) { T = o; } // tutaj blad
    void setWypelnienie(double w) { p = w; }
    void setCzasAktywacji(double ca) { czasAktywacji = ca; }
    void resetuj();

};

#endif // GENERATOR_H

