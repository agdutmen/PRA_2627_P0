#ifndef ROBOTIC_ARM_H
#define ROBOTIC_ARM_H

class RoboticArm {
//3 atributos 
private:
    double x;
    double y;
    double z;
    bool isholding;

public:
    // Constructor
    RoboticArm();

    // Métodos consultores (getters) para los 4 atributos
    double getX() const;
    double getY() const;
    double getZ() const;
    bool getIsHolding() const;

    // Métodos de control
    void grab();
    void release();
    void move(double newX, double newY, double newZ);
};

#endif
