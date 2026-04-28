#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include "Auto.h"
using namespace std;

class Persona {
public:
    Persona(string* nombre, string* apPat, string* apMat, char* genero, int* edad, Auto* coche);
    ~Persona();
    void setNombre(string* nombre);
    string* getNombre() const;
    void setApellidoPaterno(string* ap);
    string* getApellidoPaterno() const;
    void setApellidoMaterno(string* am);
    string* getApellidoMaterno() const;
    void setGenero(char* g);
    char* getGenero() const;
    void setEdad(int* e);
    int* getEdad() const;
    void setCoche(Auto* coche);
    Auto* getCoche() const;
    bool tieneCoche() const;
    void mostrarDatos() const;

private:
    string* nombre;
    string* apellidoPaterno;
    string* apellidoMaterno;
    char* genero;
    int* edad;
    Auto* coche;
};

#endif
