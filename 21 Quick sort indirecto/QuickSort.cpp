#include "QuickSort.h"
#include <iostream>
#include <string>
using namespace std;

QuickSort::QuickSort(int n){
    size = n;
    arrInt = NULL;
    arrChar = NULL;
    arrPersona = NULL;
    ptrInt = NULL;
    ptrChar = NULL;
    ptrPersona = NULL;
    tipo = 0;
	
}

QuickSort::~QuickSort(){
    delete[] arrInt;
    delete[] arrChar;
    delete[] arrPersona;
    delete[] ptrInt;
    delete[] ptrChar;
    delete[] ptrPersona;
}

void QuickSort::ingresarDatos() {
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

void QuickSort::ordenarIndirecto() {
    if (tipo == 1) ordenarInt(0, size - 1);
    else if (tipo == 2) ordenarChar(0, size - 1);
    else if (tipo == 3) ordenarPersona(0, size - 1);
}

void QuickSort::mostrarOrdenado() {
    if (tipo == 1) {
        for (int i = 0; i < size; i++) cout << *ptrInt[i] << " ";
    } else if (tipo == 2) {
        for (int i = 0; i < size; i++) cout << *ptrChar[i] << " ";
    } else if (tipo == 3) {
        for (int i = 0; i < size; i++)
            cout << ptrPersona[i]->nombre << " (" << ptrPersona[i]->edad << ") ";
    }
    cout << endl;
}

// INT
int QuickSort::particionInt(int low, int high) {
    int pivot = *ptrInt[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (*ptrInt[j] < pivot) {
            i++;
            swap(ptrInt[i], ptrInt[j]);
        }
    }
    swap(ptrInt[i + 1], ptrInt[high]);
    return i + 1;
}
void QuickSort::ordenarInt(int low, int high) {
    if (low < high) {
        int pi = particionInt(low, high);
        ordenarInt(low, pi - 1);
        ordenarInt(pi + 1, high);
    }
}

// CHAR
int QuickSort::particionChar(int low, int high) {
    char pivot = *ptrChar[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (*ptrChar[j] < pivot) {
            i++;
            swap(ptrChar[i], ptrChar[j]);
        }
    }
    swap(ptrChar[i + 1], ptrChar[high]);
    return i + 1;
}
void QuickSort::ordenarChar(int low, int high) {
    if (low < high) {
        int pi = particionChar(low, high);
        ordenarChar(low, pi - 1);
        ordenarChar(pi + 1, high);
    }
}

// PERSONA
int QuickSort::particionPersona(int low, int high) {
    int pivot = ptrPersona[high]->edad;
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (ptrPersona[j]->edad < pivot) {
            i++;
            swap(ptrPersona[i], ptrPersona[j]);
        }
    }
    swap(ptrPersona[i + 1], ptrPersona[high]);
    return i + 1;
}
void QuickSort::ordenarPersona(int low, int high) {
    if (low < high) {
        int pi = particionPersona(low, high);
        ordenarPersona(low, pi - 1);
        ordenarPersona(pi + 1, high);
    }
}

