/**
 * @file        Circle.cpp
 * @author      Morgan Bergen
 * @date        October 08/2021
 * @brief       This file is the implementation file of the Circle class methods
 *
 */

#include "Circle.h"
#include <iostream>
#include <string>

Circle::Circle(){}

Circle::Circle(double radius){
    m_radius = radius;
}

void Circle::setRadius(double radius){
    m_radius = radius;
}

double Circle::area() const {
    return (3.14159*m_radius*m_radius);
}

std::string Circle::shapeName() const {
    return("Circle");
}

Circle::~Circle(){}
