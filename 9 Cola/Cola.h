#ifndef COLA_H
#define COLA_H

class Nodo {
public:
    int dato;
    Nodo* siguiente;

    Nodo(int valor) {
        dato = valor;
        siguiente = NULL;
    }
};

class Cola {
private:
    Nodo* frente;
    Nodo* fondo;

public:
    Cola();
    ~Cola();

    void insertar(int valor);     // enqueue
    void eliminar();              // dequeue
    int obtenerFrente();          // front
    void mostrarContenido();
    bool estaVacia();
    int obtenerTamano();
};

#endif
