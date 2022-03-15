/**
 * @file        StackOfChars.cpp
 * @author      Morgan Bergen
 * @date        October 17/2021
 * @brief       This is the implementation file of the StackOfChars.h header file, wherebye all methods will be defined and implemented.
 */

#include "StackOfChars.h"
#include "StackTester.h"
#include "Node.h"
#include <iostream>
#include <stdexcept>

StackOfChars::StackOfChars() {
    m_top = nullptr;
}

StackOfChars::StackOfChars(const StackOfChars& orig) {
    
    //point to nodes in original chain
    Node* original_chain = orig.m_top;
    
    //saved the first entry from the top of the chain
    char first_entry = original_chain -> getEntry();
    
    if (original_chain == nullptr) {
        m_top = nullptr;
    } else {
        
        //copy first node
        m_top = new Node(first_entry);
        
        //point to first node in new chain
        Node* new_chain = m_top;
        
        //advance original-chain pointer
        original_chain = original_chain -> getNext();
        
        //copy all remaining nodes
        do {
            
            // get next item from original chain
            char next_entry = original_chain -> getEntry();
            
            // create a new node containing the next item
            Node* new_node_ptr = nullptr;
            new_node_ptr = new Node(next_entry);
            
            // link new node to end of the new chain
            new_chain -> setNext(new_node_ptr);
            
            // advance pointer to new last node
            new_chain = new_chain -> getNext();
            
            // advance original chain pointer
            original_chain = original_chain -> getNext();
            
            // flag that you are at the end of the chain to stop do-while statment
            new_chain -> setNext(nullptr);
            
        } while (original_chain != nullptr);
        
        original_chain = nullptr;
        delete original_chain;
        new_chain = nullptr;
        delete new_chain;
        
    }
}

StackOfChars::~StackOfChars() {
    do {
        pop();
    } while (!isEmpty());
}

//overloaded assignment operator to create the stack to conatin the same elements as rhs
void StackOfChars::operator==(const StackOfChars &rhs) {
    if (this != &rhs) {
        do {
            Node *temp = m_top;
            m_top = m_top -> getNext();
            temp -> setNext(NULL);
            delete (temp);
        } while (m_top != NULL);
    }
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
        temp = m_top -> getNext();
        delete m_top;
        m_top = temp;
    } else if (m_top == nullptr) {
        throw (std::runtime_error("ERROR:  ATTEMPTING TO POP ON AN ALREADY EMPTY STACK.\n"));
    } else {
        throw (std::runtime_error("ERROR:  ATTEMPTING TO POP ON A NON EXISTENT STACK.\n"));
    }
}

char StackOfChars::peek() const {
    
    if (m_top == nullptr) {
        throw (std::runtime_error("ERROR:  ATTEMPTING TO PEEK ON AN ALREADY EMPTY STACK.\n"));
    } else {
        return(m_top -> getEntry());
    }
}

bool StackOfChars::isEmpty() const {
    if (m_top == nullptr) {
        return(true);
    } else {
        return(false);
    }
}
