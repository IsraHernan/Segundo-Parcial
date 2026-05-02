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
		Burbuja(int n);
		~Burbuja();
	    void ingresarDatos();       // elige tipo y llena datos
	    void ordenarIndirecto();    // ordena punteros
	    void mostrarOrdenado();     // muestra según orden indirecto
	    void ordenarInt();
    	void ordenarChar();
    	void ordenarPersona();
	protected:
	
	private:
		int* arrInt;
		char* arrChar;
		Persona* arrPersona;
		int** ptrInt;
		char** ptrChar;
		Persona** ptrPersona;
		int size;
		int tipo; // 1=int, 2=char, 3=Persona
};

#endif
