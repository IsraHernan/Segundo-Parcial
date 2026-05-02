#include <iostream>
#include "CalculadoraNueva.h"
#include <iomanip>
#include <string> 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) { 
    double num1,num2; 
    Calculadora op;
    
    cout <<setfill('-') << setw(40) << "-"  << endl;
    cout <<"\t\tMenu   " << endl;
    cout <<setfill('-') << setw(40) << "-"  << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "5. Raiz Cuadrada" << endl;
    cout << "6. Seno" << endl;
    cout << "7. Coseno" << endl;
    cout << "8. Potencia" << endl;
    cout << "9. Fibonacci" << endl;
    cout << "10. Factorial" << endl;
    cout << "11. Triángulo de Sierpinski" << endl;
    cout << "12. Polvo de Cantor" << endl;
    cout << "Opcion: ";
    cin>>op.operacion;
    
	CalculadoraNueva calc(num1, num2);
    switch (op.operacion) {
        case 1:
   			calc.introducir();
            calc.sumar();
            cout << "El resultado de la suma es: " << calc.sumar()<< endl;
            break;
        case 2:
   			calc.introducir();
            calc.restar();
            cout << "El resultado de la resta es: " << calc.restar() << endl;
            break;
        case 3:
   			calc.introducir();
            calc.multiplicar();
            cout << "El resultado de la multiplicacion es: " << calc.multiplicar() << endl;
            break;
        case 4:
   			calc.introducir();
            if (num2 != 0) {  // Asegurarse de que la división no fue por 0
                calc.dividir();
            }
            break;
        case 5:
        	calc.introducir();
        	calc.raizCuadrada();
        	cout << "El resultado de la raiz cuadrada  es: " << calc.raizCuadrada() << endl;
        	break;
        case 6:
        	calc.introducir();
        	calc.seno();
        	cout << "El resultado del seno es: " << calc.seno() << endl;
        	break;
        case 7:
        	calc.introducir();
        	calc.coseno();
        	cout << "El resultado del coseno es: " << calc.coseno()<< endl;
        	break;
        case 8:
        	calc.introducir();
        	calc.potencia();
        	cout << "El resultado de la potencia es: " << calc.potencia() << endl;
        	break;
        case 9:
        	calc.introducir();
        	calc.fibonacci();
        	cout << "Fibonacci es " << calc.fibonacci() << endl;
        	break;
        case 10:
        	calc.introducir();
        	calc.factorial();
        	cout << "Factorial es " << calc.factorial() << endl;
        	break;
        case 11:
        	calc.introducir();
        	cout <<"Triángulo de Sierpinski: "<<calc.sierpinski(num1);
        	break;
        case 12:
        	calc.introducir();
        	//cout << "\nPolvo de Cantor:\n" << calc.cantor() << endl;
        	break;
        default:
            cout << "Operación no valida." << endl;
            break;
    }

	return 0;
}
