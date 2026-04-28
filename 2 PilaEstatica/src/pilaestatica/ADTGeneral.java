
package pilaestatica;

public interface ADTGeneral {
    public final int MAX = 5;
    public int[] pila = new int[MAX];

    public void push(int elemento);
    public int pop();
    public boolean estaVacia();
    public boolean estaLlena();
    public void mostrarContenido();
    public int obtenerTamano();
    public int verCima();
}
