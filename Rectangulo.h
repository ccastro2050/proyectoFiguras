// Rectangulo.h: hereda de Figura (Est3)
#pragma once            // #pragma once: si dos archivos lo incluyen, se copia una sola vez
#include "Figura.h"     // HERENCIA: necesita a la clase madre

// HERENCIA: Rectangulo ES UNA Figura
class Rectangulo : public Figura {
private:
    double base;                // la base del rectangulo
    double altura;              // la altura del rectangulo

public:
    Rectangulo(double b, double h) : Figura("Rectangulo") {   // llama al constructor de Figura
        base = b;
        altura = h;
    }

    double area() override {    // override: reemplaza la de Figura
        return base * altura;
    }
};
