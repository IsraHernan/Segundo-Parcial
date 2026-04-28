/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package listadinamica;

/**
 *
 * @author Gloria
 */
public class ListaDinamica extends ADTListaImp {

    public ListaDinamica() {
        cabeza = null;
    }

    @Override
    public void insertar(int elemento) {
        Nodo nuevo = new Nodo(elemento);
        if (cabeza == null) {
            cabeza = nuevo;
        } else {
            Nodo aux = cabeza;
            while (aux.siguiente != null) {
                aux = aux.siguiente;
            }
            aux.siguiente = nuevo;
        }
        System.out.println("Elemento insertado: " + elemento);
    }

    @Override
    public void eliminar(int elemento) {
        if (cabeza == null) {
            System.out.println("⚠️ Lista vacía.");
            return;
        }

        if (cabeza.dato == elemento) {
            cabeza = cabeza.siguiente;
            System.out.println("Elemento eliminado: " + elemento);
            return;
        }

        Nodo actual = cabeza;
        while (actual.siguiente != null && actual.siguiente.dato != elemento) {
            actual = actual.siguiente;
        }

        if (actual.siguiente != null) {
            actual.siguiente = actual.siguiente.siguiente;
            System.out.println("Elemento eliminado: " + elemento);
        } else {
            System.out.println("⚠️ Elemento no encontrado.");
        }
    }

    @Override
    public int buscar(int elemento) {
        Nodo aux = cabeza;
        int pos = 0;
        while (aux != null) {
            if (aux.dato == elemento) return pos;
            aux = aux.siguiente;
            pos++;
        }
        return -1;
    }
    
    @Override
    public void ordenar() {
        if (estaVacia()) {
            System.out.println("⚠️ La lista está vacía. No se puede ordenar.");
            return;
        }
        cabeza = quicksort(cabeza);
        System.out.println("✅ Lista ordenada (Quicksort).");
        mostrarContenido();
    }

    private Nodo quicksort(Nodo inicio) {
        if (inicio == null || inicio.siguiente == null) return inicio;

        Nodo pivote = inicio;
        Nodo menorHead = null, menorTail = null;
        Nodo mayorHead = null, mayorTail = null;
        Nodo actual = inicio.siguiente;

        while (actual != null) {
            Nodo siguiente = actual.siguiente;
            actual.siguiente = null;
            if (actual.dato <= pivote.dato) {
                if (menorHead == null) menorHead = menorTail = actual;
                else {
                    menorTail.siguiente = actual;
                    menorTail = actual;
                }
            } else {
                if (mayorHead == null) mayorHead = mayorTail = actual;
                else {
                    mayorTail.siguiente = actual;
                    mayorTail = actual;
                }
            }
            actual = siguiente;
        }

        menorHead = quicksort(menorHead);
        mayorHead = quicksort(mayorHead);

        Nodo resultado = null;
        if (menorHead != null) {
            resultado = menorHead;
            Nodo aux = menorHead;
            while (aux.siguiente != null) aux = aux.siguiente;
            aux.siguiente = pivote;
        } else {
            resultado = pivote;
        }
        pivote.siguiente = mayorHead;
        return resultado;
    }
}
