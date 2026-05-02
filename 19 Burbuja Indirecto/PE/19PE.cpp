#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

int main() {
    int tipo, size;
    int arrInt[100];
    char arrChar[100];
    Persona arrPersona[100];

    int* ptrInt[100];
    char* ptrChar[100];
    Persona* ptrPersona[100];

    cout << "Tipo de datos:\n1. Enteros\n2. Caracteres\n3. Personas\nSeleccione: ";
    cin >> tipo;
    cout << "Tamaño del arreglo: ";
    cin >> size;

    if (tipo == 1) {
        for (int i = 0; i < size; i++) {
            cout << "Entero [" << i + 1 << "]: ";
            cin >> arrInt[i];
            ptrInt[i] = &arrInt[i];
        }
    } else if (tipo == 2) {
        for (int i = 0; i < size; i++) {
            cout << "Caracter [" << i + 1 << "]: ";
            cin >> arrChar[i];
            ptrChar[i] = &arrChar[i];
        }
    } else if (tipo == 3) {
        for (int i = 0; i < size; i++) {
            cout << "Persona [" << i + 1 << "]\n  Nombre: ";
            cin >> arrPersona[i].nombre;
            cout << "  Edad: ";
            cin >> arrPersona[i].edad;
            ptrPersona[i] = &arrPersona[i];
        }
    }

    // Ordenamiento indirecto
    if (tipo == 1) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (*ptrInt[j] > *ptrInt[j + 1]) {
                    swap(ptrInt[j], ptrInt[j + 1]);
                }
            }
        }
    } else if (tipo == 2) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (*ptrChar[j] > *ptrChar[j + 1]) {
                    swap(ptrChar[j], ptrChar[j + 1]);
                }
            }
        }
    } else if (tipo == 3) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (ptrPersona[j]->edad > ptrPersona[j + 1]->edad) {
                    swap(ptrPersona[j], ptrPersona[j + 1]);
                }
            }
        }
    }

    // Mostrar ordenado
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
