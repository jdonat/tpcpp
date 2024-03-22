//
// Created by admin on 21/03/2024.
//

#ifndef TP_CPP_PIECE_H
#define TP_CPP_PIECE_H
#include "ObjetAleatoire.h"
#include <string>
using namespace std;
class Piece : public ObjetAleatoire {
    int valeurMin;
    int valeurMax;
    string nom;
public:
    Piece();
    float roll(int n);
    float roll();
    string getName();
};


#endif //TP_CPP_PIECE_H
