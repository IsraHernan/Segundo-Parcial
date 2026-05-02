#include <iostream>
#include "Auto.h"
#include "Persona.h"
#include <vector>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    setlocale(LC_ALL, "");
    int numPersonas;

    cout << "¿Cuántas personas deseas registrar? ";
    cin >> numPersonas;
    cin.ignore();

    vector<Persona> personas;

    for (int i = 0; i < numPersonas; ++i) {
        string nombre, apPat, apMat;
        char genero;
        int edad;
        char tieneAuto;

        cout << "\n--- Persona #" << (i + 1) << " ---" << endl;
        cout << "Nombre: ";
        getline(cin, nombre);
        cout << "Apellido paterno: ";
        getline(cin, apPat);
        cout << "Apellido materno: ";
        getline(cin, apMat);
        cout << "Género (M/F): ";
        cin >> genero;
        cout << "Edad: ";
        cin >> edad;
        cout << "¿Tiene coche? (s/n): ";
        cin >> tieneAuto;
        cin.ignore();

        Auto* coche = NULL;
        if (tieneAuto == 's' || tieneAuto == 'S') {
            string modelo;
            float precio;
            int anio;

            cout << "Modelo del coche: ";
            getline(cin, modelo);
            cout << "Precio: ";
            cin >> precio;
            cout << "Año: ";
            cin >> anio;
            cin.ignore();

            coche = new Auto(modelo, precio, anio);
        }

        Persona nueva(nombre, apPat, apMat, genero, edad, coche);
        personas.push_back(nueva);
    }

    cout << "\n=== LISTA DE PERSONAS CON COCHE ===" << endl;
    for (int i = 0; i < personas.size(); ++i) {
        if (personas[i].tieneCoche()) {
            personas[i].mostrarDatos();
            cout << "------------------------------------" << endl;
        }
    }

	return 0;
}
