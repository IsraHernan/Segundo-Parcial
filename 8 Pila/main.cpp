#include <iostream>
#include "Pila.h"

using namespace std;

int main() {
    Pila pila;
    int opcion, valor;

    do {
        cout << "\n--- Menu Pila ---" << endl;
        cout << "1. Insertar" << endl;
        cout << "2. Eliminar" << endl;
        cout << "3. Ver cima" << endl;
        cout << "4. Mostrar contenido" << endl;
        cout << "5. Verificar si esta vacia" << endl;
        cout << "6. Mostrar tamano" << endl;
        cout << "7. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Elemento a insertar: ";
                cin >> valor;
                pila.insertar(valor);
                break;
            case 2:
                pila.eliminar();
                break;
            case 3:
                valor = pila.obtenerCima();
                if (valor != -1)
                    cout << "Elemento en la cima: " << valor << endl;
                break;
            case 4:
                pila.mostrarContenido();
                break;
            case 5:
                cout << (pila.estaVacia() ? "Pila vacia." : "Pila no vacia.") << endl;
                break;
            case 6:
                cout << "Tamano actual: " << pila.obtenerTamano() << endl;
                break;
            case 7:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
        }
    } while (opcion != 7);

    return 0;
}
