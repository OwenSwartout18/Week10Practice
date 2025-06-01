//
// Created by VSpeedAdmin on 5/31/2025.
//

#ifndef RHOMBUS_H
#define RHOMBUS_H


#include "rectangle.h"

class Rhombus : public Rectangle {
public:
    Rhombus(double side, double height);
    std::string ToString() const override;
};

#endif //RHOMBUS_H
