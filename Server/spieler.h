#ifndef SPIELER_H
#define SPIELER_H
#include "spielfeld.h"

class Spieler
{
private:
    int nummer;
protected:
    std::string name;

public:
    void setzeNummer(int n);
    int gibNummer();
    void setzeName(std::string Spielername);
    std::string gibNamen();
    void macheZug(Spielfeld &feld, int spalteNummer);
    Spieler();
};

#endif // SPIELER_H
