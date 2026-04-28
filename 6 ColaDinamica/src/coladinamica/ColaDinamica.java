/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package coladinamica;

/**
 *
 * @author Gloria
 */
class ColaDinamica extends ADTColaImp {

    public ColaDinamica() {
        super();
    }

    @Override
    public void encolar(int elemento) {
        Nodo nuevo = new Nodo(elemento);
        if (estaVacia()) {
            frente = fin = nuevo;
        } else {
            fin.siguiente = nuevo;
            fin = nuevo;
        }
        System.out.println("Elemento encolado: " + elemento);
    }

    @Override
    public int desencolar() {
        if (!estaVacia()) {
            int valor = frente.dato;
            frente = frente.siguiente;
            if (frente == null) fin = null;
            System.out.println("Elemento desencolado: " + valor);
            return valor;
        } else {
            System.out.println("⚠️ Cola vacía. No se puede desencolar.");
            return -1;
        }
    }
}
