/*******************************************************************************
Program name: Project 4 Fantasy Tournament
Author: Jessica Duell
Date: Nov 24, 2019
Description: BlueMen class implementation file. Blue men have a
special ability called mob. For every 4 points of damage the blue
men receive they lose one defense die since they are actually
a swarm of small men.
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "BlueMen.hpp"
#include "characterBaseClass.hpp"

using std::string;
using std::rand;

/*******************************************************************************
                BlueMen::Bluemen()
Constructor for the BlueMen character that sets the starting values of
the variables
*******************************************************************************/
BlueMen::BlueMen() : characterBaseClass(){
    armor = 3;
    isDead = false;
    strength = 12;
    type = "Blue Men";
}

/*Sets and gets the Ability functions so that the
class compiles as a non-abstract class*/
void BlueMen::setAbility(bool t){}
bool BlueMen::getAbility(){return true;}

/*******************************************************************************
              int  BlueMen::getArmor()
Returns the armor variable
*******************************************************************************/
int BlueMen::getArmor(){
    return armor;
}

/*******************************************************************************
              void  BlueMen::setAttack()
Sets the attack variable by rolling a 10-sided die 2 times
*******************************************************************************/
void BlueMen::setAttack(){
    int roll1, roll2;
    
    roll1 = roll10Die();
    roll2 = roll10Die();
    
    attack = roll1 + roll2;
}

/*******************************************************************************
              int  BlueMen::getAttack()
Returns the attack variable
*******************************************************************************/
int BlueMen::getAttack(){
    return attack;
}

/*******************************************************************************
              void BlueMen::setDefense()
Sets the defense variable by rolling a 6-sided die 3 times. For each
4 points of damage the BlueMen receive they lose one defense die.
Function checks how much damage the BlueMen have received and
rolls the appropiate number of dice accordingly.
*******************************************************************************/
void BlueMen::setDefense(){
    int numDie, roll1, roll2, roll3;
    
    numDie = floor((getStrength() / 4));
    
    switch(numDie){
        case 1:
            defense = roll6Die();
            break;
        case 2:
            roll1 = roll6Die();
            roll2 = roll6Die();
            defense = roll1 + roll2;
            break;
        case 3:
            roll1 = roll6Die();
            roll2 = roll6Die();
            roll3 = roll6Die();
            defense = roll1 + roll2 + roll3;
            break;
    }
    
}

/*******************************************************************************
              int  BlueMen::getDefense()
Returns the defense variable
*******************************************************************************/
int BlueMen::getDefense(){
    return defense;
}

/*******************************************************************************
              void  BlueMen::setIsDead(bool)
Sets the isDead variable to the bool passed as a parameter
*******************************************************************************/
void BlueMen::setIsDead(bool s){
    isDead = s;
}

/*******************************************************************************
              bool  BlueMen::getIsDead()
Returns the isDead variable
*******************************************************************************/
bool BlueMen::getIsDead(){
    return isDead;
}

/*******************************************************************************
              void  BlueMen::setName(string)
Sets the name variable to the string that is passed as a parameter
*******************************************************************************/
void BlueMen::setName(string n){
    name = n;
}

/*******************************************************************************
              string BlueMen::getName()
Returns the value of the name variable
*******************************************************************************/
string BlueMen::getName(){
    return name;
}

/*******************************************************************************
              void  BlueMen::setStrength(int)
Sets the strength variable to the int passed as a parameter
*******************************************************************************/
void BlueMen::setStrength(int s){
    strength = s;
}

/*******************************************************************************
              int  BlueMen::getStrength()
Returns the strength variable
*******************************************************************************/
int BlueMen::getStrength(){
    return strength;
}

/*******************************************************************************
               string BlueMen::getType()
Returns the type variable
*******************************************************************************/
string BlueMen::getType(){
    return type;
}

/*******************************************************************************
                int BlueMen:roll6Die()
Returns the roll of a 6-sided die
*******************************************************************************/
int BlueMen::roll6Die(){
    return rand() % 6 + 1;
}
/*******************************************************************************
                int BlueMen:roll10Die()
Returns the roll of a 10-sided die
*******************************************************************************/
int BlueMen::roll10Die(){
    return rand() % 10 + 1;
}
