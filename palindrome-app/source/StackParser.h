/**
 * @file        StackTester.cpp
 * @author      Morgan Bergen
 * @date        October 17/2021
 * @brief       This is the implementation file for all the StackTester Methods outlined from StackTester.h
 */

#ifndef StackParser_h
#define StackParser_h

#include "StackOfChars.h"
#include <stdio.h>

class StackParser {
private:
    
public:
    /**
     * @pre An object of StackParser must be declared in the main.
     * @post This constructs the object to allow for the isbalanced test to be called upon behalf of the object.
     * @param None
     * @throw None
     * @return None
     */
    StackParser();
    
    /**
     * @pre An object of StackTester must be declared in the main.
     * @post This is a declaration of a default destructor.
     * @param None
     * @throw None
     * @return None
     */
    ~StackParser();
    
    /**
     * @pre An object of StackTester must be declared in the main, and must call this method.
     * @post This will reveal the answer and verifer from the isBalanced method.
     * @param None
     * @throw None
     * @return None
     */
    void runParser();
    
    /**
     * @pre An object of StackTester must be declared in the main, and there must be a sequenced on behalf of the user.
     * @post This will be the main definition which will determine if a sequence of characters is balanced or not.
     * @param None
     * @throw None
     * @return Return true if the sequence is balanced, false if otherwise, or will state an error message if the input sequence did not contain '{' or '}' enteries.
     */
    bool isBalanced();
    
};

#endif
