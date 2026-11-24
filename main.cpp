// main.cpp: el programa del equipo
#include <vector>           // vector: un arreglo que crece solo
#include "Figura.h"         // la clase madre
// === Las figuras del equipo (cada uno agrega su #include aqui) ===
#include "Triangulo.h"     // Est1
#include "Circulo.h"       // Est2
#include "Rectangulo.h"    // Est3

int main() {
    vector<Figura*> figuras;    // punteros a la clase MADRE: guardan cualquier hija

    // === Cada uno agrega su figura aqui ===
    figuras.push_back(new Triangulo(6, 4));    // Est1: base 6, altura 4
    figuras.push_back(new Circulo(3));         // Est2: radio 3
    figuras.push_back(new Rectangulo(5, 2));   // Est3: base 5, altura 2

    cout << "Figuras del equipo: " << figuras.size() << endl;
    for (Figura* f : figuras) { // recorre todas las figuras
        f->mostrar();           // POLIMORFISMO: cada una calcula su area
    }

    for (Figura* f : figuras) { // libera la memoria de cada new
        delete f;
    }
    return 0;
}
