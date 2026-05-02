#include <iostream>
#include "Matrices.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Matrices m;
	m.captura();
	m.multiplicarMatriz();
	m.imprimirM();
	m.multiplicarConstante();
	m.imprimirC();
	return 0;
}
