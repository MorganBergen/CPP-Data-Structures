/**
 * @file        Executive.h
 * @author      Morgan Bergen
 * @date        October 08/2021
 * @brief       This file allows for the overarching functionality of the program.
 *              There are the add, print, and deleteObject functionalities of the
 *              program and there are the member variables that will be used to
 *              read in from the file, to then declare objects and set their
 *              member variables as necessary as we perform operations.
 */

#ifndef Executive_h
#define Executive_h
#include "ShapeContainer.h"
#include <string>
#include <fstream>
#include <stdio.h>

class Executive {
public:
    
    /**
     * @pre     An object of Executive class time must be declared with a string parameter passed through.
     * @post    The parameter file_name is used to initialize the member variable of this class to m_file_name the file then is used to be opened and read in the first line, to initialize the member variable m_file_size m_container pointer is initialized and calls the ShapeConatiner constructor with keyword new.
     * @paramfile_name
     * @thrownone
     * @returnnone
     */
    Executive(std::string file_name);
    
    /**
     * @pre     The program will automatically call this destructor, m_container must no longer be needed by the prorgam.
     * @post    The method will delete the pointer m_container
     * @paramnone
     * @thrownone
     * @returnnone
     */
    ~Executive();
    
    /**
     * @pre      Theobject must be initialized from the Executive Constructor.
     * @post     This method will check if the file is still open, while it is still open it will read in the data and initialize the data to m_instructions and then m_index, depending on what the instruction is, the program will call it's own private member functions, these functions are addToContainer(), print(), deleteObject(), if the file no longer has anything left to be read in it will close the file.
     * @paramnone
     * @thrownone
     * @returnnone
     */
    void run();
    
private:
    std::ifstream in_file;
    int m_file_size;
    int m_index;
    std::string m_file_name;
    ShapeContainer* m_container;
    std::string m_instruction;
    std::string m_name_of_object;
    double m_radius, m_length, m_width, m_height, m_base;
    
    /**
     * @pre      The object must have first ran through the run function and initialized via the Executive constructor
     * @post     Reads in the file and initializes m_name_of_object, depending on the string of the m_name_of_object this method will initialize m_radius, m_length, m_width, m_height, m_base, then will create a temporary pointer of the type of name of the object and store it in m_container.
     * @paramnone
     * @thrownone
     * @returnnone
     */
    void addToContainer();
    
    /**
     *@pre      There must be an object of type Executive initialized via the Executive constructor and must have first ran through the run function.
     *@post     This method will print the contents of the shapecontainer at a given index, by calling the shapeName method from the ShapeContainer class, by having the m_conatiner pointer point to the ShapeName method  with the parameter of m_index.
     *@thrownone
     *@returnnone
     */
    void print() const;
    
    /**
     * @pre      There must be an object of type Executive initialized via the Executive constructor and must have first ran through the run function.
     * @post     This method will delete the contents of the m_container by pointing it to the remove method from the ShapeContainer class at a specific index.
     * @paramnone
     * @thrownone
     * @returnnone
     */
    void deleteObject();
};

#endif /* Executive_h */
