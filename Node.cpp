/*******************************************************************************
Program name: Project 4 Fantasy Tournament
Author: Jessica Duell
Date: Nov 24, 2019
Description: Node implementation  file
*******************************************************************************/
#include "characterBaseClass.hpp"
#include "Node.hpp"

/*******************************************************************************
             Node::Node()
Default constructor for a node
*******************************************************************************/
Node::Node(){
    val = nullptr;
    next = nullptr;
    prev = nullptr;
}

/*******************************************************************************
    Node::Node(characterBaseClass* c, Node* prevN, Node* nextN)
Constructor for a node with characterBaseClass *, Node* and Node*
parameters
*******************************************************************************/
Node::Node(characterBaseClass* c, Node* prevN, Node* nextN){
    setVal(c);
    prev = prevN;
    next = nextN;
}

/*******************************************************************************
             void Node::setNext(Node* node)
Sets the parameter passed to the value of the next Node
*******************************************************************************/
void Node::setNext(Node* node){
    next = node;
}

/*******************************************************************************
             Node* Node::getNext()
Returns the next node
*******************************************************************************/
Node* Node::getNext(){
    return next;
}

/*******************************************************************************
             void Node::setPrev(Node* node)
Sets the parameter passed to the value of the prev Node
*******************************************************************************/
void Node::setPrev(Node* node){
    prev = node;
}

/*******************************************************************************
             Node* Node::getPrev()
Returns the prev node
*******************************************************************************/
Node* Node::getPrev(){
    return prev;
}

/*******************************************************************************
             Node::setVal(characterBaseClass*)
Sets the parameter passed to the value of the Node
*******************************************************************************/
void Node::setVal(characterBaseClass* c){
    val = c;
}

/*******************************************************************************
             characterBaseClass* Node::getVal()
Returns the value in the val variable of the Node
*******************************************************************************/
characterBaseClass* Node::getVal(){
    return val;
}
