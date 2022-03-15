/**
 * @file        Executive.cpp
 * @author      Morgan Bergen
 * @date        November 10 2021
 * @brief       This is the Executive Implementation file.  This file is will define the constructor for this class as well as define the void member function of fileIO();
 */

#include "Queue.h"
#include "Stack.h"
#include "StackInterface.h"
#include "Executive.h"
#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>

Executive::Executive(std::string p_file_name){
    file_name = p_file_name;
}

void Executive::fileIO() {
    
    std::ifstream inStream;
    std::string command;
    std::string name;
    int numppl = 0;
    int line_size = 0;
    int elevator_size = 0;
    
    inStream.open(file_name);
    
    if (!inStream.is_open()) {
        throw (std::runtime_error("File was not opened"));
    }
    while (inStream >> command) {
        if (command == "WAIT" ) {
            inStream >> name;
            Line.enqueue(name);
            numppl++;
            line_size++;
        } else if (command == "PICK_UP") {
            try {
                for (int i = 0; (i < numppl) && (i < 7); i++) {
                    if (Line.isEmpty()) {
                        throw (std::runtime_error("Not enough people in line to pick up.\n"));
                    }
                    Elevator.push(Line.peekFront());
                    Line.dequeue();
                    line_size--;
                    elevator_size++;
                }
            } catch (std::runtime_error &e) {
                std::cout << e.what() << std::endl;
            }
        } else if (command == "DROP_OFF") {
            try {
                inStream >> numppl;
                for (int i = 0; i < numppl; i++) {
                    if (Elevator.isEmpty()) {
                        throw (std::runtime_error("Not enough people in the elevator to drop off.\n"));
                    }
                    Elevator.pop();
                    elevator_size--;
                }
            } catch (std::runtime_error& e) {
                std::cout << e.what() << std::endl;
            }
        } else if (command == "INSPECTION") {
            std::cout << "Elevator status:" << std::endl;
            if (Elevator.isEmpty()) {
                std::cout << "The elevator is empty." << std::endl;
                std::cout << "No one is in the elevator." << std::endl;
            } else {
                std::cout << "The elevator is not empty." << std::endl;
                try {
                    std::cout << Elevator.peek() << " will be the next person to leave the elevator." << std::endl;
                } catch (std::exception &e) {
                    std::cerr << e.what() << std::endl;
                }
            }
            if (Line.isEmpty()) {
                std::cout << "No one is in line.\n" << std::endl;
            } else {
                std::cout << Line.peekFront() << " will be the next person to get on the elevator." << std::endl;
            }
            std::cout << std::endl;
        } else {
            exit(1);
        }
    }
    inStream.close();
}
