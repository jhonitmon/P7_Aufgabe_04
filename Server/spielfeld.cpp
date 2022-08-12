#include "spielfeld.h"

using namespace std;

void Spielfeld::consolenAusgabe(std::ostream &os){
    cout << endl;
    os << " |";
    for (int i = 0; i < weite; i++) {
        os << " " << i + 1;
    }
    os << endl << "-+";
    for (int i = 0; i < weite; i++) {
        os << "--";
    }

    os << endl;
    for (int i = 0;i < hoehe; i++){
        os << i + 1 << "|";
        for (int j = 0;j < weite; j++){
            os << " " << feld[i][j];
        }
        os << endl;
    }
    cout << endl;
}

bool Spielfeld::istPunktImFeld(int x, int y){
    if (x <= Spielfeld::weite && y <= Spielfeld::hoehe && x >= 0 && y >= 0) {
        return true;
    } else {
        return false;
    }
}

int Spielfeld::belegung(int x, int y){
    if(istPunktImFeld(x, y) == 1) {
        return feld[y - 1][x - 1];
    } else {
        return NULL;
    }
}

int Spielfeld::getLastX() {
    return Spielfeld::last_x;
}

int Spielfeld::getLastY() {
    return Spielfeld::last_y;
}

void Spielfeld::aendereWert(int x, int y, int a) {
    if (istPunktImFeld(x,y) == 1) {
        last_x = x;
        last_y = y;
        feld[y - 1][x - 1] = a;
    } else {
        cout << "Stelle ist nicht gueltig!" << endl;
    }
}

int Spielfeld::steineInSpalte(int spalte) {
    int counter = 0;
    for (int i = 0;i < hoehe; i++){
        if (feld[i][spalte - 1] != 0) {
            counter++;
        } else {
            continue;
        }
    }
    return counter;
}

void Spielfeld::werfeInSpalte(int spalte, int spieler) {
    int y = hoehe - steineInSpalte(spalte);
    aendereWert(spalte , y, spieler);
}

Spielfeld::Spielfeld()
{
    for (int i = 0; i < hoehe; i++){
        for (int j = 0; j < weite; j++){
            feld[i][j] = 0;
        }
    }
}
