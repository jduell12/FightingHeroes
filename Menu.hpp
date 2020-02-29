/*******************************************************************************
Program name: Project 4 Fantasy Combat Tournament
Author: Jessica Duell
Date: Nov 24 2019
Description: Menu specification file
*******************************************************************************/
#include "characterBaseClass.hpp"
#include "teamList.hpp"

#ifndef Menu_hpp
#define Menu_hpp

class Menu{
private:
    characterBaseClass *c;
    teamList *team1;
    teamList *team2;
public:
    Menu();
    void gameMenu();
    void characterMenu();
};

#endif /* Menu_hpp */
