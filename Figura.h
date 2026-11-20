// Figura.h: la clase madre (Est1)
#pragma once            // #pragma once: si dos archivos lo incluyen, se copia una sola vez
#include <iostream>     // cout (escribir en pantalla)
#include <iomanip>      // fixed y setprecision (dos decimales)
#include <string>       // el tipo string
using namespace std;    // para escribir cout en vez de std::cout

// =============================================================
// Clase base Figura (abstracta): no se crean "figuras" sueltas,
// solo triangulos, circulos o rectangulos
// =============================================================
class Figura {
protected:                      // protected: lo ven Figura y sus hijas
    string nombre;              // "Triangulo", "Circulo" o "Rectangulo"

public:
    Figura(string n) {          // constructor: se llama al crear el objeto
        nombre = n;
    }

    virtual ~Figura() {}        // destructor virtual: obligatorio en una clase base

    // POLIMORFISMO: cada hija calcula el area a su manera.
    // = 0 significa "virtual pura": Figura no la implementa
    virtual double area() = 0;

    void mostrar() {            // la misma para todas las hijas
        cout << fixed << setprecision(2);                  // dos decimales
        cout << nombre << ": area = " << area() << endl;   // area() llama a la de la hija
    }
};
