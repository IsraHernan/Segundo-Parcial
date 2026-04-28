#include <iostream>
#include "Lista.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    Lista lista;
    int opcion, valor;

    do {
        cout << "\n--- Menu Lista  ---" << endl;
        cout << "1. Insertar" << endl;
        cout << "2. Eliminar" << endl;
        cout << "3. Buscar" << endl;
        cout << "4. Mostrar contenido" << endl;
        cout << "5. Verificar si esta vacia" << endl;
        cout << "6. Mostrar tamano" << endl;
        cout << "7. Ordenar lista" << endl;
        cout << "8. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Elemento a insertar: ";
                cin >> valor;
                lista.insertar(valor);
                break;
            case 2:
                cout << "Elemento a eliminar: ";
                cin >> valor;
                lista.eliminar(valor);
                break;
            case 3:
                cout << "Elemento a buscar: ";
                cin >> valor;
                {
                    int pos = lista.buscar(valor);
                    if (pos != -1)
                        cout << "Encontrado en posicion " << pos << endl;
                    else
                        cout << "No encontrado." << endl;
                }
                break;
            case 4:
                lista.mostrarContenido();
                break;
            case 5:
                cout << (lista.estaVacia() ? "Lista vacia." : "Lista no vacia.") << endl;
                break;
            case 6:
                cout << "Tamano actual: " << lista.obtenerTamano() << endl;
                break;
            case 7:
                lista.ordenar();
                break;
            case 8:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
        }
    } while (opcion != 8);

    return 0;
}

