/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package listaestatica;
import java.util.Scanner;

/**
 *
 * @author Gloria
 */
public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ADTLista lista = new ListaEstatica();
        int opcion, valor;

        do {
            System.out.println("\n=== Menú Lista Estática ===");
            System.out.println("1. Insertar");
            System.out.println("2. Eliminar");
            System.out.println("3. Buscar");
            System.out.println("4. Mostrar contenido");
            System.out.println("5. Verificar si está vacía");
            System.out.println("6. Verificar si está llena");
            System.out.println("7. Mostrar tamaño");
            System.out.println("8. Ordenar");
            System.out.println("9. Salir");
            System.out.print("Opción: ");
            opcion = sc.nextInt();

            switch (opcion) {
                case 1:
                    System.out.print("Elemento a insertar: ");
                    valor = sc.nextInt();
                    lista.insertar(valor);
                    break;
                case 2:
                    System.out.print("Elemento a eliminar: ");
                    valor = sc.nextInt();
                    lista.eliminar(valor);
                    break;
                case 3:
                    System.out.print("Elemento a buscar: ");
                    valor = sc.nextInt();
                    int pos = lista.buscar(valor);
                    System.out.println(pos != -1 ? "Encontrado en posición " + pos : "No encontrado.");
                    break;
                case 4:
                    lista.mostrarContenido();
                    break;
                case 5:
                    System.out.println(lista.estaVacia() ? "Lista vacía." : "Lista NO vacía.");
                    break;
                case 6:
                    System.out.println(lista.estaLlena() ? "Lista llena." : "Lista NO llena.");
                    break;
                case 7:
                    System.out.println("Tamaño actual: " + lista.obtenerTamano());
                    break;
                case 8:
                    lista.ordenar();
                    break;
                case 9:
                    System.out.println("Saliendo...");
                    break;
                default:
                    System.out.println("Opción inválida.");
            }
        } while (opcion != 8);
    }
}
