#include "Burbuja.h"
#include <iostream>
#include <string>
using namespace std;

Burbuja::Burbuja(int n){
    size = n;
    arrInt = NULL;
    arrChar = NULL;
    arrPersona = NULL;
    ptrInt = NULL;
    ptrChar = NULL;
    ptrPersona = NULL;
    tipo = 0;	
}

Burbuja::~Burbuja(){
    delete[] arrInt;
    delete[] arrChar;
    delete[] arrPersona;
    delete[] ptrInt;
    delete[] ptrChar;
    delete[] ptrPersona;
}

void Burbuja::ingresarDatos() {
    cout << "Tipo de datos:\n1. Enteros\n2. Caracteres\n3. Personas\nSeleccione: ";
    cin >> tipo;

    if (tipo == 1) {
        arrInt = new int[size];
        ptrInt = new int*[size];
        for (int i = 0; i < size; i++) {
            cout << "Entero [" << i + 1 << "]: ";
            cin >> arrInt[i];
            ptrInt[i] = &arrInt[i];
        }
    } else if (tipo == 2) {
        arrChar = new char[size];
        ptrChar = new char*[size];
        for (int i = 0; i < size; i++) {
            cout << "Caracter [" << i + 1 << "]: ";
            cin >> arrChar[i];
            ptrChar[i] = &arrChar[i];
        }
    } else if (tipo == 3) {
        arrPersona = new Persona[size];
        ptrPersona = new Persona*[size];
        for (int i = 0; i < size; i++) {
            cout << "Persona [" << i + 1 << "]\n  Nombre: ";
            cin >> arrPersona[i].nombre;
            cout << "  Edad: ";
            cin >> arrPersona[i].edad;
            ptrPersona[i] = &arrPersona[i];
        }
    }
}

void Burbuja::ordenarIndirecto() {
    if (tipo == 1){
		ordenarInt();
	} 
    else if (tipo == 2){
		ordenarChar();
	} 
    else if (tipo == 3){
		ordenarPersona();
	} 
}

void Burbuja::ordenarInt() {
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (*ptrInt[j] > *ptrInt[j + 1]){
            	swap(ptrInt[j], ptrInt[j + 1]);
			}
        }
    }
}

void Burbuja::ordenarChar() {
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (*ptrChar[j] > *ptrChar[j + 1]){
                swap(ptrChar[j], ptrChar[j + 1]);
			}
        }
    }         
}

void Burbuja::ordenarPersona() {
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (ptrPersona[j]->edad > ptrPersona[j + 1]->edad){
                swap(ptrPersona[j], ptrPersona[j + 1]);
			}
        }
    } 
}

void Burbuja::mostrarOrdenado() {
    if (tipo == 1) {
        for (int i = 0; i < size; i++) 
		cout << *ptrInt[i] << " ";
    } else if (tipo == 2) {
        for (int i = 0; i < size; i++) 
		cout << *ptrChar[i] << " ";
    } else if (tipo == 3) {
        for (int i = 0; i < size; i++)
            cout << ptrPersona[i]->nombre << " (" << ptrPersona[i]->edad << ") ";
    }
    cout << endl;
}
