//
// Created by admin on 21/03/2024.
//
#include "Tirage.h"
#include "ObjetAleatoire.h"
#include "RandomNumberGenerator.h"
#include <iostream>

Tirage::Tirage(float suc, float crit, float ech, De obj) {
    this->succes = suc;
    this->critique = crit;
    this->echec = ech;
    this->nom = obj.getName();
    this->resultat=obj.roll();
}
Tirage::Tirage(float suc, float crit, float ech, Piece obj) {
    this->succes = suc;
    this->critique = crit;
    this->echec = ech;
    this->nom = obj.getName();
    int r = RandomNumberGenerator::generate(1, 5);
    this->resultat=obj.roll(r);
}
Tirage::Tirage(float suc, float crit, float ech, Deck obj) {
    this->succes = suc;
    this->critique = crit;
    this->echec = ech;
    this->nom = obj.getName();
    this->resultat=obj.roll();

}
Tirage::Tirage(){
    this->succes = 0;
    this->critique = 0;
    this->echec = 0;
    this->resultat=0;
}
float Tirage::getResultat(){
    return this->resultat;
}
string Tirage::getResultatString() {
    if(this->resultat <= this->echec){
        return "Echec critique !";
    }
    else {
        if(this->resultat < this->succes){
            return "Echec !";
        }
        else {
            if(this->resultat < this->critique){
                return "Réussite !";
            }
            else {
                return "Réussite critique !";
            }
        }
    }
}
float Tirage::getSucces(){
    return this->succes;
}
float Tirage::getCritique(){
    return this->critique;
}
float Tirage::getEchec(){
    return this->echec;
}
string Tirage::getName(){
    return this->nom;
}