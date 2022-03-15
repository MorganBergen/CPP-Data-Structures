/**
 * @file        Stack.h
 * @author      Morgan Bergen
 * @date        November 10 2021
 * @brief       This is the stack class header file.  This file is derived from the StackInterface.h file, which is the parent class of this derived/child class.  The methods form a typical stack like data structure and will be defined in the subsequent implementation file.
 */

#ifndef Stack_h
#define Stack_h

#include "Node.h"
#include "StackInterface.h"
#include <stdio.h>

template <typename T>
class Stack : public StackInterface<T> {
    
private:
    Node<T>* top_node_ptr;
    
public:
    
    /*
     * @pre     an object of type stack must be declared
     * @post    initialized top_node_ptr to nullptr
     * @param   none
     * @throws  none
     * @returns none
     */
    Stack();
    
    /*
     * @pre     an object of type stack must exist
     * @post    a bool will be returned regarding it's status, and the stack will remain unchanged.
     * @param   none
     * @throws  none
     * @returns returns true if the stack is empty, false if otherwise
     */
    bool isEmpty() const;
    
    /*
     * @pre     an object of type stack must exist
     * @post    an entry becomes added to top of the stack.
     * @param   entry, the element to be added to the stack.
     * @throw   none
     */
    void push(const T entry);
    
    /*
     * @pre     a stack must not be empty.
     * @post    if the operation runs successfully then the top element is removed from the stack.
     * @param   none
     * @throw   std::runtime_error if peek was attempted on an empty stack.
     * @return  none
     */
    void pop();
    
    /*
     * @pre     an object of type stack must exit.
     * @post    if the operation runs successfully then the top of the stack will sbe returned and the stack will remained unchanged.
     * @param   none
     * @throws  std::runtime_error if peek was attemped on an empty stack.
     * @returns a copy of the top T top_node_ptr of the stack.
     */
    T peek() const;
};

#include "Stack.hpp"

#endif
