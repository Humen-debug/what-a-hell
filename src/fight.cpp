#include "fight.h"
#include <iomanip>
#include <time.h>

#include <iostream>

using namespace std;
void fightScreen(Player player, Map map) {
    srand(time(NULL));
    int monsterN = rand() % monsterSize;
    float mHp = monsters[monsterN].hp;
    char key;
    while (mHp != 0 && player.hp != 0) {
        int showMHp = mHp / monsters[monsterN].hp * 50;
        cout << "Monster's HP: " << mHp << '/' << monsters[monsterN].hp << endl;
        cout << '|' << setfill(' ') << string(showMHp, '*')
             << setw(50 - showMHp) << '|' << endl;
        renderNpc("monster", "");
        cout << "Player's HP" << endl;
        cout << '|' << string(player.hp / 2, '*') << setfill(' ')
             << setw(50 - player.hp / 2) << '|' << endl;
        cout << "ACTION (please input number 1-4)" << endl
             << "1 - Attack               2 - Defence " << endl
             << "3 - Use Something        4 - Escape" << endl;
        cin >> key;
        if (key == '1') {
            // need to get player weapon first...
            if (rand() % 10 >= 0) {    // rate of hitting
                mHp -= 10;             // should be weapon damage
                cout << "Player: Successfully make " << 1 << " damage." << endl;
            } else {
                cout << "Player: Miss!" << endl;
            }
            // monster strongness? (6)
            if (rand() % 10 >= 6 && mHp > 0) {
                player.hp -= 10;
                cout << "Monster: Got you!" << endl;
            } else {
                cout << "Monster: Miss!" << endl;
            }
        }
        cout << endl;
    }
    if (player.hp == 0) {
        cout << "You die!" << endl;
    } else {
        cout << "You kill the monster!" << endl;
        map.removeMonster(player.x, player.y);
    }
}
