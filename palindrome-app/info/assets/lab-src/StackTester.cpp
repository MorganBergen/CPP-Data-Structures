/**
 * @file        StackTester.cpp
 * @author      Morgan Bergen
 * @date        October 12/2021
 * @brief
 */

#include "StackTester.h"

void StackTester::test01() {
    
    StackOfChars obj;
    std::cout << "Test #1:  New stack is empty: ";
    if (obj.isEmpty() == true) {
        std::cout << "PASSED" << std::endl;
    } else {
        std::cout << "FAILED" << std::endl;
    }
}

void StackTester::test02() {
    StackOfChars obj;
    std::cout << "Test #2:  Push on empty stack makes it non-empty: ";
    obj.push('a');
    if (obj.isEmpty() == false) {
        std::cout << "PASSED" << std::endl;
    } else {
        std::cout << "FAILED" << std::endl;
    }
}

void StackTester::test03() {
    //empty
}
