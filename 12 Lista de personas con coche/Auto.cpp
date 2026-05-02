#include "Auto.h"
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>
using namespace std;

Auto::Auto(string modelo, float precio, int anio){
    this->modelo = modelo;
    this->precio = precio;
    this->anio = anio;
}

Auto::~Auto(){
}

void Auto::setModelo(string modelo) { this->modelo = modelo; }
void Auto::setPrecio(float precio) { this->precio = precio; }
void Auto::setAnio(int anio) { this->anio = anio; }
string Auto::getModelo() const { return modelo; }
float Auto::getPrecio() const { return precio; }
int Auto::getAnio() const { return anio; }

void Auto::mostrarDatos() const {
    cout << "Modelo: " << modelo << endl;
    cout << "Precio: $" << precio << endl;
    cout << "Año: " << anio << endl;
}



