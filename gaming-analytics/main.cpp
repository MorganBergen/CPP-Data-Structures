/*
 [EECS 268] Lab 01
 [Name] Morgan Bergen
 [Student ID] 3073682
 */

#include "Executive.h"
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    
    
    if (argc < 2){
        
        std::cout << "Incorrect number of parameters!\n";
        
    } else {
        Executive exec(argv[1]);
        exec.run();
    }
    
    return(0);
    
}
