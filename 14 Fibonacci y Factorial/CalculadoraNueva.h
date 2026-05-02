#ifndef CALCULADORANUEVA_H
#define CALCULADORANUEVA_H
#include "Calculadora.h"

class CalculadoraNueva: public Calculadora{
	public:
		CalculadoraNueva(double a, double b);
		~CalculadoraNueva();
		double potencia();
		double raizCuadrada();
		double seno();
		double coseno();
		double fibonacci();
		double factorial();
		double factorialRecursivo(double n);
    	double fibonacciRecursivo(double n);

	protected:
};

#endif
