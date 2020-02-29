/*******************************************************************************
Program name: Project 4 Fantasy Tournament
Author: Jessica Duell
Date: Nov 24, 2019
Description: Medusa class  implementation file. Medusa has a special
ability called Glare. When Medusa rolls a 12 when attacking she
turns her opponent to stone and Medusa wins.

When Medusa is battling Vampire and her glare activates when
his charm activates then his charm trumps her glare and she
doesn't attack.
*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include "characterBaseClass.hpp"
#include "Medusa.hpp"

using std::string;
using std::rand;

/*******************************************************************************
                Medusa()::Medusa()
Constructor for the Medusa character that sets the starting values of
the variables
*******************************************************************************/
Medusa::Medusa() :characterBaseClass(){
    armor = 3;
    strength = 8;
    isDead = false;
    type = "Medusa";
}

/*Sets and gets the Ability functions so that the
class compiles as a non-abstract class*/
void Medusa::setAbility(bool t){}
bool Medusa::getAbility(){return true;}

/*******************************************************************************
                int Medusa()::getArmor()
Returns the armor variable
*******************************************************************************/
int Medusa::getArmor(){
    return armor;
}

/*******************************************************************************
                void Medusa()::setAttack()
Sets the attack for Medusa by rolling a 6-sided die 2 times. Medusa
has a change to activate her special ability which is glare. If Medusa's
glare activates she automatically wins unless Medusa is fighting Vampire
and his charm activates during her glare. His charm trumps her glare
ability.
*******************************************************************************/
void Medusa::setAttack(){
    int roll1, roll2;
    /*If Medusa rolls a 12 then her
     glare activates and her attack is 20,
    since that the highest defense a character
    can roll. */
    
    roll1 = roll6Die();
    roll2 = roll6Die();
    
    if ((roll1 + roll2) == 12){
        attack = 20;
    } else {
        attack = roll1 + roll2;
    }
 
}

/*******************************************************************************
               int Medusa()::getAttack()
Returns the attack variable
*******************************************************************************/
int Medusa::getAttack(){
    return attack;
}

/*******************************************************************************
                void Medusa()::setDefense()
Sets Medusa's defense value by rolling a 6-sided die once.
*******************************************************************************/
void Medusa::setDefense(){
    defense = roll6Die();
}

/*******************************************************************************
               int Medusa()::getDefense()
Returns the defense variable
*******************************************************************************/
int Medusa::getDefense(){
    return defense;
}

/*******************************************************************************
              void Medusa()::setIsDead(bool)
Sets the isDead variable to the bool passed as a parameter
*******************************************************************************/
void Medusa::setIsDead(bool s){
    isDead = s;
}

/*******************************************************************************
               bool Medusa()::getIsDead()
Returns the isDead variable
*******************************************************************************/
bool Medusa::getIsDead(){
    return isDead;
}

/*******************************************************************************
               void Medusa::setName(string )
Sets the name variable to the string passed as a parameter
*******************************************************************************/
void Medusa::setName(string n){
    name = n;
}

/*******************************************************************************
               string Medusa::getName()
Returns the value of the name variable
*******************************************************************************/
string Medusa::getName(){
    return name;
}

/*******************************************************************************
               void Medusa()::setStrength(int)
Sets the strength variable to the int that is passed as a parameter
*******************************************************************************/
void Medusa::setStrength(int s){
    strength = s;
}

/*******************************************************************************
               int Medusa()::getStrength()
Returns the strength variable
*******************************************************************************/
int Medusa::getStrength(){
    return strength;
}

/*******************************************************************************
               int Medusa()::getType()
Returns the type variable
*******************************************************************************/
string Medusa::getType(){
    return type;
}

/*******************************************************************************
                int Medusa:roll6Die()
Returns the roll of a 6-sided die
*******************************************************************************/
int Medusa::roll6Die(){
    return rand() % 6 + 1;
}
