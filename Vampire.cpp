/*******************************************************************************
Program name: Project 4 Fantasy Tournament
Author: Jessica Duell
Date: Nov 24, 2019
Description: Vampire class implementation file. Vampire has special ability
called Charm that can charm an oppenent into not attacking on
that turn. For a given defense the special ability has 50% chance
of activating.
*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include "characterBaseClass.hpp"
#include "Vampire.hpp"

using std::rand;
using std::string;

/*******************************************************************************
                Vampire::Vampire
Constructor for the Vampire character. Sets the values for the character
*******************************************************************************/
Vampire::Vampire() : characterBaseClass(){
    armor = 1;
    isDead = false;
    strength = 18;
    type = "Vampire";
    
}

/*******************************************************************************
                void Vampire:setAbility()
Determines if the charm ability activates by randoming generating a
1 or 2. If 1 is generated the ability activates otherwise it doesn't.
*******************************************************************************/
void Vampire::setAbility(bool t){
    int randNum = rand()% 3;
    
    if (randNum == 1){
        charm = true;
    } else {
        charm = false;
    }
}

/*******************************************************************************
                bool Vampire:getAbility()
Returns if the charm ability has activated
*******************************************************************************/
bool Vampire::getAbility(){
    return charm;
}

/*******************************************************************************
                int Vampire:getArmor()
Returns the armor value
*******************************************************************************/
int Vampire::getArmor(){
    return armor;
}

/*******************************************************************************
                void Vampire:setAttack()
Rolls a 12-sided die once to determine the attack. Sets the outcome as
the Vampire's attack
*******************************************************************************/
void Vampire::setAttack(){
    attack = roll12Die();
}

/*******************************************************************************
                int Vampire:getAttack()
Returns the attack value
*******************************************************************************/
int Vampire::getAttack(){
    return attack;
}

/*******************************************************************************
                void Vampire:setDefense()
Rolls a 6-sided die once to determine the defense. Checks if the special
ability charm occurs. If charm occurs sets the defense to 30 (higher
than any character can attack effectibely negating the attack).
*******************************************************************************/
void Vampire::setDefense(){
    setAbility(true);
    charm = getAbility();
    
    if(charm){
        defense = 30;
    } else {
        defense = roll6Die();
    }
}

/*******************************************************************************
                int Vampire:getDefense()
Returns the defense value
*******************************************************************************/
int Vampire::getDefense(){
    return defense;
}

/*******************************************************************************
                void Vampire:setIsDead(bool)
Sets the dead variable to the parameter that is passed.
*******************************************************************************/
void Vampire::setIsDead(bool d){
    isDead = d;
}

/*******************************************************************************
            bool Vampire:getIsDead()
Returns the isDead value
*******************************************************************************/
bool Vampire::getIsDead(){
    return isDead;
}

/*******************************************************************************
               void Vampire::setName(string )
Sets the name variable to the string passed as a parameter
*******************************************************************************/
void Vampire::setName(string n){
    name = n;
}

/*******************************************************************************
               string Vampire::getName()
Returns the value of the name variable
*******************************************************************************/
string Vampire::getName(){
    return name;
}

/*******************************************************************************
                void Vampire:setStrength(int)
Sets the strength variable to the parameter that is passed
*******************************************************************************/
void Vampire::setStrength(int s){
    strength = s;
}

/*******************************************************************************
                int Vampire:getStrength()
Returns the strength value
*******************************************************************************/
int Vampire::getStrength(){
    return strength;
}

/*******************************************************************************
                string Vampire::getType()
Returns vampire value for type
*******************************************************************************/
string Vampire::getType(){
    return type;
}

/*******************************************************************************
                int Vampire::roll6Die()
Returns the roll of a 6-sided die
*******************************************************************************/
int Vampire::roll6Die(){
    return rand() % 6 + 1;
}

/*******************************************************************************
                int Vampire::roll12Die()
Returns the roll of a 12-sided die
*******************************************************************************/
int Vampire::roll12Die(){
    return rand() % 12 + 1;
}
