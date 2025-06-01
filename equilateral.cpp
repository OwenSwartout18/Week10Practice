//
// Created by VSpeedAdmin on 5/31/2025.
//

Equilateral::Equilateral(double side)
    : Triangle(side, side, side) {} // All sides are equal

std::string Equilateral::ToString() const {
    std::ostringstream ss;
    ss << "Equilateral Triangle with side length = " << GetSideA();
    return ss.str();
}