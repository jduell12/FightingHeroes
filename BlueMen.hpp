/*******************************************************************************
Program name: Project 4 Fantasy Tournament
Author: Jessica Duell
Date: Nov 24, 2019
Description: BlueMen class specification file
*******************************************************************************/
#include "characterBaseClass.hpp"

#ifndef BlueMen_hpp
#define BlueMen_hpp

class BlueMen : public characterBaseClass{
public:
    BlueMen();
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
    int roll10Die();
};

#endif /* BlueMen_hpp */
