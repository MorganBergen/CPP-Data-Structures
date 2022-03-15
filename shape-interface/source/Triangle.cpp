/**
 * @file        Triangle.h
 * @author      Morgan Bergen
 * @date        October 08/2021
 * @brief       This is the header file for the Triangle Class that derives from the Shape Class. It has methods that, can return area, can return the name of the object (always Triangle in this case), can change the base and height, does have a constructor, and has a destructor.  This class will used for inheriting from the Shape Interface.
 */

#include "Triangle.h"
#include <iostream>
#include <string>

Triangle::Triangle(){}

Triangle::Triangle(double base, double height){
    m_base = base;
    m_height = height;
}

void Triangle::setBase(double base){
    m_base = base;
}

void Triangle::setHeight(double height){
    m_height = height;
}

double Triangle::area() const {
    return (0.5*m_base*m_height);
}

std::string Triangle::shapeName() const {
    return("Triangle");
}

Triangle::~Triangle(){}
