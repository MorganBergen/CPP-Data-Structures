// StackParser.cpp

#include <iostream>
#include <string.h>
#include "Parser.h"

void Parser::runParser() {
    std::string sequence;
    int size = 0;
    int count = 0;
    bool search = true;
    int fail_count = 0;
    
    do {
        std::cout << "Enter your sequence: ";
        std::cin >> sequence;
        fail_count = 0;
        size = sequence.length();
        
        for (int i = 0; i < size; i++) {
            if (sequence.at(i) != '{' && sequence.at(i) != '}') {
                //something
            }
        }
        
    } while ();//something);
    
}
