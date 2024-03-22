//
// Created by admin on 21/03/2024.
//

#ifndef TP_CPP_DECK_H
#define TP_CPP_DECK_H
#include "ObjetAleatoire.h"
#include <string>
using namespace std;
class Deck : public ObjetAleatoire {
    int nbCouleurs;
    int nbValeurs;
    int valeurMin;
    int valeurMax;
    string nom;
public:
    Deck(int couleurs, int valeurs);
    float roll() override;
    string getName();
};


#endif //TP_CPP_DECK_H
