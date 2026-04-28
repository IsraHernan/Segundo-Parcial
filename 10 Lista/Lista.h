#ifndef LISTA_H
#define LISTA_H

class Nodo {
public:
    int dato;
    Nodo* siguiente;

    Nodo(int valor) {
        dato = valor;
        siguiente = NULL;
    }
};

class Lista {
private:
    Nodo* cabeza;

public:
    Lista();
    ~Lista();

    void insertar(int valor);
    void eliminar(int valor);
    int buscar(int valor);
    void mostrarContenido();
    bool estaVacia();
    int obtenerTamano();
    void ordenar(); // Metodo adicional
};

#endif


