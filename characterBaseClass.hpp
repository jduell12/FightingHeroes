/*******************************************************************************
Program name: Project 4 Fantasy Tournament
Author: Jessica Duell
Date: Nov 24, 2019
Description: characterBaseClass specification file
*******************************************************************************/
#include <iostream>

using std::string;

#ifndef CHARACTERBASECLASS_HPP_
#define CHARACTERBASECLASS_HPP_

class characterBaseClass{
protected:
    int attack, defense, armor, strength;
    bool isDead;
    string type;
    string name;
public:
    characterBaseClass(){};
    virtual ~characterBaseClass(){};
    virtual void setAbility(bool) = 0;
    virtual bool getAbility() =0;
    virtual void setAttack() = 0;
    virtual int getAttack() = 0;
    virtual int getArmor() = 0;
    virtual void setDefense() = 0;
    virtual int getDefense() = 0;
    virtual void setIsDead(bool) = 0;
    virtual bool getIsDead() = 0;
    virtual void setName(string) = 0;
    virtual string getName() = 0;
    virtual void setStrength(int) = 0;
    virtual int getStrength() = 0;
    virtual string getType() = 0;
    
    
};

#endif /* CHARACTERBASECLASS_HPP_ */
