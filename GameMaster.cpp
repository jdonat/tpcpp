//
// Created by admin on 21/03/2024.
//

#include "GameMaster.h"
#include "Tirage.h"
#include "RandomNumberGenerator.h"
#include<list>
#include<string>
#include <cstdlib>
#include <iostream>
GameMaster::GameMaster(list<int> listeFacesDes, list<int> listeNbFaces, int nbPiece, list<int> nbCouleurs, list<int> nbValeurs){
    this->listeDes = {};
    this->listeDecks = {};
    this->listePieces = {};
    this->tyrage = Tirage();
    auto it = listeNbFaces.begin();
    auto itef = listeFacesDes.begin();
    list<int> lst = {};
    int cnt = 0;
    int cntNF = 1;

    cout << "Dés : \n" << *itef << "\n";
    lst.push_back(*itef);
    for(int i = 1; i <= listeFacesDes.size(); i++) {
        advance(itef, 1);
        if (i < *it + cnt) {
            lst.push_back(*itef);
            cout << *itef << "\n";
        } else {
            if (i == *it + cnt) {
                this->listeDes.push_back(De(lst));
                lst = {};
                cnt += *it;
                cntNF++;
                advance(it, 1);
                if(i != listeFacesDes.size()){
                    lst.push_back(*itef);
                    cout << *itef << "\n";
                }
            }
        }
    }
    this->listeDes.push_back(De(lst));
    this->nbDes = listeNbFaces.size();
    cnt = 0;
    cout << "Piece" << "\n";
    for(int i=0; i< nbPiece; i++)
    {
        this->listePieces.push_back(Piece());
        cnt++;
    }
    this->nbPieces = cnt;
    cnt=0;
    cout << "Deck" << "\n";
    it = nbCouleurs.begin();
    itef = nbValeurs.begin();
    this->listeDecks.push_back(Deck(*it, *itef));
    cout << "Col : " << *it << "   Val : " << *itef;
    cnt++;
    for(int i=1; i < nbCouleurs.size(); i++)
    {
        advance(it, 1);
        advance(itef, 1);
        this->listeDecks.push_back(Deck(*it, *itef));
        cout << "Col : " << *it << "   Val : " << *itef << "\n";
        cnt++;
    }
    this->nbDecks = cnt;
}
string GameMaster::pleaseGiveMeACrit(float succes, float critique, float fumble){

    int max = (this->nbPieces+this->nbDes+this->nbDecks-1);
    int r = RandomNumberGenerator::generate(0, max);
    //cout << "Max : " << max << "   Rand : " << r;
    if(r < this->nbDes)
    {
        auto it = this->listeDes.begin();
        advance(it, r);
        this->tyrage = Tirage(succes, critique, fumble, *it);
    }
    else
    {
        if(r < (this->nbDes + this->nbPieces))
        {
            auto it = this->listePieces.begin();
            r -= this->nbDes;
            advance(it, r);
            this->tyrage = Tirage(succes, critique, fumble, *it);
        }
        else
        {
            auto it = this->listeDecks.begin();
            r -= this->nbDes + this->nbPieces;
            advance(it, r);
            this->tyrage = Tirage(succes, critique, fumble, *it);
        }
    }

    return this->tyrage.getResultatString();
}
string GameMaster::getObjetNom(){
    return this->tyrage.getName();
}
float GameMaster::getResultat() {
    return this->tyrage.getResultat();
}
