/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pilaestatica;

/**
 *
 * @author Gloria
 */
public abstract class ADTGeneralImp implements ADTGeneral {
    public int tope;

    public ADTGeneralImp() {
        tope = -1;
    }

    @Override
    public boolean estaVacia() {
        return tope == -1;
    }

    @Override
    public boolean estaLlena() {
        return tope == MAX - 1;
    }

    @Override
    public void mostrarContenido() {
        if (estaVacia()) {
            System.out.println("⚠️ La pila está vacía.");
        } else {
            System.out.println("📌 Estado actual de la pila:");
            for (int i = tope; i >= 0; i--) {
                System.out.println("Posición " + i + " → " + pila[i]);
            }
        }
    }

    @Override
    public int obtenerTamano() {
        return tope + 1;
    }

    @Override
    public int verCima() {
        if (estaVacia()) {
            System.out.println("⚠️ La pila está vacía.");
            return -1;
        } else {
            return pila[tope];
        }
    }
}

