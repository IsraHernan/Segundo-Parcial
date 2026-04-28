/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package listaestatica;

/**
 *
 * @author Gloria
 */
abstract class ADTListaImp implements ADTLista {
    protected int tope;

    public ADTListaImp() {
        tope = 0;
    }

    @Override
    public boolean estaVacia() {
        return tope == 0;
    }

    @Override
    public boolean estaLlena() {
        return tope == MAX;
    }

    @Override
    public int obtenerTamano() {
        return tope;
    }

    @Override
    public void mostrarContenido() {
        if (estaVacia()) {
            System.out.println("⚠️ La lista está vacía.");
        } else {
            System.out.println("📋 Contenido de la lista:");
            for (int i = 0; i < tope; i++) {
                System.out.println("[" + i + "] → " + lista[i]);
            }
        }
    }
}
