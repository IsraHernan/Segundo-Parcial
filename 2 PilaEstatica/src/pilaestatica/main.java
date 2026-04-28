/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package pilaestatica;

/**
 *
 * @author Gloria
 */
import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ADTGeneral pila = new PilaEstatica();
        int opcion;

        do {
            System.out.println("\n=== Menu Pila Estatica ===");
            System.out.println("1. Agregar elemento (push)");
            System.out.println("2. Quitar elemento (pop)");
            System.out.println("3. Ver cima (peek)");
            System.out.println("4. Mostrar contenido");
            System.out.println("5. Verificar si esta vacia");
            System.out.println("6. Verificar si esta llena");
            System.out.println("7. Mostrar tamanio");
            System.out.println("8. Salir");
            System.out.print("Elige una opcion: ");
            opcion = scanner.nextInt();

            switch (opcion) {
                case 1:
                    System.out.print("Ingrese un número: ");
                    int num = scanner.nextInt();
                    pila.push(num);
                    break;
                case 2:
                    pila.pop();
                    break;
                case 3:
                    int cima = pila.verCima();
                    if (cima != -1) {
                        System.out.println("🔍 Elemento en la cima: " + cima);
                    }
                    break;
                case 4:
                    pila.mostrarContenido();
                    break;
                case 5:
                    System.out.println(pila.estaVacia() ? "✅ La pila está vacía." : "❌ La pila NO está vacía.");
                    break;
                case 6:
                    System.out.println(pila.estaLlena() ? "✅ La pila está llena." : "❌ La pila NO está llena.");
                    break;
                case 7:
                    System.out.println("📏 Tamaño actual de la pila: " + pila.obtenerTamano());
                    break;
                case 8:
                    System.out.println("👋 Saliendo del programa...");
                    break;
                default:
                    System.out.println("❌ Opción inválida. Intenta de nuevo.");
            }
        } while (opcion != 8);

        scanner.close();
    }
}
