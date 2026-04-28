#include <iostream>
#include "Pila.h"

using namespace std;

Pila::Pila() {
    cima = NULL;
}

Pila::~Pila() {
    Nodo* actual = cima;
    while (actual != NULL) {
        Nodo* temp = actual;
        actual = actual->siguiente;
        delete temp;
    }
}

void Pila::insertar(int valor) {
    Nodo* nuevo = new Nodo(valor);
    nuevo->siguiente = cima;
    cima = nuevo;
    cout << "Elemento insertado: " << valor << endl;
}

void Pila::eliminar() {
    if (cima == NULL) {
        cout << "Pila vacia." << endl;
        return;
    }
    Nodo* temp = cima;
    cima = cima->siguiente;
    cout << "Elemento eliminado: " << temp->dato << endl;
    delete temp;
}

int Pila::obtenerCima() {
    if (cima == NULL) {
        cout << "Pila vacia." << endl;
        return -1;
    }
    return cima->dato;
}

void Pila::mostrarContenido() {
    if (cima == NULL) {
        cout << "La pila esta vacia." << endl;
    } else {
        cout << "Contenido de la pila (de arriba hacia abajo):" << endl;
        Nodo* aux = cima;
        int pos = 0;
        while (aux != NULL) {
            cout << "[" << pos << "] -> " << aux->dato << endl;
            aux = aux->siguiente;
            pos++;
        }
    }
}

bool Pila::estaVacia() {
    return cima == NULL;
}

int Pila::obtenerTamano() {
    int contador = 0;
    Nodo* aux = cima;
    while (aux != NULL) {
        contador++;
        aux = aux->siguiente;
    }
    return contador;
}
