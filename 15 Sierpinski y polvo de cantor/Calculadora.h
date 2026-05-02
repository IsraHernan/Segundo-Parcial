#ifndef CALCULADORA_H
#define CALCULADORA_H

class Calculadora{
	public:
		Calculadora();
		Calculadora(double a, double b);
		~Calculadora();
		void introducir();
		double sumar();
		double restar();
		double multiplicar();
		double dividir();
		int operacion;
	private:
		
	protected:
		double num1;
		double num2;
		double resultado;
};

#endif
