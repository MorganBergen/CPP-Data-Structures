/**
 * @file        Triangle.h
 * @author      Morgan Bergen
 * @date        October 08/2021
 * @brief       This is the header file for the Triangle Class that derives from the Shape Class. It has methods that, can return area, can return the name of the object (always Triangle in this case), can change the radius, does have a constructor, and has a destructor.  This class will used for inheriting from the Shape Interface.
 */

#ifndef Triangle_h
#define Triangle_h
#include <string>
#include <stdio.h>
#include "Shape.h"

class Triangle : public Shape {
private:
    double m_base;
    double m_height;
    
public:
    
    /**
     * @pre     must have an object be initialized from the stack to call this constructor
     * @post    will only construct the object
     * @paramnone
     * @throwsnone
     * @returnsnone
     */
    Triangle();
    
    /**
     * @pre     must have an object be initialized from the stack to call this constructor
     * @post    will only constructor the object
     * @paramnone
     * @throwsnone
     * @returnsnone
     */
    Triangle(double base, double height);
    
    /**
     * @pre     must have an object declared and constructed
     * @post    will initialize m_base to be the same value to that of the base
     * @parambase
     * @throwsnone
     * @returnsnone
     */
    void setBase(double base);
    
    /**
     * @pre     must have an object declared and constructed
     * @post    will initialize m_height to be the same value to that of the base
     * @paramheight
     * @throwsnone
     * @returnsnone
     */
    void setHeight(double height);
    
    /**
     * @pre     must have an object declared and constructed, and have the values of height and base initialized
     * @post    none
     * @paramnone
     * @throwsnone
     * @returnsarea of the triangle, based on the size of m_base and m_height
     */
    virtual double area() const;
    
    /**
     * @pre     must have an object declared and constructed, and have the values of height and base initialized
     * @post    none
     * @paramnone
     * @throwsnone
     * @returnsname of the triangle, which in this case is always "Triangle"
     */
    virtual std::string shapeName() const;
    
    /**
     * @pre     Triangle must no longer be needed by the program
     * @post    will be the destructor of the rectangle class object, inherited by the Shape Interface
     * @paramnone
     * @throwsnone
     * @returnsnone
     */
    virtual ~Triangle();
    
};

#endif /* Triangle_h */
