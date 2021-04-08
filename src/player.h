#ifndef Player_h
#define Player_h

#include "env.h"
// #include "things.h"
#include <string>
#include <vector>

using namespace std;

const int maxDebuff = 12, maxBuff = 2;    // these 2 + 8 is the min map size

struct Buff {
    string name;
    float hp, mp;
    int time;
    // rate of attack increase
    // can add other
};
const Buff allDebuffs[maxDebuff] = {{"Burning", -2, 0, 5}, {"Freezing", -2, 0, 5}, {"Poison", -3, -2, 5}, {"Hunger", -2, -1, 5}, {"Bleeding", -5, 0, 5}};
const Buff allBuffs[maxBuff] = {{"Full", 2, 0, 5}, {"Focus", 0, 2, 5}};

class Player {
  public:
    Player();
    char mark;
    int x, y;
    float mp, hp, energy, maxEnergy, maxMp, maxHp, exp, maxExp, damage, defense, weaponEnergy, weaponMp;
    int level, gameLevel;
    string armor, weapon;
    // void setData(char key, int max);
    vector<Buff> debuffs;
    vector<Buff> buffs;
    string name, role, gender, race;
};

void upgradePlayer(Player &);
// void exchange(Player &, string);
// void updateState(Player &, string, int);
//     float mp, hp, energy, maxMp, maxHp;
//     vector<Buff> debuffs;
//     vector<Buff> buffs;
//     string name, role, gender, race;
// };

void addBuff(bool, int, Player &);
void updateOnBuff(Player &);

#endif