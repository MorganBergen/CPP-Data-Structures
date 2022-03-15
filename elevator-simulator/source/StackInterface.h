/**
 * @file        StackInterface.h
 * @author      Morgan Bergen
 * @date        November 10 2021
 * @brief       This is the StackInterface, whereby this acts at the base class for the Stack class.   The derived class Stack will define the virtual methods listed below, which are isEmpty(), push(const T value), pop(), and peek().  This file acts as a contract that any subclass must fulfill.
 */

#ifndef StackInterface_h
#define StackInterface_h

#include <string>
#include "Stack.h"
#include "Node.h"

template <typename T>
class StackInterface {
    
public:
    virtual ~StackInterface(){};
    virtual bool isEmpty() const = 0;
    virtual void push(const T value) = 0;
    virtual void pop() = 0;
    virtual T peek() const = 0;
};

#endif
