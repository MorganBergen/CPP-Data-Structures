/**
 * @file        main.cpp
 * @author      Morgan Bergen
 * @date        October 12/2021
 * @brief
 */

/**
 * @pre
 * @post
 * @param
 * @throw
 * @return
 */



#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Node.h"
#include "StackOfChars.h"
#include "StackTester.h"
#include "Parser.h"

int main(int argc, char* argv[]) {
    
    if(argc != 2) {
        std::cerr << "error: incorrect number of parameters." << std::endl;
        return(0);
    }
    
    std::string input = argv[1];
    
    if (input == "-t") {
        StackTester test;
        test.runTests();
    } else if (input == "-p") {
        Parser pars;
        pars.runParser();
    } else {
        std::cout << "error: incorrect parameter" << std::endl;
        return(0);
    }
    
    return(0);
}
