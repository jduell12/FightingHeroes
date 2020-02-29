/*******************************************************************************
Program name: Project 4 Fantasy Tournament
Author: Jessica Duell
Date: Nov 24, 2019
Description: Barbarian class implementation file. Barbarian has no
special ability to use in combat.
*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include "characterBaseClass.hpp"
#include "Barbarian.hpp"

using std::string;
using std::rand;

/*******************************************************************************
                Barbarian::Barbarian()
Constructor for the barbarian class. Set the starting variables for the
character.
*******************************************************************************/
Barbarian::Barbarian() : characterBaseClass(){
    armor = 0;
    isDead = false;
    strength = 12;
    type = "Barbarian";
}

/*Sets and gets the Ability functions so that the
class compiles as a non-abstract class*/
void Barbarian::setAbility(bool t){}
bool Barbarian::getAbility(){return true;}

/*******************************************************************************
                int Barbarian::getArmor()
Returns the armor variable
*******************************************************************************/
int Barbarian::getArmor(){
    return armor;
}

/*******************************************************************************
                void Barbarian::setAttack()
Rolls a 6-sided die twice to get the value of the attack
*******************************************************************************/
void Barbarian::setAttack(){
    int roll1 = 0, roll2=0;
    roll1 = roll6Die();
    roll2 = roll6Die();
    
    attack = roll1 + roll2;
}

/*******************************************************************************
                int Barbarian::getAttack()
Returns the attack variable
*******************************************************************************/
int Barbarian::getAttack(){
    return attack;
}

/*******************************************************************************
                void Barbarian::setDefense()
Rolls a 6-sided die twice to get the value of the defense
*******************************************************************************/
void Barbarian::setDefense(){
    int roll1 = 0, roll2=0;
    roll1 = roll6Die();
    roll2 = roll6Die();
    
    defense = roll1 + roll2;
}

/*******************************************************************************
               int Barbarian::getDefense()
Returns the defense variable
*******************************************************************************/
int Barbarian::getDefense(){
    return defense;
}

/*******************************************************************************
               void Barbarian::setIsDead(bool)
Sets the isDead variable to the bool passed as a parameter
*******************************************************************************/
void Barbarian::setIsDead(bool d){
    isDead = d;
}

/*******************************************************************************
               bool Barbarian::getIsDead()
Returns the isDead variable
*******************************************************************************/
bool Barbarian::getIsDead(){
    return isDead;
}

/*******************************************************************************
               void Barbarian::setString(string)
Sets the name of the barbarian to the string passed as a parameter
*******************************************************************************/
void Barbarian::setName(string n){
    name = n;
}

/*******************************************************************************
               string Barbarian::getString()
Returns the value of the name variable
*******************************************************************************/
string Barbarian::getName(){
    return name;
}

/*******************************************************************************
               void Barbarian::setStrength(int)
Sets the strength variable to the int passed as a parameter
*******************************************************************************/
void Barbarian::setStrength(int s){
    strength = s;
}

/*******************************************************************************
               int Barbarian::getStrength()
Returns the strength variable
*******************************************************************************/
int Barbarian::getStrength(){
    return strength;
}

/*******************************************************************************
               string Barbarian::getType()
Returns the type variable
*******************************************************************************/
string Barbarian::getType(){
    return type;
}

/*******************************************************************************
                int Barbarian:roll6Die()
Returns the roll of a 6-sided die
*******************************************************************************/
int Barbarian::roll6Die(){
    return rand() % 6 + 1;
}
