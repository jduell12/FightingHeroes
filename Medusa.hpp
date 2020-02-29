/*******************************************************************************
Program name: Project 4 Fantasy Tournament
Author: Jessica Duell
Date: Nov 24, 2019
Description: Medusa class specification file
*******************************************************************************/
#include <iostream>
#include "characterBaseClass.hpp"

using std::string;

#ifndef Medusa_hpp
#define Medusa_hpp

class Medusa: public characterBaseClass{
public:
    Medusa();
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

#endif /* Medusa_hpp */
