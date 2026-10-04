#include "RoboticArm.h"
#include <iostream>

// Constructor: inicializa el brazo en el origen (0,0,0) y sin sujetar nada
RoboticArm::RoboticArm() : x(0.0), y(0.0), z(0.0), isHolding(false) {}

// Métodos consultores
double RoboticArm::getX() const { return x; }
double RoboticArm::getY() const { return y; }
double RoboticArm::getZ() const { return z; }
bool RoboticArm::getIsHolding() const { return isHolding; }

// Métodos de acción
void RoboticArm::grab() {
    isHolding = true;
    std::cout << "El brazo robótico ha cogido el objeto." << std::endl;
}

void RoboticArm::release() {
    isHolding = false;
    std::cout << "El brazo robótico ha soltado el objeto." << std::endl;
}

void RoboticArm::move(double newX, double newY, double newZ) {
    x = newX;
    y = newY;
    z = newZ;
    std::cout << "El brazo se ha movido a las coordenadas (" << x << ", " << y << ", " << z << ")." << std::endl;
}
