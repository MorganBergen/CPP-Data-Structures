/**
 * @file        Stack.h
 * @author      Morgan Bergen
 * @date        October 12/2021
 * @brief       This header file Stack.h is the stack interface, it has no implementations since it is an abstract base class.  It will be the interface for the abstract data type StackOfChars.  All methods provided will have implementations from it's derived class StackOfChars.
 */

#ifndef STACK_H
#define STACK_H

#include <stdexcept>

template <typename T>
class StackInterface {
    
public:
    
    /**
     * @pre The derived class defines this method.
     * @post This adds a new entry to the top of this stack.  If the operation was successful, the element is at the top of the stack.
     * @param entry
     * @throw none
     * @return none
     */
    virtual void push(T entry) = 0;
    
    /**
     * @pre The derived class defines this method.  The Stack must be non-empty.
     * @post If the operation was successful, the top element is removed from the stack.
     * @param None
     * @throw std::runtime_error if pop was attemped on an empty stack.
     * @return none
     */
    virtual void pop() = 0;
    
    /**
     * @pre The derived class defines this method. The stack must not be empty.
     * @post The top most element of the stack will be returned, and the stack is remained unchanged.
     * @param None
     * @throw std::runtime_error if peek was attemped on an empty stack.
     * @return The top element of the stack.
     */
    virtual T peek() const = 0;
    
    /**
     * @pre The derived class defines this method. A stack object must exist.
     * @post A bool will be return regarding it's state, and the stack remained unchanged.
     * @param None
     * @throw None
     * @return True if the stack is empty, false if non-empty.
     */
    void bool isEmpty() const = 0;
    
    /**
     * @pre The derived class defines this method, the derived class StackOfChars must no longer need the StackInterface base class.
     * @post This will be the destructor of the StackInterace, intentionally left empty.
     * @param None
     * @throw None
     * @return None
     */
    virtual ~StackInterface() {}
    
};

#endif
