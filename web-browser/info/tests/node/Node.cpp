#include "Node.h"
#include <iostream>

Node::Node(char initial_entry){
    m_entry = initial_entry;
    next_node = nullptr;
    std::cout << m_entry << std::endl;
}

char Node::getEntry(){
    return(m_entry);
}

void Node::setEntry(char new_entry){
    m_entry = new_entry;
}

void Node::setNext(Node* new_node){
    next_node = new_node;
}

Node* Node::getNext(){
    return(next_node);
}
