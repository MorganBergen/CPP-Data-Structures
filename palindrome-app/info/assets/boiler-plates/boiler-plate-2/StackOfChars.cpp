//  StackOfChar.cpp

#include "StackOfChars.h"
#include <iostream>


StackOfChars::StackOfChars() {
    std::cout << "StackOfChars object has been constructed" << std::endl;
    m_top = nullptr;
}

StackOfChars::StackOfChars(const StackOfChars& orig) {
    //method has been stubbed
}

StackOfChars::~StackOfChars() {
    //method has been stubbed
}

void StackOfChars::operator=(const StackOfChars &rhs) {
    //method has been stubbed
}

void StackOfChars::push(char entry) {
    Node* temp = nullptr;
    temp = new Node(entry);
    temp -> setNext(m_top);
    m_top = temp;
}

void StackOfChars::pop() {
    if (m_top != nullptr) {
        Node* temp = nullptr;
        temp = m_top -> getNext(); //idk
        delete m_top;
        m_top = temp;
    }
}

char StackOfChars::peek() const {
    
    return(m_top -> getEntry());
    
}

bool StackOfChars::isEmpty() const {
    
    if (m_top == nullptr) {
        return (true);
    } else {
        return (false);
    }
}
