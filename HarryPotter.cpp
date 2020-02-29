/*******************************************************************************
Program name: Project 4 Fantasy Tournament
Author: Jessica Duell
Date: Nov 24, 2019
Description: HarryPotter class implementation file. HarryPotter has a
special ability called Hogwarts. Once HarryPotter's strength reaches
0 or below he immediately recovers and his total strength becomes
20. If he dies after using Hogwarts he's offically dead.
*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include "characterBaseClass.hpp"
#include "HarryPotter.hpp"

using std::string;
using std::cout;
using std::endl;
using std::rand;

/*******************************************************************************
                HarryPotter::HarryPotter
Constructor for the HarryPotter character. Sets the values for the character.
Hogwarts is set to true since it's still available to use.
*******************************************************************************/
HarryPotter::HarryPotter() : characterBaseClass(){
    armor = 0;
    strength = 10;
    hogwarts = true;
    type = "Harry Potter";
    isDead = false;
}


/*******************************************************************************
                void HarryPotter::setAbility(bool)
Sets hogwarts to the bool passed as a parameter
*******************************************************************************/
void HarryPotter::setAbility(bool a){
    hogwarts = a;
}

/*******************************************************************************
                bool HarryPotter::getAbility()
Returns the value of the armor variable
*******************************************************************************/
bool HarryPotter::getAbility(){
    return hogwarts;
}

/*******************************************************************************
                int HarryPotter::getArmor()
Returns the value of the armor variable
*******************************************************************************/
int HarryPotter::getArmor(){
    return armor;
}

/*******************************************************************************
                void HarryPotter::setAttack()
Sets the value of attack by rolling a 6-sided die 2 times.
*******************************************************************************/
void HarryPotter::setAttack(){
    int roll1, roll2;
    
    roll1 = roll6Die();
    roll2 = roll6Die();
    
    attack = roll1 + roll2;
}

/*******************************************************************************
                int HarryPotter::getAttack()
Returns the value of the attack variable
*******************************************************************************/
int HarryPotter::getAttack(){
    return attack;
}

/*******************************************************************************
                void HarryPotter::setDefense()
Sets the value of defense by rolling a 6-sided die 2 times.
*******************************************************************************/
void HarryPotter::setDefense(){
    int roll1, roll2;
    
    roll1 = roll6Die();
    roll2 = roll6Die();
    
    defense = roll1 + roll2;
}

/*******************************************************************************
                int HarryPotter::getDefense()
Returns the value of the defense variable
*******************************************************************************/
int HarryPotter::getDefense(){
    return defense;
}

/*******************************************************************************
                void HarryPotter::setIsDead(bool)
If the parameter passed is true function checks to see if special ability
is available. If it is it sets HarryPotter's strength to 20 and he stays alive.
Hogwarts can only be used once so once it is used it is set to false.
*******************************************************************************/
void HarryPotter::setIsDead(bool d){
    isDead = d;
}

/*******************************************************************************
                bool HarryPotter::getIsDead()
Returns the value of the isDead variable
*******************************************************************************/
bool HarryPotter::getIsDead(){
    return isDead;
}

/*******************************************************************************
               void HarryPotter::setName(string )
Sets the name variable to the string passed as a parameter
*******************************************************************************/
void HarryPotter::setName(string n){
    name = n;
}

/*******************************************************************************
               string HarryPotter::getName()
Returns the value of the name variable
*******************************************************************************/
string HarryPotter::getName(){
    return name;
}

/*******************************************************************************
                void HarryPotter::setStrength(int)
Sets the value of the strength variable to the int passed as a parameter
*******************************************************************************/
void HarryPotter::setStrength(int s){
    strength = s;
}

/*******************************************************************************
                int HarryPotter::getStrength()
Returns the value of the strength variable
*******************************************************************************/
int HarryPotter::getStrength(){
    return strength;
}

/*******************************************************************************
                string HarryPotter::getType()
Returns the value of the type variable
*******************************************************************************/
string HarryPotter::getType(){
    return type;
}
/*******************************************************************************
                int HarryPotter::roll6Die()
Returns the roll of a 6-sided die
*******************************************************************************/
int HarryPotter::roll6Die(){
    return rand() % 6 + 1;
}
