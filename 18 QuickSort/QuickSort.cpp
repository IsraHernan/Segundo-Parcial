#include "QuickSort.h"
#include <iostream>
#include <string>
using namespace std;

QuickSort::QuickSort(){
	
}

QuickSort::~QuickSort(){

}

void QuickSort::ingresarDatos() {
    cout << "Tipo de datos:\n1. Enteros\n2. Caracteres\n3. Personas\nSeleccione: ";
    cin >> tipo;
    cout << "Tamaño del arreglo: ";
    cin >> size;

    if (tipo == 1) {
        for (int i = 0; i < size; i++) {
            cin >> arrInt[i];
        }
    } else if (tipo == 2) {
        for (int i = 0; i < size; i++) {
            cin >> arrChar[i];
        }
    } else if (tipo == 3) {
        for (int i = 0; i < size; i++) {
            cin >> arrPersona[i].nombre >> arrPersona[i].edad;
        }
    }
}

void QuickSort::ordenar() {
    if (tipo == 1) {
        ordenarInt(0, size - 1);
    } else if (tipo == 2) {
        ordenarChar(0, size - 1);
    } else if (tipo == 3) {
        ordenarPersona(0, size - 1);
    }
}

void QuickSort::mostrar() {
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

// INT
int QuickSort::particionInt(int low, int high) {
    int pivot = arrInt[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arrInt[j] < pivot) {
            i++;
            swap(arrInt[i], arrInt[j]);
        }
    }
    swap(arrInt[i + 1], arrInt[high]);
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
    char pivot = arrChar[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arrChar[j] < pivot) {
            i++;
            swap(arrChar[i], arrChar[j]);
        }
    }
    swap(arrChar[i + 1], arrChar[high]);
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
    int pivot = arrPersona[high].edad;
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arrPersona[j].edad < pivot) {
            i++;
            swap(arrPersona[i], arrPersona[j]);
        }
    }
    swap(arrPersona[i + 1], arrPersona[high]);
    return i + 1;
}
void QuickSort::ordenarPersona(int low, int high) {
    if (low < high) {
        int pi = particionPersona(low, high);
        ordenarPersona(low, pi - 1);
        ordenarPersona(pi + 1, high);
    }
}


