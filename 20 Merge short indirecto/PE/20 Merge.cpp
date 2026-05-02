#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

int arrInt[100];
char arrChar[100];
Persona arrPersona[100];

int* ptrInt[100];
char* ptrChar[100];
Persona* ptrPersona[100];

int tipo, size;

// INT
void mergeInt(int low, int mid, int high) {
    int* temp[100];
    int i = low;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= high) {
        if (*ptrInt[i] <= *ptrInt[j]) {
            temp[k++] = ptrInt[i++];
        } else {
            temp[k++] = ptrInt[j++];
        }
    }
    while (i <= mid) {
        temp[k++] = ptrInt[i++];
    }
    while (j <= high) {
        temp[k++] = ptrInt[j++];
    }
    for (int t = 0; t < k; t++) {
        ptrInt[low + t] = temp[t];
    }
}

void ordenarInt(int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        ordenarInt(low, mid);
        ordenarInt(mid + 1, high);
        mergeInt(low, mid, high);
    }
}

// CHAR
void mergeChar(int low, int mid, int high) {
    char* temp[100];
    int i = low;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= high) {
        if (*ptrChar[i] <= *ptrChar[j]) {
            temp[k++] = ptrChar[i++];
        } else {
            temp[k++] = ptrChar[j++];
        }
    }
    while (i <= mid) {
        temp[k++] = ptrChar[i++];
    }
    while (j <= high) {
        temp[k++] = ptrChar[j++];
    }
    for (int t = 0; t < k; t++) {
        ptrChar[low + t] = temp[t];
    }
}

void ordenarChar(int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        ordenarChar(low, mid);
        ordenarChar(mid + 1, high);
        mergeChar(low, mid, high);
    }
}

// PERSONA
void mergePersona(int low, int mid, int high) {
    Persona* temp[100];
    int i = low;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= high) {
        if (ptrPersona[i]->edad <= ptrPersona[j]->edad) {
            temp[k++] = ptrPersona[i++];
        } else {
            temp[k++] = ptrPersona[j++];
        }
    }
    while (i <= mid) {
        temp[k++] = ptrPersona[i++];
    }
    while (j <= high) {
        temp[k++] = ptrPersona[j++];
    }
    for (int t = 0; t < k; t++) {
        ptrPersona[low + t] = temp[t];
    }
}

void ordenarPersona(int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        ordenarPersona(low, mid);
        ordenarPersona(mid + 1, high);
        mergePersona(low, mid, high);
    }
}

int main() {
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
        ordenarInt(0, size - 1);
    } else if (tipo == 2) {
        for (int i = 0; i < size; i++) {
            cout << "Caracter [" << i + 1 << "]: ";
            cin >> arrChar[i];
            ptrChar[i] = &arrChar[i];
        }
        ordenarChar(0, size - 1);
    } else if (tipo == 3) {
        for (int i = 0; i < size; i++) {
            cout << "Persona [" << i + 1 << "]\n  Nombre: ";
            cin >> arrPersona[i].nombre;
            cout << "  Edad: ";
            cin >> arrPersona[i].edad;
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

