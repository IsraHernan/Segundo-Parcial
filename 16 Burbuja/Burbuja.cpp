#include "Burbuja.h"
#include <iostream>
#include <string>
using namespace std;

Burbuja::Burbuja(){

}

Burbuja::~Burbuja(){
	
}

void Burbuja::ingresarDatos() {
    cout << "Tipo de datos:\n1. Enteros\n2. Caracteres\n3. Personas\nSeleccione: ";
    cin >> tipo;
    cout << "Tamaño del arreglo: ";
    cin >> size;

    if (tipo == 1) {
        for (int i = 0; i < size; i++) {
            cout << "Entero [" << i + 1 << "]: ";
            cin >> arrInt[i];
        }
    } else if (tipo == 2) {
        for (int i = 0; i < size; i++) {
            cout << "Caracter [" << i + 1 << "]: ";
            cin >> arrChar[i];
        }
    } else if (tipo == 3) {
        for (int i = 0; i < size; i++) {
            cout << "Persona [" << i + 1 << "]\n  Nombre: ";
            cin >> arrPersona[i].nombre;
            cout << "  Edad: ";
            cin >> arrPersona[i].edad;
        }
    }
}

void Burbuja::ordenar() {
    if (tipo == 1) {
        ordenarInt();
    } else if (tipo == 2) {
        ordenarChar();
    } else if (tipo == 3) {
        ordenarPersona();
    }
}

void Burbuja::ordenarInt() {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arrInt[j] > arrInt[j + 1]) {
                swap(arrInt[j], arrInt[j + 1]);
            }
        }
    }
}

void Burbuja::ordenarChar() {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arrChar[j] > arrChar[j + 1]) {
                swap(arrChar[j], arrChar[j + 1]);
            }
        }
    }
}

void Burbuja::ordenarPersona() {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arrPersona[j].edad > arrPersona[j + 1].edad) {
                swap(arrPersona[j], arrPersona[j + 1]);
            }
        }
    }
}

void Burbuja::mostrar() {
    if (tipo == 1) {
        for (int i = 0; i < size; i++) {
            cout << arrInt[i] << " ";
        }
    } else if (tipo == 2) {
        for (int i = 0; i < size; i++) {
            cout << arrChar[i] << " ";
        }
    } else if (tipo == 3) {
        for (int i = 0; i < size; i++) {
            cout << arrPersona[i].nombre << " (" << arrPersona[i].edad << ") ";
        }
    }
    cout << endl;
}

