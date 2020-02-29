/*******************************************************************************
Program name: Project 4 Fantasy Tournament
Author: Jessica Duell
Date: Nov 24, 2019
Description: HarryPotter class specification file.
*******************************************************************************/
#include <iostream>
#include "characterBaseClass.hpp"

using std::string;

#ifndef HarryPotter_hpp
#define HarryPotter_hpp

class HarryPotter : public characterBaseClass{
private:
    bool hogwarts;
public:
    HarryPotter();
    bool getAbility();
    void setAbility(bool);
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

#endif /* HarryPotter_hpp */
