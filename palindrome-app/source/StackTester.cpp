/**
 * @file        StackTester.cpp
 * @author      Morgan Bergen
 * @date        October 17/2021
 * @brief       This is the implementation file for all the StackTester Methods outlined from StackTester.h
 */

#include "StackTester.h"
#include "StackOfChars.h"
#include <iostream>
#include <stdexcept>

StackTester::StackTester() {}

void StackTester::runTests() {
    
    test01();
    test02();
    test03();
    test04();
    test05();
    test06();
    test07();
    test08();
}

void StackTester::test01() {
    
    std::cout << "Test #1:  New stack is empty: ";
    
    StackOfChars* object;
    object = new StackOfChars;
    
    try {
        bool truth = object -> isEmpty();
        if (truth == true) {
            std::cout << "PASSED" << std::endl;
        } else {
            std::cout << "FAILED" << std::endl;
        }
    } catch (std::exception& e) {
        std::cout << e.what();
    }
}

void StackTester::test02() {
    std::cout << "Test #2:  Push on empty stack makes it non-empty: ";
    
    StackOfChars object;
    object.push('a');
    
    if (object.isEmpty() == true) {
        std::cout << "FAILED" << std::endl;
    } else if (object.isEmpty() == false) {
        std::cerr << "PASSED" << std::endl;
    } else {
        std::cerr << "FAILED TO MAKE OBJECT" << std::endl;
    }
}

void StackTester::test03() {
    std::cout << "Test #3:  Popping all elements makes stack empty: ";
    
    StackOfChars* object = nullptr;
    object = new StackOfChars;
    object -> push('a');
    
    try {
        object -> pop();
    } catch (std::exception& e) {
        std::cout << e.what();
    }
    
    if (object -> isEmpty() == true) {
        std::cout << "PASSED" << std::endl;
    } else {
        std::cerr << "FAILED" << std::endl;
    }
}

void StackTester::test04() {
    std::cout << "Test #4:  Copy constructor copies all elements in correct order: ";
    
    int size = 123;
    int size_counter = size;
    StackOfChars* object = nullptr;
    object = new StackOfChars();
    
    for (int i = 97; i < size; i++) {
        object -> push(static_cast<char>(i));
        
    }
    
    StackOfChars* object_copy = nullptr;
    object_copy = new StackOfChars(*object);
    
    try {
        bool result = true;
        for (int i = 123; i > 97; i--) {
            char compare_obj = object -> peek();
            char compare_obj_copy = object_copy -> peek();
            if (compare_obj == compare_obj_copy) {
                result = true;
            } else {
                result = false;
            }
            object -> pop();
            object_copy -> pop();
            size_counter--;
        }
        if (result == true) {
            std::cout << "PASSED" << std::endl;
        } else {
            std::cout << "FAILED" << std::endl;
        }
    } catch (std::exception& e) {
        std::cout << "FAILED " << e.what() << std::endl;
    }
}

void StackTester::test05() {
    std::cout << "Test #5:  Pushing an element after all elements have been popped makes the stack non-empty again: ";
    
    bool truth_state = true;
    StackOfChars* stack = nullptr;
    stack = new StackOfChars();
    
    for (int i = 97; i < 123; i++) {
        stack -> push(static_cast<char>(i));
        stack -> pop();
    }
    
    stack -> push('a');
    
    try {
        stack -> peek();
        truth_state = stack -> isEmpty();
    } catch (std::exception& e) {
        std::cout << "FAILED " << e.what() << std::endl;
        truth_state = stack -> isEmpty();
    }
    
    if (truth_state == false) {
        std::cout << "PASSED" << std::endl;
    } else {
        std::cout << "FAILED" << std::endl;
    }
    
}

void StackTester::test06() {
    std::cout << "Test #6:  Popping all elements in two different instances still makes the stack empty: ";
    
    int instance = 0;
    bool truth_state;
    StackOfChars* object = nullptr;
    object = new StackOfChars;
    object -> push('a');
    object -> push('b');
    object -> pop();
    object -> pop();
    
    try {
        object -> pop();
    } catch (std::exception& e) {
        truth_state = object -> isEmpty();
        instance++;
        
    }
    
    try {
        object -> pop();
    } catch (std::exception& e) {
        truth_state = object -> isEmpty();
        instance++;
    }
    
    if (instance == 2) {
        if ((truth_state = true)) {
            std::cout << "PASSED" << std::endl;
        } else if ((truth_state = false)) {
            std::cout << "FAILED" << std::endl;
        }
    } else {
        std::cout << "FAILED" << std::endl;
    }
}

void StackTester::test07() {
    std::cout << "Test #7:  Popping an empty stack will not change the stack: ";
    
    bool changed_state = false;
    StackOfChars* stack = nullptr;
    stack = new StackOfChars;
    
    if (stack -> isEmpty()) {
        changed_state = false;
    }
    
    try {
        stack -> pop();
    } catch (std::exception& e) {
    }
    
    stack -> operator=(*stack);
    
    try {
        stack -> peek();
        changed_state = true;
    } catch (std::exception& e) {
        changed_state = false;
    }
    
    if (changed_state == false) {
        std::cout << "PASSED" << std::endl;
    } else {
        std::cout << "FAILED" << std::endl;
    }
    
}

void StackTester::test08() {
    std::cout << "Test #8:  Pushing multiple elements on a stack and peeking at that stack will always return the last element pushed: ";
    char last_element = 'c';
    char compare_last;
    
    StackOfChars* object = nullptr;
    object = new StackOfChars;
    
    object -> push('a');
    object -> push('b');
    object -> push(last_element);
    
    try {
        compare_last = object -> peek();
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    
    if (compare_last == last_element) {
        std::cout << "PASSED" << std::endl;
    } else if (compare_last != last_element) {
        std::cout << "FAILED" << std::endl;
    }
    
}
