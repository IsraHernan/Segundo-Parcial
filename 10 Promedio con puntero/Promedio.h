#ifndef PROMEDIO_H
#define PROMEDIO_H

class Promedio
{
	public:
		Promedio();
		~Promedio();
		void pedirNumeros();             
		int suma() const;               
		double media() const;            
		int maximo() const;              
		int minimo() const;              
		void mostrarResultados(); 
	private:
	    int numeros[5];
	    int max;
	    int min;
	    int total;
	protected:
};

#endif
