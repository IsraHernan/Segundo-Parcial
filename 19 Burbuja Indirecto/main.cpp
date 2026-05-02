#include <iostream>
#include "Burbuja.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    int n;
    cout << "Ingrese el tamanio del arreglo: ";
    cin >> n;

    Burbuja b(n);
    b.ingresarDatos();
    cout << "\nOriginal (sin ordenar): ";
    b.mostrarOrdenado();
    b.ordenarIndirecto();
    cout << "Ordenado (indirecto): ";
    b.mostrarOrdenado();
	return 0;
}
