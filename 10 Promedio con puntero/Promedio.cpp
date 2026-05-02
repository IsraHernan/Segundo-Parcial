#include "Promedio.h"
#include "Promedio.h"
#include <iostream>
using namespace std;

Promedio::Promedio(){
    //total = 0;
    //max = numeros[0];
    //min = numeros[0];
}

Promedio::~Promedio(){
	
}

void Promedio::pedirNumeros() {
    cout << "Ingresa 5 numeros con espacio: ";
    for (int i = 0; i < 5; i++){
    	cin >> numeros[i];
	}
}


int Promedio::suma() const{
    int total = 0;
    for (int i = 0; i < 5; i++){
    	total += numeros[i];
	}
    return total;
}

double Promedio::media() const{
    return  (double)suma()/ 5;
}

int Promedio::maximo() const{
	int max = numeros[0];
    for (int i = 1; i < 5; i++){
    	if (numeros[i] > max){
    		max = numeros[i];
		}
	}
    return max;
}

int Promedio::minimo() const{
	int min = numeros[0];
	for (int i = 1; i < 5; i++){
    	if (numeros[i] < min){
    		min = numeros[i];
		} 
	}
    return min;
}

void Promedio::mostrarResultados(){
    cout << "Suma: " << suma() << endl;
    cout << "Media: " << media() << endl;
    cout << "Maximo: " << maximo() << endl;
    cout << "Minimo: " << minimo() << endl;
}

