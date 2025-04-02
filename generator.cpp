#include "generator.h"
#include <cmath>

Generator::Generator():
    rodzaj(RodzajSygnalu::Prostokatny), A(66), T(100), p(0.6),czasAktywacji(0)
{

}

double Generator::generuj(double czas) {
    switch (rodzaj) {
    case RodzajSygnalu::Skok:
        return (czas >= czasAktywacji) ? A : 0;
    case RodzajSygnalu::Sinusoida:
        return A * std::sin((2 * 3.14159265359 / T) * std::fmod(czas, T));
    case RodzajSygnalu::Prostokatny:
        return (std::fmod(czas, T) < p * T) ? A : 0;
    default:
        return 0.0;
    }
}
QString RodzajSygnaluToString(RodzajSygnalu rodzaj) {
    switch (rodzaj) {
    case RodzajSygnalu::Skok:
        return "Skok";
    case RodzajSygnalu::Sinusoida:
        return "Sinusoida";
    case RodzajSygnalu::Prostokatny:
        return "Prostokatny";
    default:
        return "Nieznany";
    }
}
void Generator::resetuj() {
    rodzaj = RodzajSygnalu::Skok;
    A = 0;
    T = 1.0;
    p = 0.5;
    czasAktywacji = 0;
}
