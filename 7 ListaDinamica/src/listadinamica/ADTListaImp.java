/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package listadinamica;

/**
 *
 * @author Gloria
 */
abstract class ADTListaImp implements ADTLista {
    protected Nodo cabeza;

    public ADTListaImp() {
        cabeza = null;
    }

    @Override
    public boolean estaVacia() {
        return cabeza == null;
    }

    @Override
    public boolean estaLlena() {
        return false; // Una lista dinámica no se llena (salvo por memoria)
    }

    @Override
    public int obtenerTamano() {
        int contador = 0;
        Nodo aux = cabeza;
        while (aux != null) {
            contador++;
            aux = aux.siguiente;
        }
        return contador;
    }

    @Override
    public void mostrarContenido() {
        if (estaVacia()) {
            System.out.println("⚠️ La lista está vacía.");
        } else {
            System.out.println("📋 Contenido de la lista dinámica:");
            Nodo aux = cabeza;
            int pos = 0;
            while (aux != null) {
                System.out.println("[" + pos + "] → " + aux.dato);
                aux = aux.siguiente;
                pos++;
            }
        }
    }
}
