// Circulo.h: hereda de Figura (Est2)
#pragma once            // #pragma once: si dos archivos lo incluyen, se copia una sola vez
#include "Figura.h"     // HERENCIA: necesita a la clase madre

const double PI = 3.14159;      // constante: no cambia nunca

// HERENCIA: Circulo ES UNA Figura
class Circulo : public Figura {
private:
    double radio;               // el radio del circulo

public:
    Circulo(double r) : Figura("Circulo") {   // llama al constructor de Figura
        radio = r;
    }

    double area() override {    // override: reemplaza la de Figura
        return PI * radio * radio;
    }
};
