/**
 * @file        StackTester.h
 * @author      Morgan Bergen
 * @date        October 17/2021
 * @brief       This header file declares all of the methods for the StackTester class, this file will be called when the user wants to enter into test mode to verify the integrity of their data structure, specifically check to see if all functionality of the StackOfChars is running correctly or not.  This class will run a battery of tests to mainly check the validity of the push, pop, and peek functionalities of the stack.  This class has a single entry point called runTests(), which is the call to run all the test# methods.  Each test prints what test is currently running and if the Stack passed or failed.  Each test method will be working in a vacuum, meaning the tests will not be passing Stack objects from one test to another.  Essentially the StackTester tests will be operating independely and run in isolation for the tests will never share any objects or data.
 */

#ifndef StackTester_h
#define StackTester_h

#include <stdio.h>
#include <stdexcept>

class StackTester {

private:

    /**
     * @brief This test will create an empty stack and verifies isEmpty() returns true.
     */
    void test01();

    /**
     * @brief Creates an empty stack pushes 1 value, verifies isEmpty() returns false
     */
    void test02();
    
    /**
     * @brief Creates an empty stack, then pushes once, pops once, and verifies isEmpty returns true
     */
    void test03();
    
    
    /**
     * @brief This test will test whether the copy Constructor copies all elements in correct order
     */
    void test04();
    
    /**
     * @brief  This test will check to see if pushing an element after all elements have been popped makes the stack non-empty again
     */
    void test05();
    
    /**
     * @brief  This test will verifty that popping all elements in two different instances still makes the stack empty
     */
    void test06();
    
    /**
     * @brief  This test will verify that popping an empty stack will not change the stack
     */
    void test07();
    
    /**
     * @brief  This test will test if pushing multiple elements on a stack and peeking at that stack will alway return the last element pushed
     */
    void test08();
    
    
public:
    
    /**
     * @pre An object of StackTester must be declared in the main.
     * @post This constructs the object to allow for the battery of tests to be called upon behalf of the object.
     * @param None
     * @throw None
     * @return None
     */
    StackTester();
    
    /**
     * @pre An object of StackTester must be declared in the main.
     * @post This will call all the the test methods.
     * @param None
     * @throw None
     * @return None
     */
    void runTests();
};


#endif
