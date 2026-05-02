#include <iostream>
#include "Promedio.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    Promedio numeros;       
    numeros.pedirNumeros();     
    numeros.mostrarResultados();  
	return 0;
}
