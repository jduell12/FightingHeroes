/*******************************************************************************
Program name: Project 4 Fantasy Tournament
Author: Jessica Duell
Date: Nov 24, 2019
Description: Vampire class specification file
*******************************************************************************/
#include <iostream>
#include "characterBaseClass.hpp"

using std::string;

#ifndef Vampire_hpp
#define Vampire_hpp

class Vampire: public characterBaseClass{
private:
    bool charm;
public:
    Vampire();
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
    int roll12Die();
};

#endif /* Vampire_hpp */
