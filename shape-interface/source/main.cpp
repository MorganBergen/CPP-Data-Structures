/**
 * @file        main.cpp
 * @author      Morgan Bergen
 * @date        October 08/2021
 * @brief       This main will call the constrctor of the executive class by delcarating an object named exec, and will execute it's member method run.
 */

#include <iostream>
#include "Executive.h"

int main(int argc, const char * argv[]) {
    
    if (argc < 2) {
        std::cerr << "incorrect number of parameters\n";
    } else {
        Executive exec(argv[1]);
        exec.run();
    }
    
    return(0);
}
