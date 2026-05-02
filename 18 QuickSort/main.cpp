#include <iostream>
#include "QuickSort.h"
#include "locale.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "spanish");
    QuickSort q;
    q.ingresarDatos();

    cout << "\nDatos originales: ";
    q.mostrar();

    q.ordenar();

    cout << "Datos ordenados (QuickSort): ";
    q.mostrar();
	return 0;
}
