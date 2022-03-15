/**
 * @file        Main.cpp
 * @author      Morgan Bergen
 * @date        November 10 2021
 * @brief       This is the main.cpp, the file in which the user will be interacting with directly.  This main will be requesting for a command line input of the name of a file name.  When the user appropriately inputs the name of the file, the sebsequent Executive Object will be called, constructed, and run the fileIO method for filling the data structures of Queue and Stack ADTs.
 */


#include "Executive.h"
#include <string>
#include <iostream>

int main(int argc, const char * argv[]) {
    
    if (argc < 2) {
        std::cerr << "Incorrect number of parameters.\n";
    } else {
        Executive object(argv[1]);
        try {
            object.fileIO();
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    
    return (0);
}
