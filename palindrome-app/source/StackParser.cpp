/**
 * @file        StackParser.cpp
 * @author      Morgan Bergen
 * @date        October 17/2021
 * @brief       This is the implementation of file of the StackParser.h header file, whereby all methods will be called, ran, defined, and implemented from.
 */

#include <iostream>
#include <string>
#include "StackParser.h"
#include "StackOfChars.h"

StackParser::StackParser() {
    
}

bool StackParser::isBalanced() {
    
    std::string sequence;
    int size = 0;
    
    StackOfChars* stack = nullptr;
    stack = new StackOfChars();
    std::cin >> sequence;
    size = static_cast<int>(sequence.length());
    
    for (int i = 0; i < size; i++) {
        if (sequence.at(0) == '}') {
            stack = nullptr;
            delete stack;
            return(false);
        } else if (sequence.at(i) != '{' && sequence.at(i) != '}') {
            std::cout << "Error:  The input sequence conatins a character that is not a '{' or '}'\n";
            stack = nullptr;
            delete stack;
            return (false);
        } else if (sequence.at(i) == '{') {
            stack -> push(sequence.at(i));
        } else if ((sequence.at(i) == '}') && (!stack -> isEmpty())) {
            try {
                stack -> pop();
            } catch (std::runtime_error& e) {
                std::cout << "Error: " << e.what() << std::endl;
                return(false);
            }
        }
    }
    
    if (stack -> isEmpty()) {
        stack = nullptr;
        delete stack;
        return (true);
    } else {
        do {
            try {
                stack -> pop();
            } catch (std::runtime_error& e) {
                std::cout << "ERROR: " << e.what() << std::endl;
            }
        } while (!(stack -> isEmpty()));
        stack = nullptr;
        delete stack;
        return (false);
    }
}

void StackParser::runParser() {
    
    std::cout << "Enter your sequene: ";
    
    if (isBalanced() == true) {
        std::cout << "Sequence is balanced." << std::endl;
    } else {
        std::cout << "Sequence is not balanced." << std::endl;
    }
    
}

StackParser::~StackParser(){}
