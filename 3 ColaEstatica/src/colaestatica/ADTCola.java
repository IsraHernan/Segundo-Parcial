/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Interface.java to edit this template
 */
package colaestatica;

/**
 *
 * @author Gloria
 */
public interface ADTCola {
    public final int MAX = 5;
    public int[] cola = new int[MAX];

    public void encolar(int elemento);
    public int desencolar();
    public boolean estaVacia();
    public boolean estaLlena();
    public void mostrarContenido();
    public int obtenerTamano();
}
