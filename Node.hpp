/*******************************************************************************
Program name: Project 4 Fantasy Tournament
Author: Jessica Duell
Date: Nov 24, 2019
Description: Node specification file
*******************************************************************************/
#include "characterBaseClass.hpp"

#ifndef Node_hpp
#define Node_hpp

class Node{
private:
    characterBaseClass* val;
    Node* next;
    Node* prev;
public:
    Node();
    Node(characterBaseClass*, Node*, Node*);
    void setNext(Node*);
    Node* getNext();
    Node* getPrev();
    void setPrev(Node*);
    void setVal(characterBaseClass*);
    characterBaseClass* getVal();
    
};

#endif /* Node_hpp */
