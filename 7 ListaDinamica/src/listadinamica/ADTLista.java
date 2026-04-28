/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Interface.java to edit this template
 */
package listadinamica;

/**
 *
 * @author Gloria
 */
public interface ADTLista {
    public final int MAX = 5;
    public int[] lista = new int[MAX];

    public void insertar(int elemento);
    public void eliminar(int elemento);
    public int buscar(int elemento);
    public void mostrarContenido();
    public boolean estaVacia();
    public boolean estaLlena();
    public int obtenerTamano();
    public void ordenar();
}
