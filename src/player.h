#ifndef Player_h
#define Player_h

#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include "env.h"

using namespace std;

class Player
{
public:
  Player();
  char mark;
  int x, y;
  float mp, hp, energy;
  // void setData(char key, int max);
  std::vector<std::string> debuffs[max_debuff];
  std::vector<std::string> buffs[max_buff];
  string name, role, gender, race;
};

#endif