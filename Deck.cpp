//
// Created by admin on 21/03/2024.
//

#include "Deck.h"
#include "RandomNumberGenerator.h"
#include <cstdlib>
Deck::Deck(int couleurs, int valeurs) {
    this->nbCouleurs = couleurs;
    this->nbValeurs = valeurs;
    this->valeurMin = 1;
    this->valeurMax = this->nbCouleurs * this->nbValeurs;
    this->nom = "un deck";
}
float Deck::roll(){
    int r = RandomNumberGenerator::generate(this->valeurMin, this->valeurMax);
    float res = (r/this->valeurMax);
    return res;
}
string Deck::getName(){
    return this->nom;
}