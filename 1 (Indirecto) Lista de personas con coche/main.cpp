#include <iostream>
#include "Auto.h"
#include "Persona.h"
#include <vector>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int numPersonas;

    cout << "¿Cuántas personas deseas registrar? ";
    cin >> numPersonas;
    cin.ignore();

    vector<Persona*> personas;

    for (int i = 0; i < numPersonas; ++i) {
        string* nombre = new string;
        string* apPat = new string;
        string* apMat = new string;
        char* genero = new char;
        int* edad = new int;
        char tieneAuto;

        cout << "\n--- Persona #" << (i + 1) << " ---" << endl;
        cout << "Nombre: ";
        getline(cin, *nombre);
        cout << "Apellido paterno: ";
        getline(cin, *apPat);
        cout << "Apellido materno: ";
        getline(cin, *apMat);
        cout << "Género (M/F): ";
        cin >> *genero;
        cout << "Edad: ";
        cin >> *edad;
        cout << "¿Tiene coche? (s/n): ";
        cin >> tieneAuto;
        cin.ignore();

        Auto* coche = NULL;
        if (tieneAuto == 's' || tieneAuto == 'S') {
            string* modelo = new string;
            float* precio = new float;
            int* anio = new int;

            cout << "Modelo del coche: ";
            getline(cin, *modelo);
            cout << "Precio: ";
            cin >> *precio;
            cout << "Año: ";
            cin >> *anio;
            cin.ignore();

            coche = new Auto(modelo, precio, anio);
        }

        Persona* nueva = new Persona(nombre, apPat, apMat, genero, edad, coche);
        personas.push_back(nueva);
    }

    cout << "\n=== LISTA DE PERSONAS CON COCHE ===" << endl;
    for (size_t i = 0; i < personas.size(); ++i) {
        if (personas[i]->tieneCoche()) {
            personas[i]->mostrarDatos();
            cout << "------------------------------------" << endl;
        }
    }

    for (size_t i = 0; i < personas.size(); ++i) {
        delete personas[i];
    }

    return 0;
}
