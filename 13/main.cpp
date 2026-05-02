#include <iostream>
#include "PersonaPE.h"
#include "PersonaPOO.h"
using namespace std;

int main() {

    // ===== PERSONAS EN PE =====
    PersonaPE personasPE[2];
    PersonaPE *ptrPE = personasPE;

    cout << "== Captura de Personas (Estructura PE) ==\n";
    for (int i = 0; i < 2; i++) {
        cout << "\nPersona " << i + 1 << ":\n";
        cout << "Nombre: ";
        getline(cin, (ptrPE + i)->nombre);
        cout << "Apellido paterno: ";
        getline(cin, (ptrPE + i)->ap);
        cout << "Apellido materno: ";
        getline(cin, (ptrPE + i)->am);
        cout << "Genero: ";
        getline(cin, (ptrPE + i)->genero);
        cout << "Edad: ";
        cin >> (ptrPE + i)->edad;
        cin.ignore(); // limpiar buffer
    }

    cout << "\n== Lista de Personas (PE) ==\n";
    for (int i = 0; i < 2; i++) {
        cout << (ptrPE + i)->nombre << " "
             << (ptrPE + i)->ap << " "
             << (ptrPE + i)->am << ", "
             << (ptrPE + i)->genero << ", "
             << (ptrPE + i)->edad << " edad\n";
    }

    // ===== PERSONAS EN POO =====
    PersonaPOO personasPOO[2];
    PersonaPOO *ptrPOO = personasPOO;

    cout << "\n== Captura de Personas (Clase POO) ==\n";
    for (int i = 0; i < 2; i++) {
        cout << "\nPersona " << i + 1 << ":\n";
        (ptrPOO + i)->capturar();
    }

    cout << "\n== Lista de Personas (POO) ==\n";
    for (int i = 0; i < 2; i++) {
        (ptrPOO + i)->mostrar();
    }

    return 0;
}

