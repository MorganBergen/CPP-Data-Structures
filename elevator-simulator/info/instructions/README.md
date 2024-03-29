https://www.google.com/search?client=safari&rls=en&q=Nick+G+Cox+Communications+Senior+specalist&ie=UTF-8&oe=UTF-8


https://wiki.ittc.ku.edu/ittc_wiki/index.php/EECS268:Lab4

Elevator Management Program

Assignment Date     Sept 27 2021
Due Date            Oct  04 2021

Restrictions:
    All solutions must be entirely c++
    Do not use existing standard library data structure to implement this lab.  (e.g. don't use vector to implement your stack or queue interface.)

Program Overview:
    You are being placed in charge of running an elevator in an office building.
    People enter your building on the ground floor to wait in line for the elevator

Ground Floor Rules:
    The first person in line will be the first to get on the elevator
    There is no cap on how many people can be waiting for the elevator

Elevator Rules:
    The first person to get into the elevator will be the last one off
    To avoid violating fire codes, only 7 people may occupy the elevator

Program Details:
    You will read in from file what is happening to the elevator.
    You can assume the file will be well formatted.
    You may not assume that the commands will be given in a logical order or have safe values.
    For example, the command "DROP_OFF 10" could be in the file when no one is in the elevator.
    When problems like this arise, you must handle the thrown exception.
    Do not simply disallow such actions to occur, you need to get practice catching and handling exceptions.

Commands from Files:

    Command             Description

    WAIT <name>         Someone is waiting in line for the elevator
                        It will be a single word (no whitespaces)

    PICK_UP             As many people that can fit get on the elevator

    DROP_OFF <#>        The elevator goes up into the building
                        No number of people get out
                        Then the elevator returns to the ground floor

    INSPECTION          The status of the following is printed to the screen
                            Is the elevator empty?
                            Who will be the next to get off the elevator?
                            Who will be the next to get on the elevator?
                        Output Example:
                            Elevator status:
                            The elevator is not empty
                            Mark will be the next person to leave the elevator
                            Stacky will be the next person to get on the elevator
Commands from File Notes:
    There is not exit command.
    You will have to read until you reach the end of file.
    Here's one way of reading until you reach the end of file:

    while (inFileObject >> someVar) {
        // you just successfully read something into someVar
        // so you can proceed or perhaps even continue reading into other variables
    }


Required Files
Executive.cpp
Executive.h
input.txt
main.cpp
makefile
Node.cpp
Node.h
Queue.cpp
Queue.h
Stack.cpp
Stack.h

Notes:
    Implemented Interfaces will be for extra credit
    The only printing happens when an inspection command is given

