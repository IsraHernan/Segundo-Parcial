/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Interface.java to edit this template
 */
package piladinamica;

/**
 *
 * @author Gloria
 */
public interface ADTGeneral {
    public void push(int elemento);
    public int pop();
    public boolean estaVacia();
    public void mostrarContenido();
    public int obtenerTamano();
    public int verCima(); 
}
