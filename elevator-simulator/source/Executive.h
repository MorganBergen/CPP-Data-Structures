/**
 * @file        Executive.h
 * @author      Morgan Bergen
 * @date        November 10 2021
 * @brief       This is the Executive Header file.  This file is in charge of ensuring all of the commands are read in through the file and the requist operations are made with allocating and deallocating data for the ADT Stack and Queue classes.
 */


#ifndef Executive_h
#define Executive_h

#include "Queue.h"
#include "Stack.h"
#include <string>
#include <stdio.h>
#include <iostream>

class Executive {
private:
    std::string file_name;
    Queue<std::string> Line;
    Stack<std::string> Elevator;
    
public:
    
    /*
     * @pre     An object of the Executive class must be declared with a string parameter passed through
     * @post    The parameter p_file_name is used to initialize the member variable of this class to file_name the file then is used to be opened and read in the commands which will fill the data in for the ADTs of Queue and Stack classes.
     * @param   p_file_name
     * @throws  none
     * @returns none
     */
    Executive(std::string p_file_name);
    
    /*
     * @pre     The program must
     * @post    All of the contents of the input.txt file regarding the names of the people will be properly allocated and deallocated within the ADT of Queue and Stack accordingly untill they reached the end of the file.  Once inspections occur the state of the Elevator and Line will be updated and stated to the user.
     * @param   None
     * @throws  std::runtime_error
     * @returns None
     */
    void fileIO();
    

};

#endif
