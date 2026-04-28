#ifndef PILA_H
#define PILA_H

class Nodo {
public:
    int dato;
    Nodo* siguiente;

    Nodo(int valor) {
        dato = valor;
        siguiente = NULL;
    }
};

class Pila {
private:
    Nodo* cima;

public:
    Pila();
    ~Pila();

    void insertar(int valor);     // push
    void eliminar();              // pop
    int obtenerCima();            // top
    void mostrarContenido();
    bool estaVacia();
    int obtenerTamano();
};

#endif
