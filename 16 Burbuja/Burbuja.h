#ifndef MATRICES_H
#define MATRICES_H
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

class Burbuja{
	public:
		Burbuja();
		~Burbuja();
    	void ingresarDatos();
    	void ordenar();
    	void mostrar();
    	void ordenarInt();
    	void ordenarChar();
    	void ordenarPersona();
	protected:
	
	private:
	    int arrInt[100];
	    char arrChar[100];
	    Persona arrPersona[100];
	    int size;
	    int tipo; // 1=int, 2=char, 3=Persona
};

#endif
