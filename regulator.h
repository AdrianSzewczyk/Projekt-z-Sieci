#ifndef REGULATOR_H
#define REGULATOR_H
#include <cmath>

class Regulator
{
    double wartoscZadana, wzmocnienieP, stalaI, stalaD, Uchyb, WczesniejszyUchyb, sumaUchybow,sumaUchybow2, WartoscSterujaca, nastawaP, nastawaI, nastawaD;
    bool CalkowanieWsumie;
public:
    Regulator();
    Regulator(double kp, double ki, double kd);
    void setWartoscZadana(double war);
    double getWartoscZadana() const;
    void aktualizujUchyb(double wartoscRegulowana);
    double obliczSterowanie();
    double getWartoscSterujaca();
    double getUchyb();
    double getNastawaP();
    double getNastawaI();
    double getNastawaD();
    double getWzmocnienie(){return wzmocnienieP;}
    double getStalaI(){return stalaI;}
    double getStalaD(){return stalaD;}
    void ZerowanieNastawaI();
    void ZerowanieNastawaD();
    void ZerowanieNastawaP();
    void setWartoscSterujaca(double on){WartoscSterujaca=on;}
    void setWzmocnienie(double w){wzmocnienieP=w;}
    void setStalaI(double si){stalaI=si;}
    void setStalaD(double sd){stalaD=sd;}
    double getUchybPrzed() const;
    double getPoprzedniUchybPrzed() const;
    double getSumaUchybowPrzed() const;
    double getWartoscSterujacaPrzed() const;
    void setHistoriaRegulatora(double uchyb, double poprzedniUchyb, double sumaUchybow, double wartoscSterujaca);
    void resetuj();
    void setCalkowanieWsumie(bool t){CalkowanieWsumie=t;}
    bool getCalkowanieWsumie(){return CalkowanieWsumie;}
};

#endif // REGULATOR_H
