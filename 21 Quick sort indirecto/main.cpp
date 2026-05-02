#include <iostream>
#include "QuickSort.h"
#include "locale.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "spanish");
    int n;
    cout << "Ingrese el tamanio del arreglo: ";
    cin >> n;

    QuickSort qs(n);
    qs.ingresarDatos();
    cout << "\nOriginal (sin ordenar): ";
    qs.mostrarOrdenado();
    qs.ordenarIndirecto();
    cout << "Ordenado (indirecto): ";
    qs.mostrarOrdenado();
	return 0;
}
