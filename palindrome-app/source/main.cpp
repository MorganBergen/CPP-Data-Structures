/**
 * @file        main.cpp
 * @author      Morgan Bergen
 * @date        October 17/2021
 * @brief       This is the main, whereby all tests and implemntations will be initial ran from and called from.  The user must make an entry to dinguish by entering a key whether or not they want to enter into parser mode or test mode, once such entry has been initated by the user either a test from StackTester will be called or a test from StackParser.
 */

#include "StackTester.h"
#include "StackParser.h"
#include <iostream>
#include <string>
#include <stdexcept>

int main(int argc, char* argv[]) {
    
    std::string user_input = argv[1];
    
    if (argc != 2) {
        std::cerr << "error: incorrect number of parameters." << std::endl;
        return(0);
    } else {
        if (user_input == "-t") {
            StackTester test;
            test.runTests();
        } else if (user_input == "-p") {
            StackParser test;
            test.runParser();
        } else {
            std::cerr << "error: incorrect parameter" << std::endl;
            return(0);
        }
    }
    
    return (0);
}
