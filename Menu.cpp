/*******************************************************************************
Program name: Project 4 Fantasy Combat Tournament
Author: Jessica Duell
Date: Nov 24 2019
Description: File implementation for Menu Class
*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "characterBaseClass.hpp"
#include "Game.hpp"
#include "HarryPotter.hpp"
#include "InputValid.hpp"
#include "Medusa.hpp"
#include "Menu.hpp"
#include "teamList.hpp"
#include "Vampire.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;
using std::srand;
using std::time;

/*******************************************************************************
                    Menu::Menu()
Constructor for Menu class that prints the start menu to the console
asking the user if they would like to play the game or quit. If user
chooses to play the game it calls the gameMenu function to prompt
the user for information in order to the play the other. If user chooses
to quit the program ends.
*******************************************************************************/
Menu::Menu(){
    srand((unsigned int)time(0));
    int choice = 0;
    string pick;
    InputValid valid;
    
    do{
        cout << "Pick a number for what you would like to do." << endl;
        cout << "1. Play Fantasy Tournament" << endl;
        cout << "2. Quit" << endl;
        getline(cin, pick);
        choice = valid.validInt(pick);
        cout << endl;
        
        if (choice == 1){
            gameMenu();
        } else if (choice != 1 && choice != 2){
            cout << "Please enter a 1 or 2." << endl;
            cout << endl;
        }
        
    }while (choice != 2);
}

/*******************************************************************************
                void Menu::gameMenu()
Prompts user for the number of fighters for both teams and asks the
type of character each fighter is and the name for each fighter.
*******************************************************************************/
void Menu::gameMenu(){
    teamList team1;
    teamList team2;
    InputValid valid;
    string userInput, name;
    int number = 0, characterNum = 0;
    
    while (number <= 0 || number > 10){
        cout << "How many fighters will be on both teams?" << endl;
        cout << "Pick a number between 1 and 10." << endl;
        getline(cin, userInput);
        number = valid.validInt(userInput);
        cout << endl;
    }
    
    //set up team 1 by prompting user for fighter character types and names
    cout << "Setting up team 1" << endl;
    for (int i = 0; i < number; i++){
    //makes sure user is picking a character number 1 - 5
        while(characterNum <= 0 || characterNum > 5){
            cout << "Pick a character from the following list using the number"
               << " associated with the character." << endl;
            cout << endl;
            characterMenu();
            getline(cin, userInput);
            characterNum = valid.validInt(userInput);
            cout << endl;
        }
        //creates the character type based on user input
        switch(characterNum){
            case 1:
                 c = new Vampire;
                break;
            case 2:
                 c = new Barbarian;
                break;
            case 3:
                 c = new BlueMen;
                break;
            case 4:
                 c = new Medusa;
                break;
            case 5:
                 c = new HarryPotter;
                break;
        }
        //prompts user for name for the character
        cout << "What name would you like for this character?" << endl;
        getline(cin, name);
        //sets the character's name based on user input
        c->setName(name);
        //adds character to team
        team1.addToBack(c);
        characterNum = 0;
    }
    
    cout << endl;
    cout << "Setting up team 2" << endl;
    for (int i = 0; i < number; i++){
    //makes sure user is picking a character number 1 - 5
        while(characterNum <= 0 || characterNum > 5){
            cout << "Pick a character from the following list using the number"
               << " associated with the character." << endl;
            cout << endl;
            characterMenu();
            getline(cin, userInput);
            characterNum = valid.validInt(userInput);
            cout << endl;
        }
        //creates the character type based on user input
        switch(characterNum){
            case 1:
                 c = new Vampire;
                break;
            case 2:
                 c = new Barbarian;
                break;
            case 3:
                 c = new BlueMen;
                break;
            case 4:
                 c = new Medusa;
                break;
            case 5:
                 c = new HarryPotter;
                break;
        }
        //prompts user for name for the character
        cout << "What name would you like for this character?" << endl;
        getline(cin, name);
        //sets the character's name based on user input
        c->setName(name);
        //adds character to team
        team2.addToBack(c);
        characterNum = 0;
    }
    Game(team1, team2);
    
}

/*******************************************************************************
                void Menu::characterMenu()
Gives the names and descriptions of each character for the user to
make a selection
*******************************************************************************/
void Menu::characterMenu(){
    cout << "1. Vampire" << endl;
    cout << "\tSuave, debonair, vicious and surprisingly resilient." << endl;
    cout << "2. Barbarian" << endl;
    cout << "\tBig sword, big muscles, not the smartest." << endl;
    cout << "3. Blue Men" << endl;
    cout << "\tSwarm of men who are 6 inches tall." << endl;
    cout << "\tFast and tough." << endl;
    cout << "\tHard to hit so they can take some damage." << endl;
    cout << "\tThey can do a lot of damage when they crawl inside their" 
        << " enemies' armor or clothing." << endl;
    cout << "4. Medusa" << endl;
    cout << "\tWoman with snakes for hair which help her during combat." 
        << endl;
    cout << "5. Harry Potter" << endl;
    cout << "\tWizard" << endl;
    cout << endl;
}
