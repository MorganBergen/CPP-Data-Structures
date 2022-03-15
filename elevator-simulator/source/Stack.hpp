/**
 * @file        Stack.hpp
 * @author      Morgan Bergen
 * @date        November 10 2021
 * @brief       This is the implementation file for the Stack class, whereby the method definitions will generate a typical Stack like data struture for individuals that board onto the elevator.  This class will be the child class of the Stack interface.  This implementation file will contain the methods of isEmpty(), push(const T entry), pop(), and peek().
 */

#include "Stack.h"
#include "Node.h"
#include "StackInterface.h"
#include <iostream>
#include <stdexcept>

template <typename T>
Stack<T>::Stack() {
    top_node_ptr = nullptr;
}

template <typename T>
bool Stack<T>::isEmpty() const {
    return (top_node_ptr == nullptr);
}

template <typename T>
void Stack<T>::push(const T entry) {
    
    Node<T>* new_top = new Node<T>(entry);
    new_top -> setNext(top_node_ptr);
    top_node_ptr = new_top;
    
}

template <typename T>
void Stack<T>::pop() {
    
    if (isEmpty()) {
        throw (std::runtime_error("Pop cannot be attemped on an empty stack.\n"));
    } else {
        Node<T>* temp = top_node_ptr;
        top_node_ptr = top_node_ptr -> getNext();
        delete temp;
    }
}

//when in use always call with a try catch block
template <typename T>
T Stack<T>::peek() const {
    
    if (isEmpty()) {
        throw (std::runtime_error ("Peek cannot be attempted on an empty stack."));
    } else {
        return (top_node_ptr -> getEntry());
    }
    
}
