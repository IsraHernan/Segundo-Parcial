/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package colaestatica;

/**
 *
 * @author Gloria
 */
public class ColaEstatica extends ADTColaImp {

    public ColaEstatica() {
        super();
    }

    @Override
    public void encolar(int elemento) {
        if (!estaLlena()) {
            cola[++fin] = elemento;
            System.out.println("Elemento encolado: " + elemento);
        } else {
            System.out.println("⚠️ Cola llena. No se puede encolar.");
        }
    }

    @Override
    public int desencolar() {
        if (!estaVacia()) {
            int valor = cola[frente++];
            System.out.println("Elemento desencolado: " + valor);
            return valor;
        } else {
            System.out.println("⚠️ Cola vacía. No se puede desencolar.");
            return -1;
        }
    }
}
