#include <iostream>
#include "RoboticArm.h"

int main() {
    // Creamos una instancia de la clase RoboticArm
    RoboticArm brazo;

    std::cout << "--- ESTADO INICIAL ---" << std::endl;
    std::cout << "Posicion X: " << brazo.getX() << std::endl;
    std::cout << "Posicion Y: " << brazo.getY() << std::endl;
    std::cout << "Posicion Z: " << brazo.getZ() << std::endl;
    std::cout << "Sujetando objeto: " << (brazo.getIsHolding() ? "Si" : "No") << std::endl;

    std::cout << "\n--- ACCIONES ---" << std::endl;
    brazo.move(12.5, 4.0, 7.1);
    brazo.grab();

    std::cout << "\n--- ESTADO FINAL ---" << std::endl;
    std::cout << "Posicion actual Z: " << brazo.getZ() << std::endl;
    std::cout << "Sujetando objeto: " << (brazo.getIsHolding() ? "Si" : "No") << std::endl;

    return 0;
}
