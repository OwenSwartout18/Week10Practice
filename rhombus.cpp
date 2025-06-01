//
// Created by VSpeedAdmin on 5/31/2025.
//
#include "rhombus.h"
#include <sstream>

Rhombus::Rhombus(double side, double height)
    : Rectangle(side, height) {} // All sides are equal, height is vertical distance

std::string Rhombus::ToString() const {
    std::ostringstream ss;
    ss << "Rhombus with side length = " << GetBase()
       << " and height = " << GetHeight();
    return ss.str();
}