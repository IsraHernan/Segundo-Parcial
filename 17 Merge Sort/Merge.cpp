#include "Merge.h"
#include <iostream>
#include <string>
using namespace std;

Merge::Merge(){
	
}

Merge::~Merge(){
	
}

void Merge::ingresarDatos() {
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

void Merge::ordenar() {
    if (tipo == 1) {
        ordenarInt(0, size - 1);
    } else if (tipo == 2) {
        ordenarChar(0, size - 1);
    } else if (tipo == 3) {
        ordenarPersona(0, size - 1);
    }
}

void Merge::mostrar() {
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
void Merge::ordenarInt(int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        ordenarInt(low, mid);
        ordenarInt(mid + 1, high);
        mergeInt(low, mid, high);
    }
}

void Merge::mergeInt(int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int L[100], R[100];

    for (int i = 0; i < n1; i++) {
        L[i] = arrInt[low + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arrInt[mid + 1 + j];
    }

    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arrInt[k++] = L[i++];
        } else {
            arrInt[k++] = R[j++];
        }
    }
    while (i < n1) {
        arrInt[k++] = L[i++];
    }
    while (j < n2) {
        arrInt[k++] = R[j++];
    }
}

// CHAR
void Merge::ordenarChar(int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        ordenarChar(low, mid);
        ordenarChar(mid + 1, high);
        mergeChar(low, mid, high);
    }
}

void Merge::mergeChar(int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    char L[100], R[100];

    for (int i = 0; i < n1; i++) {
        L[i] = arrChar[low + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arrChar[mid + 1 + j];
    }

    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arrChar[k++] = L[i++];
        } else {
            arrChar[k++] = R[j++];
        }
    }
    while (i < n1) {
        arrChar[k++] = L[i++];
    }
    while (j < n2) {
        arrChar[k++] = R[j++];
    }
}

// PERSONA
void Merge::ordenarPersona(int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        ordenarPersona(low, mid);
        ordenarPersona(mid + 1, high);
        mergePersona(low, mid, high);
    }
}

void Merge::mergePersona(int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    Persona L[100], R[100];

    for (int i = 0; i < n1; i++) {
        L[i] = arrPersona[low + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arrPersona[mid + 1 + j];
    }

    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (L[i].edad <= R[j].edad) {
            arrPersona[k++] = L[i++];
        } else {
            arrPersona[k++] = R[j++];
        }
    }
    while (i < n1) {
        arrPersona[k++] = L[i++];
    }
    while (j < n2) {
        arrPersona[k++] = R[j++];
    }
}


