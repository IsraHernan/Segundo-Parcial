#include "PersonaPOO.h"

PersonaPOO::PersonaPOO() {
    nombre = ap = am = genero = "";
    edad = 0;
}

PersonaPOO::~PersonaPOO() {
    // Destructor vacío
}

void PersonaPOO::capturar() {
    cout << "\nIngrese nombre: ";
    getline(cin, nombre);
    cout << "Apellido paterno: ";
    getline(cin, ap);
    cout << "Apellido materno: ";
    getline(cin, am);
    cout << "Genero: ";
    getline(cin, genero);
    cout << "Edad: ";
    cin >> edad;
    cin.ignore(); // limpiar buffer
}

void PersonaPOO::mostrar() const {
    cout << nombre << " " << ap << " " << am << ", "
         << genero << ", " << edad << " edad" << endl;
}

