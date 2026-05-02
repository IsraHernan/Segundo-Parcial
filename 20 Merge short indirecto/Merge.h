#ifndef MATRICES_H
#define MATRICES_H
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

class Merge{
	public:
		Merge();
		~Merge();
		void mergeEnteros(int izquierda, int medio, int derecha);
		void mergeSortEnterosRec(int izquierda, int derecha);
		void mergeChars(int izquierda, int medio, int derecha);
		void mergeSortCharsRec(int izquierda, int derecha);
		void mergePersonas(int izquierda, int medio, int derecha);
		void mergeSortPersonasRec(int izquierda, int derecha);

    	void ordenarEnteros();
    	void ordenarChars();
    	void ordenarPersonas();
    	void ejecutar();
	protected:
	
	private:
		int numeros[5];
	    char letras[5];
	    Persona personas[3];
	    int* pNumeros[5];
	    char* pLetras[5];
	    Persona* pPersonas[3];
        int i;
        int j;
};

#endif
