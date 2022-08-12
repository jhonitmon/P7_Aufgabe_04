#include "spieler.h"
#include "spielfeld.h"

using namespace std;

void Spieler::setzeNummer(int n) {
    nummer = n;
}

int Spieler::gibNummer() {
    return nummer;
}

void Spieler::setzeName(string Spielername) {
    name = Spielername;
}

string Spieler::gibNamen() {
    return name;
}

void Spieler::macheZug(Spielfeld &feld, int spalteNummer) {
    feld.werfeInSpalte(spalteNummer, nummer);
}

Spieler::Spieler()
{

}
