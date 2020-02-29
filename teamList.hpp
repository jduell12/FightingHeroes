/*******************************************************************************
Program name: Project 4 Fantasy Tournament
Author: Jessica Duell
Date: Nov 24, 2019
Description: teamList class specification file
*******************************************************************************/
#include "characterBaseClass.hpp"
#include "Node.hpp"

#ifndef teamList_hpp
#define teamList_hpp

class teamList{
private:
    Node* front;
    Node* back;
public:
    teamList();
    ~teamList();
    bool isEmpty();
    void addToBack(characterBaseClass*);
    void addToFront(characterBaseClass*);
    void deleteList();
    characterBaseClass* getFront();
    void removeBack();
    void removeFront();
    void print();
};

#endif /* teamList_hpp */
