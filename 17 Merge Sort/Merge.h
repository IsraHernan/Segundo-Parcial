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
	    void ordenarInt(int low, int high);
	    void mergeInt(int low, int mid, int high);
	    void ordenarChar(int low, int high);
	    void mergeChar(int low, int mid, int high);
	    void ordenarPersona(int low, int high);
	    void mergePersona(int low, int mid, int high);
	    void ingresarDatos();
    	void ordenar();
    	void mostrar();
	protected:
	
	private:
		int arrInt[100];
		char arrChar[100];
		Persona arrPersona[100];
		int size;
		int tipo; // 1=int, 2=char, 3=Persona
};

#endif
