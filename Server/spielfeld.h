#ifndef SPIELFELD_H
#define SPIELFELD_H
#include <IOSTREAM>

class Spielfeld
{
private:
    int last_x;
    int last_y;
public:
    static const int weite = 7;
    static const int hoehe = 6;

    void consolenAusgabe(std::ostream &os);
    bool istPunktImFeld(int x, int y);
    int belegung(int x, int y);
    int getLastX();
    int getLastY();
    void aendereWert(int x, int y, int a);
    int steineInSpalte(int spalte);
    void werfeInSpalte(int spalte, int spieler);

    Spielfeld();
protected:
    int feld[hoehe][weite];
};

#endif // SPIELFELD_H
