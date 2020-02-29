/*******************************************************************************
Program name: Project 4 Fantasy Tournament
Author: Jessica Duell
Date: Nov 24, 2019
Description: Barbarian class specification file
*******************************************************************************/
#include "characterBaseClass.hpp"

#ifndef Barbarian_hpp
#define Barbarian_hpp

class Barbarian : public characterBaseClass{
public:
    Barbarian();
    void setAbility(bool);
    bool getAbility();
    int getArmor();
    void setAttack();
    int getAttack();
    void setDefense();
    int getDefense();
    void setIsDead(bool);
    bool getIsDead();
    void setName(string);
    string getName();
    void setStrength(int);
    int getStrength();
    string getType();
    int roll6Die();
};

#endif /* Barbarian_hpp */
