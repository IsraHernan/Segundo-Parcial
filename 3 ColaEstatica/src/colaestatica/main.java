/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package colaestatica;
import java.util.Scanner;
/**
 *
 * @author Gloria
 */
public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ADTCola cola = new ColaEstatica();
        int opcion, valor;

        do {
            System.out.println("\n=== Menú Cola Estática ===");
            System.out.println("1. Encolar");
            System.out.println("2. Desencolar");
            System.out.println("3. Mostrar contenido");
            System.out.println("4. Verificar si está vacía");
            System.out.println("5. Verificar si está llena");
            System.out.println("6. Mostrar tamaño");
            System.out.println("7. Salir");
            System.out.print("Opción: ");
            opcion = sc.nextInt();

            switch (opcion) {
                case 1:
                    System.out.print("Elemento a encolar: ");
                    valor = sc.nextInt();
                    cola.encolar(valor);
                    break;
                case 2:
                    cola.desencolar();
                    break;
                case 3:
                    cola.mostrarContenido();
                    break;
                case 4:
                    System.out.println(cola.estaVacia() ? "Cola vacía." : "Cola NO vacía.");
                    break;
                case 5:
                    System.out.println(cola.estaLlena() ? "Cola llena." : "Cola NO llena.");
                    break;
                case 6:
                    System.out.println("Tamaño actual: " + cola.obtenerTamano());
                    break;
                case 7:
                    System.out.println("Saliendo...");
                    break;
                default:
                    System.out.println("Opción inválida.");
            }
        } while (opcion != 7);
    }
}
