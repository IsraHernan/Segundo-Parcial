#include <iostream>
#include "Cola.h"

using namespace std;

int main() {
    Cola cola;
    int opcion, valor;

    do {
        cout << "\n--- Menu Cola ---" << endl;
        cout << "1. Insertar (enqueue)" << endl;
        cout << "2. Eliminar (dequeue)" << endl;
        cout << "3. Ver frente" << endl;
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
                cola.insertar(valor);
                break;
            case 2:
                cola.eliminar();
                break;
            case 3:
                valor = cola.obtenerFrente();
                if (valor != -1)
                    cout << "Elemento en el frente: " << valor << endl;
                break;
            case 4:
                cola.mostrarContenido();
                break;
            case 5:
                cout << (cola.estaVacia() ? "Cola vacia." : "Cola no vacia.") << endl;
                break;
            case 6:
                cout << "Tamano actual: " << cola.obtenerTamano() << endl;
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
