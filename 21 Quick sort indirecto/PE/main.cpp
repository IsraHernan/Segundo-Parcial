#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

int* ptrInt[100];
char* ptrChar[100];
Persona* ptrPersona[100];

int particionInt(int low, int high) {
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
void ordenarInt(int low, int high) {
    if (low < high) {
        int pi = particionInt(low, high);
        ordenarInt(low, pi - 1);
        ordenarInt(pi + 1, high);
    }
}

int particionChar(int low, int high) {
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
void ordenarChar(int low, int high) {
    if (low < high) {
        int pi = particionChar(low, high);
        ordenarChar(low, pi - 1);
        ordenarChar(pi + 1, high);
    }
}

int particionPersona(int low, int high) {
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
void ordenarPersona(int low, int high) {
    if (low < high) {
        int pi = particionPersona(low, high);
        ordenarPersona(low, pi - 1);
        ordenarPersona(pi + 1, high);
    }
}

int main() {
    int tipo, size;
    int arrInt[100];
    char arrChar[100];
    Persona arrPersona[100];

    cout << "Tipo de datos:\n1. Enteros\n2. Caracteres\n3. Personas\nSeleccione: ";
    cin >> tipo;
    cout << "Tamaño del arreglo: ";
    cin >> size;

    if (tipo == 1) {
        for (int i = 0; i < size; i++) {
            cin >> arrInt[i];
            ptrInt[i] = &arrInt[i];
        }
        ordenarInt(0, size - 1);
    } else if (tipo == 2) {
        for (int i = 0; i < size; i++) {
            cin >> arrChar[i];
            ptrChar[i] = &arrChar[i];
        }
        ordenarChar(0, size - 1);
    } else if (tipo == 3) {
        for (int i = 0; i < size; i++) {
            cin >> arrPersona[i].nombre >> arrPersona[i].edad;
            ptrPersona[i] = &arrPersona[i];
        }
        ordenarPersona(0, size - 1);
    }

    cout << "\nOrdenado (indirecto):\n";
    if (tipo == 1) {
        for (int i = 0; i < size; i++) {
            cout << *ptrInt[i] << " ";
        }
    } else if (tipo == 2) {
        for (int i = 0; i < size; i++) {
            cout << *ptrChar[i] << " ";
        }
    } else if (tipo == 3) {
        for (int i = 0; i < size; i++) {
            cout << ptrPersona[i]->nombre << " (" << ptrPersona[i]->edad << ") ";
        }
    }
    cout << endl;

    return 0;
}
