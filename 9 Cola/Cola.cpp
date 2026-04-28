#include <iostream>
#include "Cola.h"

using namespace std;

Cola::Cola() {
    frente = NULL;
    fondo = NULL;
}

Cola::~Cola() {
    Nodo* actual = frente;
    while (actual != NULL) {
        Nodo* temp = actual;
        actual = actual->siguiente;
        delete temp;
    }
}

void Cola::insertar(int valor) {
    Nodo* nuevo = new Nodo(valor);
    if (fondo == NULL) {
        frente = nuevo;
        fondo = nuevo;
    } else {
        fondo->siguiente = nuevo;
        fondo = nuevo;
    }
    cout << "Elemento insertado en la cola: " << valor << endl;
}

void Cola::eliminar() {
    if (frente == NULL) {
        cout << "Cola vacia." << endl;
        return;
    }
    Nodo* temp = frente;
    frente = frente->siguiente;
    if (frente == NULL) {
        fondo = NULL;
    }
    cout << "Elemento eliminado: " << temp->dato << endl;
    delete temp;
}

int Cola::obtenerFrente() {
    if (frente == NULL) {
        cout << "Cola vacia." << endl;
        return -1;
    }
    return frente->dato;
}

void Cola::mostrarContenido() {
    if (frente == NULL) {
        cout << "La cola esta vacia." << endl;
    } else {
        cout << "Contenido de la cola (de frente a fondo):" << endl;
        Nodo* aux = frente;
        int pos = 0;
        while (aux != NULL) {
            cout << "[" << pos << "] -> " << aux->dato << endl;
            aux = aux->siguiente;
            pos++;
        }
    }
}

bool Cola::estaVacia() {
    return frente == NULL;
}

int Cola::obtenerTamano() {
    int contador = 0;
    Nodo* aux = frente;
    while (aux != NULL) {
        contador++;
        aux = aux->siguiente;
    }
    return contador;
}
