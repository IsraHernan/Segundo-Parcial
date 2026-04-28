#include "Auto.h"
#include <iostream>
using namespace std;

Auto::Auto(string* modelo, float* precio, int* anio) {
    this->modelo = modelo;
    this->precio = precio;
    this->anio = anio;
}

Auto::~Auto() {
    delete modelo;
    delete precio;
    delete anio;
}

void Auto::setModelo(string* modelo) { this->modelo = modelo; }
string* Auto::getModelo() const { return modelo; }

void Auto::setPrecio(float* precio) { this->precio = precio; }
float* Auto::getPrecio() const { return precio; }

void Auto::setAnio(int* anio) { this->anio = anio; }
int* Auto::getAnio() const { return anio; }

void Auto::mostrarDatos() const {
    cout << "Modelo: " << *modelo << endl;
    cout << "Precio: $" << *precio << endl;
    cout << "Año: " << *anio << endl;
}



