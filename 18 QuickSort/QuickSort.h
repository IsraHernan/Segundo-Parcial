#ifndef MATRICES_H
#define QUICKSORT_H
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

class QuickSort{
	public:
		QuickSort();
		~QuickSort();
    	void ingresarDatos();
    	void ordenar();
    	void mostrar();
		int particionInt(int low, int high);
		void ordenarInt(int low, int high);
		int particionChar(int low, int high);
		void ordenarChar(int low, int high);
		int particionPersona(int low, int high);
		void ordenarPersona(int low, int high);

	protected:
	
	private:
		int arrInt[100];
		char arrChar[100];
		Persona arrPersona[100];
		int size;
		int tipo;
};

#endif
