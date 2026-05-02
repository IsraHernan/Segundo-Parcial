#include "CalculadoraNueva.h"
#include <cmath>
#include <iostream>
using namespace std;

CalculadoraNueva::CalculadoraNueva(double a, double b) : Calculadora(a, b){

}

CalculadoraNueva::~CalculadoraNueva(){
}

double CalculadoraNueva::potencia(){
	return pow(num1, num2);
}

double CalculadoraNueva::raizCuadrada(){
	return sqrt(num1);
}

double CalculadoraNueva::seno(){
	return sin(num1);
}

double CalculadoraNueva::coseno(){
	return cos(num1);
}

double CalculadoraNueva::factorialRecursivo(double n) {
    if (n <= 1){
    	return 1;
	}
    return n * factorialRecursivo(n - 1);
}

double CalculadoraNueva::fibonacciRecursivo(double n) {
    if (n <= 1){
    	return n;
	} 
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}

double CalculadoraNueva::factorial() {
    return factorialRecursivo(num1);
}

double CalculadoraNueva::fibonacci() {
    return fibonacciRecursivo(num1);
}

int sierpinski(int n) {
    if (num1 == 0) return 1; // Nivel 0 tiene 1 triángulo
    return 3 * sierpinski(num1 - 1);
}

int cantor(int n) {
    if (num1 == 0) return 1; // Nivel 0 tiene 1 segmento
    return 2 * cantor(num1 - 1);
}



