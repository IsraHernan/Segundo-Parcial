#ifndef AUTO_H
#define AUTO_H
#include <string>
using namespace std;

class Auto{
	private:
	    string modelo;
	    float precio;
	    int anio;

	public:
		Auto(string modelo, float precio, int anio);
		~Auto();
		void setModelo(string modelo);
		string getModelo() const;
		void setPrecio(float precio);
		float getPrecio() const;
		void setAnio(int anio);
		int getAnio() const;
		void mostrarDatos() const;
};

#endif
