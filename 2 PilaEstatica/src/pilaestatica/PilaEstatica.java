/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pilaestatica;

/**
 *
 * @author Gloria
 */
public class PilaEstatica extends ADTGeneralImp {

    public PilaEstatica() {
        tope = -1;
    }

    @Override
    public void push(int elemento) {
        if (!estaLlena()) {
            pila[++tope] = elemento;
            System.out.println("✅ Elemento " + elemento + " agregado a la pila.");
        } else {
            System.out.println("⚠️ La pila está llena. No se pueden agregar más elementos.");
        }
    }

    @Override
    public int pop() {
        if (!estaVacia()) {
            int valor = pila[tope--];
            System.out.println("🗑️ Elemento " + valor + " eliminado de la pila.");
            return valor;
        } else {
            System.out.println("⚠️ La pila está vacía. No hay elementos para eliminar.");
            return -1;
        }
    }
}

