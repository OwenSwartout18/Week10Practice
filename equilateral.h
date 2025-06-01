//
// Created by VSpeedAdmin on 5/31/2025.
//

#ifndef EQUILATERAL_H
#define EQUILATERAL_H
#include "triangle.h"
#include "equilateral.h"
#include <sstream>
#include <cmath>

class Equilateral : public Triangle {
public:
    explicit Equilateral(double side) : Triangle(side, side, side) {}
    std::string ToString() const override {
        return "Equilateral Triangle";
    }
};

#endif //EQUILATERAL_H
