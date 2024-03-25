//
// Created by admin on 21/03/2024.
//

#include "Deck.h"
#include "RandomNumberGenerator.h"
#include <iostream>
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

    float res = static_cast<float>(r)/static_cast<float>(this->valeurMax);
    cout << "Min : " << this->valeurMin << "Max : " << this->valeurMax << "Res : " << r << "Res 2 :" << res;
    return res;
}
string Deck::getName(){
    return this->nom;
}