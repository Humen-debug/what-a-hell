<p align=center> <b>YOU DIED. Welcome to the HEll!</b></p>
<p align=center><i>In this game, you control a dead man who falls into hell with plenty of monsters.<br/> Now you must find a way out… or stay trapped and tortured forever.</i></p>

#  What A HELL
A roguelike and turn-based RPG game

## 🎮 Game Rules
1. Enjoy is the first and most important :D
2. Turn-based battles with your strategy
3. `WASD` for movement control
4. When HP goes zero, the character dies with permadeath
5. When MP or Energy goes zero, you cannot attack in battle
6. When Energy goes zero, there are random punishments for you (e.g. your HP decreases by 1 per action)
7. Energy decreases when you make any steps on the map

🚩 Game goal - Defeat all the bosses and achieve different endings

## ✨ Features
- Level-up system with skill points & experience level to upgrade your ability
- Total 10 levels in the dungeon (hell). Different levels of the dungeon offer a range of difficulty in monsters corresponding with the range of value in treasure
- Generally, the difficulty in monsters increases with procedurally generated levels of the dungeon
- Chests could be found on the map
- Each level has a different theme and boss. Also, there are 5 floors for each level
- NO AUTO SAVING and perma-death (i.e. character loses all health and is considered dead and cannot be used anymore)
- But! There is a saving point after defeating the boss for each level
- Monsters, NPC and chests are shown in different colours

<details>
  <summary> <h2>How do the features match targets</h2> </summary>

    1. Generation of random game sets or events
      - Generation of maps, monsters, NPCs, and items, such as weapons and armour, is random
      - The attack value of a player and the monster's damages to a player are generated randomly according to the ability of the player and the monsters
    
    2. Data structures for storing game status
      - Class Player defines all the statuses of the player, it contains:
        - player's status (inc. `mp, hp, energy, `maxMP`, `maxHP`, `max energy`, `max Exp`, `damage`, `defence`, `level`, `game-level`, and `coin`)
        - vector of player's buffs and debuffs
        - player x, y coordination
        - player's name, role, gender
      - Structures for items, healing, armour, and weapons, contains:
        - name
        - description
        - functions
        - cost and price
      - Class Map stores in a 2D array for the landscape, generation of the map, and removing icons
      - Vectors to store player's items and shop items
      - Structure to store NPCs' information and array of strings to store NPCs' figures
    
    3. Dynamic memory management
      - array and pointer used in map generation
      - Array for player status, interaction, items
    
    4. File input/output
      - savings is file output and loading is file input. Saving includes the following types of information:
        1. Level of the player
        2. The game progress of the player
        3. The states (inc. HP, MP and energy...) of the player
        4. The ability of players (inc. damage and defence etc.)
        5. The items in the player's backpack (inc. money, weapons, armour, healings)
        6. Player's equipment (player's armour and player's weapon)
        
    5. Program codes in multiple files
      - programs are divided into:
        - action.cpp & action.h: movement of player character; interaction of players between monsters, NPC and chests; ending of game 
        - backpack.cpp & backpack.h: generation and storage of items; an interface for a backpack; interactions between players and backpack
        - fight.cpp & fight.h: interface for battles; deal with player's actions in battle; set up of monsters' ability according to player game progress
        - homepage.cpp & homepage.h: menu for player to save/load/quit game
        - map.cpp & map.h: generation of map, monsters, NPCs and chests; monster's movement
        - npc.cpp & npc.h: render NPC with talk screen; NPCs' ability and figure
        - player.cpp & player.h: status of player character; upgrade of player; add & update buffs/debuffs on player
        - saving.cpp & saving.h: save game and load game (game file is in [player's name].txt); deal with a repeat of player's name in creating files
        - screen.cpp & screen.h: render map screen; print player's status on right side of the map; help menu; clear screen
        - setup.cpp & setup.h: set up the player's information and storyline at the beginning
        - shop.cpp & shop.h: render shop screen; generate shop items; deal with player's actions in shop
        - main.cpp: execute file
        
</details>

## 🚀 Installation

Our game is supported in all kinds of operating systems (i.e. Mac, Windows, and Linux)

1. Clone this project to your local environment

  ```bash
  git clone "https://github.com/Humen-debug/what-a-hell.git"
  ```

2. Create a game execution file

  ```bash
  # On a Mac or Linux system
  make main
  ```

  ```bash
  # On the Windows system
  ./Makefile
  ```

3. START GAME!

  ```bash
  # On a Mac or Linux system
  ./main
  ```

  ```bash
  # On the Window system
  ./main.exe
  ```

4. Load game: If you have already started our game and defeated a boss, you can load the game file by entering `2` in the game menu. To load your file, input your character's name (PS. no need to type `.txt`)

## Members

- [Ada-Au](https://github.com/Ada-Au) - **Ada Au**
- [Humen-debug](https://github.com/Humen-debug) - **Humen Chau**
