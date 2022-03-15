// main.cpp

#include <iostream>
#include <string.h>
#include <stdio.h>
//#include "Node.h"
//#include "StackOfChars.h"
//#include "StackTester.h"
//#include "Parser.h"

int main(int argc, char* argv[]) {
    
    if(argc != 2) {
        std::cerr << "error: incorrect number of parameters." << std::endl;
        return(0);
    }
    
    std::string input = argv[1];
    
    if (input == "-t") {
        std::cout << "StackTester test;" << std::endl;
        std::cout << "test.runTests();" << std::endl;
    } else if (input == "-p") {
        std::cout << "Parser pars;" << std::endl;
        std::cout << "pars.runParser();" << std::endl;
    } else {
        std::cout << "error: incorrect parameter" << std::endl;
        return(0);
    }
    
    return(0);
}
