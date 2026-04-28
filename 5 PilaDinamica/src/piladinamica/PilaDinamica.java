/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package piladinamica;

/**
 *
 * @author Gloria
 */
public class PilaDinamica implements ADTGeneral {
    private Nodo cima;

    public PilaDinamica() {
        cima = null;
    }

    @Override
    public void push(int elemento) {
        Nodo nuevo = new Nodo(elemento);
        nuevo.siguiente = cima;
        cima = nuevo;
        System.out.println("✅ Elemento " + elemento + " agregado a la pila.");
    }

    @Override
    public int pop() {
        if (!estaVacia()) {
            int valor = cima.dato;
            cima = cima.siguiente;
            System.out.println("🗑️ Elemento " + valor + " eliminado de la pila.");
            return valor;
        } else {
            System.out.println("⚠️ La pila está vacía. No hay elementos para eliminar.");
            return -1;
        }
    }

    @Override
    public boolean estaVacia() {
        return cima == null;
    }

    @Override
    public void mostrarContenido() {
        if (estaVacia()) {
            System.out.println("⚠️ La pila está vacía.");
        } else {
            System.out.println("📌 Estado actual de la pila:");
            Nodo aux = cima;
            int pos = 0;
            while (aux != null) {
                System.out.println("Posición " + pos + " → " + aux.dato);
                aux = aux.siguiente;
                pos++;
            }
        }
    }

    @Override
    public int obtenerTamano() {
        int contador = 0;
        Nodo aux = cima;
        while (aux != null) {
            contador++;
            aux = aux.siguiente;
        }
        return contador;
    }

    @Override
    public int verCima() {
        if (estaVacia()) {
            System.out.println("⚠️ La pila está vacía.");
            return -1;
        } else {
            return cima.dato;
        }
    }    
}
