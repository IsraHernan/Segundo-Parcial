#include <iostream>
#include "Burbuja.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    Burbuja b;
    b.ingresarDatos();

    cout << "\nDatos originales: ";
    b.mostrar();

    b.ordenar();

    cout << "Datos ordenados (Burbuja): ";
    b.mostrar();
	return 0;
}
