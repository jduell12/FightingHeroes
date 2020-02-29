/*******************************************************************************
Program name: Project 4 Fantasy Tournament
Author: Jessica Duell
Date: Nov 24, 2019
Description: Game class specification file.
*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include "characterBaseClass.hpp"
#include "Game.hpp"
#include "teamList.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;

/*******************************************************************************
            Game:: Game(teamList*, teamList*)
Chooses which team attacks first based on choosing a random number
(1 or 2). The fighter at the head of the list on each team will battle each
other based on the gamePlay of Project 3. The winner of each fight
recovers some strength (hp) and is moved to the back of their team line.
The loser is added to the top of the loser list. 
*******************************************************************************/
Game::Game(teamList t1, teamList t2){
    team1Points = 0;
    team2Points = 0;
    string userChoice;
    char response = 'a';
    teamList loserList;
    
    round = 1;
    int first = rand() % 3;
    
    while (!t1.isEmpty() && !t2.isEmpty()){
        player1 = t1.getFront();
        t1.removeFront();
        
        player2 = t2.getFront();
        t2.removeFront();
        
        while (!player1->getIsDead() && !player2->getIsDead()){
            if (first == 1){
                    cout << endl;
                //part 1 of round 1st player goes
                    cout << "Round: " << round << " Part: A" << endl;
                    cout << player1->getName() << " is attacking." << endl;
                    cout << "Attacker type: " << player1->getType() << endl;
                    cout << player2->getName() << " is defending." << endl;
                    cout << "Defender type: " << player2->getType() << endl;
                    
                    player1->setAttack();
                    attack = player1->getAttack();
                    
                    player2->setDefense();
                    defense = player2->getDefense();
                    armor = player2->getArmor();
                    defenderStrength = player2->getStrength();
                    
                   
                    cout << "Defender strength: " << defenderStrength << endl;
                    cout << "Defender armor: " << armor << endl;
                    cout << endl;
                    
                    /*checks if Medusa's glare activate and prints out a message
                     letting the user know */
                    if (attack == 20){
                        cout << "Medusa activated glare on defender." << endl;
                        cout << "Attacker dice roll: " << attack << endl;
                    } else{
                        cout << "Attacker dice roll: " << attack << endl;
                    }
                    
                    /*checks if Vampire's charm activated and prints out a 
                     message letting the user know */
                    if (defense == 30){
                        cout << "Vampire activated charm on attacker." << endl;
                        cout << "Defender dice roll: " << defense << endl;
                    } else {
                        cout << "Defender dice roll: " << defense << endl;
                    }
                    cout << endl;
                               
                    damage = attack - defense - armor;
                    
                    if (damage <= 0){
                        damage = 0;
                    }
                    
                                
                    hp = defenderStrength - damage;
                    
                    if (hp <= 0){
                        //checks if Harry Potter has died once yet
                        type = player2->getType();
                        if (type == "Harry Potter"){
                            if (player2->getAbility()){
                                player2->setStrength(20);
                                player2->setAbility(false);
                            } else {
                                player2->setIsDead(true);
                                player2->setStrength(0);
                            }
                        } else {
                            player2->setIsDead(true);
                            player2->setStrength(0);
                        }
                    } else {
                        player2->setStrength(hp);
                    }
                    
                    cout << "Total inflected damage: " << damage << endl;
                    cout << "Defender's strength after attack: " 
                        << player2->getStrength() << endl;
                    cout << endl;
                    
                //part 2 of round 2nd player goes
                    cout << endl;
                    cout << "Round: " << round << " Part: B" << endl;
                    cout << player2->getName() << " is attacking." << endl;
                    cout << "Attacker type: " << player2->getType() << endl;
                    cout << player1->getName() << " is defending." << endl;
                    cout << "Defender type: " << player1->getType() << endl;
                    
                    player2->setAttack();
                    attack = player2->getAttack();
                    
                    player1->setDefense();
                    defense = player1->getDefense();
                    armor = player1->getArmor();
                    defenderStrength = player1->getStrength();
                    
                    cout << "Defender strength: " << defenderStrength << endl;
                    cout << "Defender armor: " << armor << endl;
                    cout << endl;
                    
                    /*checks if Medusa's glare activate and prints out a message
                     letting the user know */
                    if (attack == 20){
                        cout << "Medusa activated glare on defender." << endl;
                        cout << "Attacker dice roll: " << attack << endl;
                    } else{
                        cout << "Attacker dice roll: " << attack << endl;
                    }
                    /*checks if Vampire type charm activated and prints out a 
                     message letting the user know */
                    if (defense == 30){
                        cout << "Vampire activated charm on attacker." << endl;
                        cout << "Defender dice roll: " << defense << endl;
                    } else {
                        cout << "Defender dice roll: " << defense << endl;
                    }
                    cout << endl;
                    
                    damage = attack - defense - armor;
                    
                    if (damage <= 0){
                        damage = 0;
                    }
                    
                    hp = defenderStrength - damage;
                    
                    if (hp <= 0){
                        //checks if Harry Potter has died once yet
                        type = player1->getType();
                        if (type == "Harry Potter"){
                            if (player1->getAbility()){
                                player1->setStrength(20);
                                player1->setAbility(false);
                            } else {
                                player1->setIsDead(true);
                                player1->setStrength(0);
                            }
                        } else {
                            player1->setIsDead(true);
                            player1->setStrength(0);
                        }
                    } else {
                        player1->setStrength(hp);
                    }
                    
                    cout << "Total inflected damage: " << damage << endl;
                    cout << "Defender's strength after attack: " 
                        << player1->getStrength() << endl;
                    
                    cout << endl;
                    cout << "-----------------------------------------"<< endl;
                    
                    round++;
                }else {
                //part 1 of round
                    cout << endl;
                    cout << "Round: " << round << " Part: A" << endl;
                    cout << player2->getName() << " is attacking." << endl;
                    cout << "Attacker type: " << player2->getType() << endl;
                    cout << player1->getName() << " is defending." << endl;
                    cout << "Defender type: " << player1->getType() << endl;
                    
                    player2->setAttack();
                    attack = player2->getAttack();
                    
                    player1->setDefense();
                    defense = player1->getDefense();
                    armor = player1->getArmor();
                    defenderStrength = player1->getStrength();
                    
                    cout << "Defender strength: " << defenderStrength << endl;
                    cout << "Defender armor: " << armor << endl;
                    cout << endl;
                    
                    /*checks if Medusa's glare activate and prints out a message
                     letting the user know */
                    if (attack == 20){
                        cout << "Medusa activated glare on defender." << endl;
                        cout << "Attacker dice roll: " << attack << endl;
                    } else{
                        cout << "Attacker dice roll: " << attack << endl;
                    }
                    
                    /*checks if Vampire type charm activated and prints out a 
                     message letting the user know */
                    if (defense == 30){
                        cout << "Vampire activated charm on attacker." << endl;
                        cout << "Defender dice roll: " << defense << endl;
                    } else {
                        cout << "Defender dice roll: " << defense << endl;
                    }
                    cout << endl;
                    
                    damage = attack - defense - armor;
                    
                    if (damage <= 0){
                        damage = 0;
                    }
                    
                    hp = defenderStrength - damage;
                    
                    if (hp <= 0){
                        //checks if Harry Potter has died once yet
                        type = player1->getType();
                        if (type == "Harry Potter"){
                            if (player1->getAbility()){
                                player1->setStrength(20);
                                player1->setAbility(false);
                            } else{
                                player1->setIsDead(true);
                                player1->setStrength(0);
                            }
                        } else {
                            player1->setIsDead(true);
                            player1->setStrength(0);
                        }
                    } else {
                        player1->setStrength(hp);
                    }
                    
                    cout << "Total inflected damage: " << damage << endl;
                    cout << "Defender's strength after attack: " 
                        << player1->getStrength() << endl;
                    
                    cout << endl;
                    
                //part 2 of round
                    cout << "Round: " << round << " Part: B" << endl;
                    cout << player1->getName() << " is attacking." << endl;
                    cout << "Attacker type: " << player1->getType() << endl;
                    cout << player2->getName() << " is defending." << endl;
                    cout << "Defender type: " << player2->getType() << endl;
                    
                    player1->setAttack();
                    attack = player1->getAttack();
                    
                    player2->setDefense();
                    defense = player2->getDefense();
                    armor = player2->getArmor();
                    defenderStrength = player2->getStrength();
                    
                    cout << "Defender strength: " << defenderStrength << endl;
                    cout << "Defender armor: " << armor << endl;
                    cout << endl;
                    
                    /*checks if Medusa's glare activate and prints out a message
                     letting the user know */
                    if (attack == 20){
                        cout << "Medusa activated glare on defender." << endl;
                        cout << "Attacker dice roll: " << attack << endl;
                    } else{
                        cout << "Attacker dice roll: " << attack << endl;
                    }
                    
                    /*checks if Vampire type charm activated and prints out 
                      a message letting the user know */
                    if (defense == 30){
                        cout << "Vampire activated charm on attacker." << endl;
                        cout << "Defender dice roll: " << defense << endl;
                    } else {
                        cout << "Defender dice roll: " << defense << endl;
                    }
                    cout << endl;
                               
                    damage = attack - defense - armor;
                    
                    if (damage <= 0){
                        damage = 0;
                    }

                    
                    hp = defenderStrength - damage;
                    
                    if (hp <= 0){
                        //checks if Harry Potter has died once yet
                        type = player2->getType();
                        if (type == "Harry Potter"){
                            if (player2->getAbility()){
                                cout << "Hogwarts saves Harry Potter!" << endl;
                                player2->setStrength(20);
                                player2->setAbility(false);
                            } else {
                                player2->setIsDead(true);
                                player2->setStrength(0);
                            }
                        } else {
                            player2->setIsDead(true);
                            player2->setStrength(0);
                        }
                    } else {
                        player2->setStrength(hp);
                    }
                    
                    cout << "Total inflected damage: " << damage << endl;
                    cout << "Defender's strength after attack: " 
                        << player2->getStrength() << endl;
                    

                    cout << endl;
                    cout << "-----------------------------------------"<< endl;
                    round++;
                }
            }

        cout << endl;
        if (player1->getIsDead()){
            //adds a point for team 2 since they won
            team2Points++;
            //adds the character on team 1 to the loser list
            loserList.addToFront(player1);
            //recovers some of the damage the character on team 2 took
            recovery(player2);
            //adds the character to the end of the line on team 2
            t2.addToBack(player2);
            
            cout << player2->getName() << " wins this combat!" << endl;
        } else if (player2->getIsDead()){
            //adds a point for team 1 since thye won
            team1Points++;
            //adds the character on team 2 to the loser list
            loserList.addToFront(player2);
            //recovers some of the damage the character on team 1 took
            recovery(player1);
            //adds the character to the end of the line on team 1
            t1.addToBack(player1);
            cout << player1->getName() << " wins this combat!" << endl;
        }
        cout << endl;
    }
        
    
    //Displays the final score
    cout << "Team 1 has " << team1Points << " points." << endl;
    cout << "Team 2 has " << team2Points << " points." << endl;
    
    //Displays the winning team
    if (team1Points > team2Points){
        cout << "Team 1 wins!" << endl;
    } else if (team2Points > team1Points){
        cout << "Team 2 wins!" << endl;
    } else {
        cout << "No winning team. It was a tie." << endl;
    }
    
    //Prompts user if they would like to print the loser list
    while (response != 'Y' && response != 'N'){
        cout << "Would you like to print the list of losers?" << endl;
        cout << "Enter Y for yes or N for no." << endl;
        getline(cin, userChoice);
        response = userChoice.at(0);
        response = toupper(response);
    }
    
    if (response == 'Y'){
        cout << "Loser List: " << endl;
        loserList.print();
    }
    
    loserList.deleteList();
    t1.deleteList();
    t2.deleteList();
    
}

/*******************************************************************************
            void Game::recovery(characterBaseClass*)
Restores a percentage of damage if the character passed took damage
during the fight.
*******************************************************************************/
void Game::recovery(characterBaseClass *pl){
    int strength, recover;
    string type = pl->getType();
    strength = pl->getStrength();
    
    if(type == "Barbarian"){
        if (strength < 12){
            recover = strength/2;
            /*if the recovery plus current strength is higher than total 
             max strength, strength is set to max value for character type */
            if((strength + recover) >= 12){
                pl->setStrength(12);
            } else{
                pl->setStrength((strength + recover));
            }
        }
    } else if (type == "Blue Men"){
    
        if (strength < 12){
            recover = strength/2;
            /*if the recovery plus current strength is higher than total max 
             strength, strength is set to max value for character type */
            if((strength + recover) >= 12){
                pl->setStrength(12);
            } else{
                pl->setStrength((strength + recover));
            }
        }
    }else if (type == "Harry Potter"){
        bool hogwarts = pl->getAbility();
        
        if (!hogwarts){
            if (strength < 12){
                recover = strength/2;
                /*if the recovery plus current strength is higher than total max
                 strength, strength is set to max value for character type */
                if((strength + recover) >= 12){
                    pl->setStrength(12);
                } else{
                    pl->setStrength((strength + recover));
                }
            }
        } else{
            if (strength < 20){
                recover = strength/2;
                /*if the recovery plus current strength is higher than total max
                 strength, strength is set to max value for character type */
                if((strength + recover) >= 20){
                    pl->setStrength(20);
                } else{
                    pl->setStrength((strength + recover));
                }
            }
        }
    }else if (type == "Medusa" ){
        if (strength < 8){
            recover = strength/2;
            /*if the recovery plus current strength is higher than total max 
             strength, strength is set to max value for character type */
            if((strength + recover) >= 8){
                pl->setStrength(8);
            } else{
                pl->setStrength((strength + recover));
            }
        }
    } else if (type == "Vampire"){
        if (strength < 18){
            recover = strength/2;
            /*if the recovery plus current strength is higher than total max 
             strength, strength is set to max value for character type */
            if((strength + recover) >= 18){
                pl->setStrength(18);
            } else{
                pl->setStrength((strength + recover));
            }
        }
    }
}
