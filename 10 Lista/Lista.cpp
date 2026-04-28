#include <iostream>
#include "Lista.h"

using namespace std;

Lista::Lista() {
    cabeza = NULL;
}

Lista::~Lista() {
    Nodo* actual = cabeza;
    while (actual != NULL) {
        Nodo* temp = actual;
        actual = actual->siguiente;
        delete temp;
    }
}

void Lista::insertar(int valor) {
    Nodo* nuevo = new Nodo(valor);
    if (cabeza == NULL) {
        cabeza = nuevo;
    } else {
        Nodo* aux = cabeza;
        while (aux->siguiente != NULL) {
            aux = aux->siguiente;
        }
        aux->siguiente = nuevo;
    }
    cout << "Elemento insertado: " << valor << endl;
}

void Lista::eliminar(int valor) {
    if (cabeza == NULL) {
        cout << "Lista vacia." << endl;
        return;
    }

    if (cabeza->dato == valor) {
        Nodo* temp = cabeza;
        cabeza = cabeza->siguiente;
        delete temp;
        cout << "Elemento eliminado: " << valor << endl;
        return;
    }

    Nodo* actual = cabeza;
    while (actual->siguiente != NULL && actual->siguiente->dato != valor) {
        actual = actual->siguiente;
    }

    if (actual->siguiente != NULL) {
        Nodo* temp = actual->siguiente;
        actual->siguiente = temp->siguiente;
        delete temp;
        cout << "Elemento eliminado: " << valor << endl;
    } else {
        cout << "Elemento no encontrado." << endl;
    }
}

int Lista::buscar(int valor) {
    Nodo* aux = cabeza;
    int pos = 0;
    while (aux != NULL) {
        if (aux->dato == valor) return pos;
        aux = aux->siguiente;
        pos++;
    }
    return -1;
}

void Lista::mostrarContenido() {
    if (estaVacia()) {
        cout << "La lista esta vacia." << endl;
    } else {
        cout << "Contenido de la lista:" << endl;
        Nodo* aux = cabeza;
        int pos = 0;
        while (aux != NULL) {
            cout << "[" << pos << "] -> " << aux->dato << endl;
            aux = aux->siguiente;
            pos++;
        }
    }
}

bool Lista::estaVacia() {
    return cabeza == NULL;
}

int Lista::obtenerTamano() {
    int contador = 0;
    Nodo* aux = cabeza;
    while (aux != NULL) {
        contador++;
        aux = aux->siguiente;
    }
    return contador;
}

void Lista::ordenar() {
    if (cabeza == NULL || cabeza->siguiente == NULL) return;

    bool cambio;
    Nodo* actual;
    Nodo* siguiente;

    do {
        cambio = false;
        actual = cabeza;
        siguiente = cabeza->siguiente;

        while (siguiente != NULL) {
            if (actual->dato > siguiente->dato) {
                int temp = actual->dato;
                actual->dato = siguiente->dato;
                siguiente->dato = temp;
                cambio = true;
            }
            actual = siguiente;
            siguiente = siguiente->siguiente;
        }
    } while (cambio);

    cout << "Lista ordenada." << endl;
}
