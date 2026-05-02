#include <iostream>
#include "Merge.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    Merge m;
    m.ingresarDatos();

    cout << "\nDatos originales: ";
    m.mostrar();

    m.ordenar();

    cout << "Datos ordenados (Merge): ";
    m.mostrar();
	return 0;
}
