//
// Created by admin on 21/03/2024.
//

#include "Piece.h"
#include "RandomNumberGenerator.h"
#include <cstdlib>
Piece::Piece(){
    this->valeurMin = 0;
    this->valeurMax = 1;
    this->nom = "une pièce";
}
float Piece::roll(int n){
    int r;
    for(int i = 0; i < n; i++){
        r = RandomNumberGenerator::generate(this->valeurMin, this->valeurMax);
        if(r == 0)
            return 0;
    }
    return 1;
}
string Piece::getName(){
    return this->nom;
}