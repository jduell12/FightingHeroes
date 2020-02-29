/*******************************************************************************
Program name: Project 4 Fantasy Tournament
Author: Jessica Duell
Date: Nov 24, 2019
Description: Game class specification file.
*******************************************************************************/
#include "teamList.hpp"

#ifndef Game_hpp
#define Game_hpp

class Game{
private:
    teamList* loserList;
    int team1Points;
    int team2Points;
    characterBaseClass *player1;
    characterBaseClass *player2;
    int damage;
    int attack;
    int defense;
    int armor;
    int defenderStrength;
    int hp;
    int round;
    string name;
    string type;
public:
    Game(teamList, teamList);
    void recovery(characterBaseClass*);
};

#endif /* Game_hpp */
