/*******************************************************************************
Program name: Project 4 Fantasy Combat Tournament
Author: Jessica Duell
Date: Nov 24 2019
Description: InputValid class that checks user input to make sure it
is a valid input for the program.
*******************************************************************************/
#include <iostream>
#include <sstream>
#include "InputValid.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;
using std::stringstream;

/*******************************************************************************
            int InputValid::validStart(string)
Checks the string to make sure it is an integer
*******************************************************************************/
int InputValid::validInt(string s){
   int number = -1;
   double num = -1.0;
   bool flag = true;
   stringstream convert(s);
   convert >> num;
   string choice;
   

   if (convert.fail()){
       number = -1;
    }else if((int)num == num){
        number = num;
        flag = false;
    }else {
        flag = false;
   }

   while(flag) {
       cout << "Please enter a whole number." << endl;
       getline(cin, choice);
       stringstream convert(choice);
       convert >> num;
       
       if (convert.fail()){
           number = -1;
           cin.clear();
       }else if((int)num == num){
           number = num;
           flag = false;
       } else {

            flag = false;
       }
   };

   return number;
}

