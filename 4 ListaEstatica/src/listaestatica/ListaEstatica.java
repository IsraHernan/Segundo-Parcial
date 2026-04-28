/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package listaestatica;

/**
 *
 * @author Gloria
 */
public class ListaEstatica extends ADTListaImp {

    public ListaEstatica() {
        tope = 0;
    }

    @Override
    public void insertar(int elemento) {
        if (!estaLlena()) {
            lista[tope++] = elemento;
            System.out.println("Elemento insertado: " + elemento);
        } else {
            System.out.println("⚠️ Lista llena. No se puede insertar.");
        }
    }

    @Override
    public void eliminar(int elemento) {
        int pos = buscar(elemento);
        if (pos != -1) {
            for (int i = pos; i < tope - 1; i++) {
                lista[i] = lista[i + 1];
            }
            tope--;
            System.out.println("Elemento eliminado: " + elemento);
        } else {
            System.out.println("⚠️ Elemento no encontrado.");
        }
    }

    @Override
    public int buscar(int elemento) {
        for (int i = 0; i < tope; i++) {
            if (lista[i] == elemento) return i;
        }
        return -1;
    }
    
    @Override
    public void ordenar() {
        if (estaVacia()) {
            System.out.println("⚠️ La lista está vacía. No se puede ordenar.");
            return;
        }
        quicksort(0, tope - 1);
        System.out.println("✅ Lista ordenada (Quicksort).");
        mostrarContenido();
    }

    private void quicksort(int inicio, int fin) {
        if (inicio < fin) {
            int pivote = particion(inicio, fin);
            quicksort(inicio, pivote - 1);
            quicksort(pivote + 1, fin);
        }
    }

    private int particion(int inicio, int fin) {
        int pivote = lista[fin];
        int i = inicio - 1;
        for (int j = inicio; j < fin; j++) {
            if (lista[j] <= pivote) {
                i++;
                int temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
        int temp = lista[i + 1];
        lista[i + 1] = lista[fin];
        lista[fin] = temp;
        return i + 1;
    }
  
}
