/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package coladinamica;

/**
 *
 * @author Gloria
 */
abstract class ADTColaImp implements ADTCola {
    protected Nodo frente;
    protected Nodo fin;

    public ADTColaImp() {
        frente = null;
        fin = null;
    }

    @Override
    public boolean estaVacia() {
        return frente == null;
    }

    @Override
    public boolean estaLlena() {
        return false; // No hay límite fijo
    }

    @Override
    public int obtenerTamano() {
        int contador = 0;
        Nodo aux = frente;
        while (aux != null) {
            contador++;
            aux = aux.siguiente;
        }
        return contador;
    }

    @Override
    public void mostrarContenido() {
        if (estaVacia()) {
            System.out.println("⚠️ La cola está vacía.");
        } else {
            System.out.println("📋 Contenido de la cola dinámica:");
            Nodo aux = frente;
            int pos = 0;
            while (aux != null) {
                System.out.println("[" + pos + "] → " + aux.dato);
                aux = aux.siguiente;
                pos++;
            }
        }
    }
}
