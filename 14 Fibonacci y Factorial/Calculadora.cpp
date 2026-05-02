#include "Calculadora.h"
#include <iostream>
#include <cmath>
using namespace std;

Calculadora::Calculadora(){
}

Calculadora::~Calculadora(){
	
}

Calculadora::Calculadora(double a, double b){
	num1=a;
	num2=b;
}

void Calculadora::introducir(){
	if(operacion <= 5 || operacion == 8 ){
		cout << "Introduce dos numeros:" << endl;
    	cout << "Numero 1: ";
    	cin >> num1;
   		cout << "Numero 2: ";
   		cin >> num2;	
	}else{
		cout << "Numero 1: ";
    	cin >> num1;
	}

}

double Calculadora::sumar() {
    return num1 + num2;
}

double Calculadora::restar() {
    return num1 - num2;
}

double Calculadora::multiplicar() {
	resultado=0;
    for ( int i = 0; i < num2; i++) {
        resultado += num1;
    }
    return resultado;
}

double Calculadora::dividir() {
    if (num2 == 0) {
        cout << "Error: División por cero no permitida." << endl;
        return -1; 
    }

    if (num1 < 0 || num2 < 0) {
        cout << "Error: No se permiten números negativos." << endl;
        return 1;
    }

    resultado = 0;
    while (num1 >= num2) {
        num1 -= num2;
        resultado++;
    }
    
	cout << "El resultado de la division es: "<< resultado << endl;
	cout << "Residuo: " << num1 << endl;
    return 0;
}
