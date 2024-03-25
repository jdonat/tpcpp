#include <iostream>
#include "Gamemaster.h"
using namespace std;
int main() {

    GameMaster gm = GameMaster({1, 2, 3, 4, 5, 6, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19}, {6, 10}, 2, {3, 4}, {18, 13});
    string str = "";
    for(int i = 0; i < 10; i++) {
        str = gm.pleaseGiveMeACrit(0.7, 0.9, 0.1);
        cout << "GameMaster utilise " << gm.getObjetNom() << " et le résultat donne : " << gm.getResultat() << "\n";
        cout << str << "\n";
    }

    return 0;
}
