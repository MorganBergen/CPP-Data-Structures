/**
 * @file        Shape.h
 * @author      Morgan Bergen
 * @date        October 08/2021
 * @brief       This file has no implementation since it is an abstract base class.  This class allows for the derived classes to be linked together.
 *              Derived classes will have the implementations of these member methods
 */

#ifndef Shape_h
#define Shape_h

#include <string>

class Shape {
    
public:
    
    /**
     * @pre     derived class defines this method
     * @post    will not make any changes to member variables of derived classes
     * @paramnone
     * @throwsnone
     * @returnsreturns the area of the shape
     */
    virtual double area() const = 0;
    
    /**
     * @pre     derived class defines this method
     * @post    will not make any changes to member variables of derived classes
     * @paramnone
     * @throwsnone
     * @returnsthe name of the shape
     */
    virtual std::string shapeName() const = 0;
    
    /**
     * @pre     derived class defines this method, derived classes must no longer need the shape base class
     * @post    will be the destructor of the shape class, intentionally left empty
     * @paramnone
     * @throwsnone
     * @returnsnone
     */
    virtual ~Shape() {};
};

#endif
