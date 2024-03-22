//
// Created by admin on 21/03/2024.
//

#ifndef TP_CPP_TIRAGE_H
#define TP_CPP_TIRAGE_H
#include <string>
#include "De.h"
#include "Deck.h"
#include "Piece.h"
using namespace std;
class Tirage
{
    string nom;
    float succes, critique, echec, resultat;

public:
    Tirage(int suc, int crit, int ech, De obj);
    Tirage(int suc, int crit, int ech, Piece obj);
    Tirage(int suc, int crit, int ech, Deck obj);
    Tirage();
    float getResultat();
    float getSucces();
    float getCritique();
    float getEchec();
    string getResultatString();
    string getName();

};

#endif //TP_CPP_TIRAGE_H
