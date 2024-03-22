//
// Created by admin on 21/03/2024.
//

#include "De.h"
#include "RandomNumberGenerator.h"
#include <cstdlib>
#include <iterator>
De::De(int nbFace){
    this->nombreFaces = nbFace;
    this->listeFaces = {};
    for(int i = 1; i <= nbFace; i++){
        this->listeFaces.push_back(i);
    }
    this->valeurMin = 1;
    this->valeurMax = nbFace;
    this->nom = "un dé";
}
De::De(list<int> listFace){

    this->nombreFaces = this->listeFaces.size();
    auto it = this->listeFaces.begin();
    this->valeurMin = *it;
    this->listeFaces.push_back(*it);
    for(int i=1; i<listFace.size(); i++)
    {
        advance(it, 1);
        this->listeFaces.push_back(*it);
    }

    this->valeurMax = *it;
    this->nom = "un dé";
}
float De::roll() {
    int r = RandomNumberGenerator::generate(0, this->nombreFaces-1);
    auto it = this->listeFaces.begin();
    advance(it, r);
    int face = *it;
    float res = face/this->valeurMax;
    return res;
}
string De::getName(){
    return this->nom;
}
