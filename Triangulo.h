// Triangulo.h: hereda de Figura (Est1)
#pragma once            // #pragma once: si dos archivos lo incluyen, se copia una sola vez
#include "Figura.h"     // HERENCIA: necesita a la clase madre

// HERENCIA: Triangulo ES UNA Figura
class Triangulo : public Figura {
private:
    double base;                // la base del triangulo
    double altura;              // la altura del triangulo

public:
    Triangulo(double b, double h) : Figura("Triangulo") {   // llama al constructor de Figura
        base = b;
        altura = h;
    }

    double area() override {    // override: reemplaza la de Figura
        return base * altura / 2;
    }
};
