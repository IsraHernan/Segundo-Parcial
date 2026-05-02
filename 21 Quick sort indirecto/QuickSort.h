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
		QuickSort(int n);
		~QuickSort();
    	void ingresarDatos();
		void ordenarIndirecto();
    	void mostrarOrdenado();
		int particionInt(int low, int high);
		void ordenarInt(int low, int high);
		
		int particionChar(int low, int high);
		void ordenarChar(int low, int high);
		
		int particionPersona(int low, int high);
		void ordenarPersona(int low, int high);

	protected:
	
	private:
		int* arrInt;
		char* arrChar;
		Persona* arrPersona;
		int** ptrInt;
		char** ptrChar;
		Persona** ptrPersona;
		int size;
		int tipo; 
};

#endif
