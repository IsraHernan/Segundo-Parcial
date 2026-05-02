#include "Matrices.h"
#include <iostream>

using namespace std;

Matrices::Matrices(){
	
}

Matrices::~Matrices(){
	
}

int Matrices::captura(){
	cout<<"\nIngrese el tamanio de la matriz cuadrada: ";
	cin >> tamanioC;
	
	cout<<"\nIngrese datos de la matriz A ("<<tamanioC<<" x "<<tamanioC<<"): ";
    for (i = 0; i < tamanioC; ++i) {
        for (j = 0; j < tamanioC; ++j) {
            cin >> matrizA[i][j];
        }
    }
    
    cout<<"\nIngrese datos de la matriz B ("<<tamanioC<<" x "<<tamanioC<<"): ";
    for (i = 0; i < tamanioC; ++i) {
        for (j = 0; j < tamanioC; ++j) {
            cin >> matrizB[i][j];
        }
    }
    
    cout<<"\nIngrese un numero: ";
    cin>>c;
}

int Matrices::multiplicarMatriz(){
    for (i = 0; i < tamanioC; ++i) {
        for (j = 0; j < tamanioC; ++j) {
            resultado[i][j] = 0;
            for (k = 0; k < tamanioC; ++k) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

int Matrices::multiplicarConstante(){
	for (i = 0; i < tamanioC; ++i) {
        for (j = 0; j < tamanioC; ++j) {
            resultado[i][j]= matrizA[i][j] * c;
        }
    }
}

int Matrices::imprimirM(){
	cout <<"\nResultado de (Matriz A *  Matriz B)"<<endl;
	for (i = 0; i < tamanioC; ++i) {
        for (j = 0; j < tamanioC; ++j) {
            cout << resultado[i][j] <<"\t";
        }
        cout <<endl;
    }
}

int Matrices::imprimirC(){
	cout <<"\nResultado de (Matriz A * K)"<<endl;
	for (i = 0; i < tamanioC; ++i) {
        for (j = 0; j < tamanioC; ++j) {
            cout << resultado[i][j] <<"\t";
        }
        cout <<endl;
    }
}

int Matrices::geti(){
	return i;
}

int Matrices::seti(int x){
	i=x;
}

int Matrices::getj(){
	return j;
}

int Matrices::setj(int y){
	j=y;
}

int Matrices::getc(){
	return c;
}

int Matrices::setc(int w){
	c=w;
}

/*int Matrices::getRe(){
	return resultado;
}

int Matrices::setRe(int z){
	resultado = z;
}*/
