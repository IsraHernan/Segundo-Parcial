/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package colaestatica;

/**
 *
 * @author Gloria
 */
abstract class ADTColaImp implements ADTCola {
     protected int frente;
    protected int fin;

    public ADTColaImp() {
        frente = 0;
        fin = -1;
    }

    @Override
    public boolean estaVacia() {
        return frente > fin;
    }

    @Override
    public boolean estaLlena() {
        return fin == MAX - 1;
    }

    @Override
    public int obtenerTamano() {
        return estaVacia() ? 0 : fin - frente + 1;
    }

    @Override
    public void mostrarContenido() {
        if (estaVacia()) {
            System.out.println("⚠️ La cola está vacía.");
        } else {
            System.out.println("📋 Contenido de la cola:");
            for (int i = frente; i <= fin; i++) {
                System.out.println("[" + i + "] → " + cola[i]);
            }
        }
    }
}
