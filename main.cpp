#include <iostream>
#include "Gamemaster.h"
#include "Logger.h"
using namespace std;
int main() {

    GameMaster gm = GameMaster({1, 2, 3, 4, 5, 6, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19}, {6, 10}, 2, {3, 4}, {18, 13});
    string str = "";
    for(int i = 0; i < 100; i++) {
        str = gm.pleaseGiveMeACrit(0.6, 0.8, 0.2);
        Logger::Log("GameMaster utilise "+gm.getObjetNom()+" et le résultat donne : "+to_string(gm.getResultat())+"\n"+str+"\n");
    }

    return 0;
}
