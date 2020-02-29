/*******************************************************************************
Program name: Project 4 Fantasy Tournament
Author: Jessica Duell
Date: Nov 24, 2019
Description: teamList class implementation file
*******************************************************************************/
#include <iostream>
#include "characterBaseClass.hpp"
#include "Node.hpp"
#include "teamList.hpp"

using std::cout;
using std::endl;

/*******************************************************************************
                teamList::teamList()
Constructor for the teamList that will be set up to a list
*******************************************************************************/
teamList::teamList(){
    front = nullptr;
    back = nullptr;
}

/*******************************************************************************
                teamList::teamList()
Deconstructor for the teamList
*******************************************************************************/
teamList::~teamList(){
    while(front != nullptr){
         removeFront();
    }
}

/*******************************************************************************
               bool teamList::isEmpty()
Function that returns true if the teamList  is empty otherwise it
returns false
*******************************************************************************/
bool teamList::isEmpty(){
    bool empty;
    
    if(front == nullptr){
        empty = true;
    } else {
        empty = false;
    }
    
    return empty;
}

/*******************************************************************************
        teamList::addToBack(characterBaseClass*)
Function that creates a Node with the character passed as a parameter
and appends it to the back of the teamList
*******************************************************************************/
void teamList::addToBack(characterBaseClass *c){
    Node* temp = new Node(c, back, nullptr);
    
    //checks if teamList is empty or not
    if (back != nullptr){
        back->setNext(temp);
    } else {
        front = temp;
    }
    
    back = temp;
}

/*******************************************************************************
        teamList::addToFront(characterBaseClass*)
Function that creates a Node with the character passed as a parameter
and appends it to the front of the teamList
*******************************************************************************/
void teamList::addToFront(characterBaseClass *c){
    Node* temp = new Node(c, nullptr, front);
    
    //checks if list is empty or not
    if (!isEmpty()){
        front->setPrev(temp);
    }else {
        back = temp;
    }
    
    front = temp;
}

/*******************************************************************************
                void teamList::deleteList()
Deletes all the nodes in the list
*******************************************************************************/
void teamList::deleteList(){
    while (!isEmpty()){
        delete front->getVal();
        removeFront();
    }
}

/*******************************************************************************
        characterBaseClass teamList::getFront()
Function that returns the character of the node at the front of teamList
*******************************************************************************/
characterBaseClass* teamList::getFront(){
    return front->getVal();
}

/*******************************************************************************
              void teamList::removeFront()
Function that removes the front Node from teamList and frees the
memory
*******************************************************************************/
void teamList::removeFront(){
    /*creates a node for the next node at the front
    of the list*/
    Node *temp = front->getNext();
    
    /*checks if there is only one node in the list*/
    if (temp == nullptr){
        back = nullptr;
    } else {
        /*sets the temp node's prev to null since it's
        not the only node in the list*/
        temp->setPrev(nullptr);
    }
    
    //sets the front node to temp
    front = temp;
}

/*******************************************************************************
             void teamList::print()
Function that prints the character in each Node of teamList from the
beginning of the list
*******************************************************************************/
void teamList::print(){
    //creates a node to go through the list
    Node *current = front;
    
    //checks if list is empty
    if (isEmpty()){
        cout << "The list is empty" << endl;
    } else {
        while(current != nullptr){
            //prints value of current node
            cout << current->getVal()->getName() << endl;
            current = current->getNext();
        }
    }
    
    cout << endl;
}
