#ifndef PERSONAPOO_H
#define PERSONAPOO_H

#include <iostream>
#include <string>
using namespace std;

class PersonaPOO {
private:
    string nombre, ap, am, genero;
    int edad;

public:
    PersonaPOO();
    ~PersonaPOO();

    void capturar();
    void mostrar() const;
};

#endif

