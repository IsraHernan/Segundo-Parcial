#include "Persona.h"
#include "Auto.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <locale>
using namespace std;

Persona::Persona(string nombre, string apPat, string apMat, char genero, int edad, Auto* coche) {
    this->nombre = nombre;
    this->apellidoPaterno = apPat;
    this->apellidoMaterno = apMat;
    this->genero = genero;
    this->edad = edad;
    this->coche = coche;
}

Persona::~Persona(){
	
}

// Setters y Getters
void Persona::setNombre(string nombre) { this->nombre = nombre; }
string Persona::getNombre() const { return nombre; }

void Persona::setApellidoPaterno(string ap) { apellidoPaterno = ap; }
string Persona::getApellidoPaterno() const { return apellidoPaterno; }

void Persona::setApellidoMaterno(string am) { apellidoMaterno = am; }
string Persona::getApellidoMaterno() const { return apellidoMaterno; }

void Persona::setGenero(char g) { genero = g; }
char Persona::getGenero() const { return genero; }

void Persona::setEdad(int e) { edad = e; }
int Persona::getEdad() const { return edad; }

void Persona::setCoche(Auto* coche) { this->coche = coche; }
Auto* Persona::getCoche() const { return coche; }

bool Persona::tieneCoche() const {
    return coche != NULL;
}

void Persona::mostrarDatos() const {
    cout << "\nNombre: " << nombre << " " << apellidoPaterno << " " << apellidoMaterno << endl;
    cout << "Género: " << genero << endl;
    cout << "Edad: " << edad << " años" << endl;

    if (tieneCoche()) {
        cout << "--- Auto ---" << endl;
        coche->mostrarDatos();
    }
}

