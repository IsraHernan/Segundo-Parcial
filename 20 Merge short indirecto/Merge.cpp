#include "Merge.h"
#include <iostream>
#include <string>
using namespace std;

Merge::Merge(){
    int nTemp[5] = {9, 3, 1, 7, 5};
    char cTemp[5] = {'z', 'a', 'm', 'b', 't'};
    Persona pTemp[3] = {{"Carlos", 35}, {"Ana", 22}, {"Bea", 28}};

    for (int i = 0; i < 5; i++) {
        numeros[i] = nTemp[i];
        letras[i] = cTemp[i];
        pNumeros[i] = &numeros[i];
        pLetras[i] = &letras[i];
    }

    for (int i = 0; i < 3; i++) {
        personas[i] = pTemp[i];
        pPersonas[i] = &personas[i];
    }	
}

Merge::~Merge(){
	
}

// ---------------------- Enteros----------------------
void Merge::mergeEnteros(int izquierda, int medio, int derecha) {
    int n1 = medio - izquierda + 1;
    int n2 = derecha - medio;
    int* L[n1];
    int* R[n2];

    for (int i = 0; i < n1; i++) L[i] = pNumeros[izquierda + i];
    for (int j = 0; j < n2; j++) R[j] = pNumeros[medio + 1 + j];

    int i = 0, j = 0, k = izquierda;
    while (i < n1 && j < n2) {
        if (*L[i] <= *R[j]) pNumeros[k++] = L[i++];
        else pNumeros[k++] = R[j++];
    }
    while (i < n1) pNumeros[k++] = L[i++];
    while (j < n2) pNumeros[k++] = R[j++];
}

void Merge::mergeSortEnterosRec(int izquierda, int derecha) {
    if (izquierda < derecha) {
        int medio = (izquierda + derecha) / 2;
        mergeSortEnterosRec(izquierda, medio);
        mergeSortEnterosRec(medio + 1, derecha);
        mergeEnteros(izquierda, medio, derecha);
    }
}

void Merge::ordenarEnteros() {
    mergeSortEnterosRec(0, 4);
    cout << "Enteros ordenados: ";
    for (int i = 0; i < 5; i++) cout << *pNumeros[i] << " ";
    cout << endl << endl;
}

// ---------------------- CARACTERES ----------------------
void Merge::mergeChars(int izquierda, int medio, int derecha) {
    int n1 = medio - izquierda + 1;
    int n2 = derecha - medio;
    char* L[n1];
    char* R[n2];

    for (int i = 0; i < n1; i++) L[i] = pLetras[izquierda + i];
    for (int j = 0; j < n2; j++) R[j] = pLetras[medio + 1 + j];

    int i = 0, j = 0, k = izquierda;
    while (i < n1 && j < n2) {
        if (*L[i] <= *R[j]) pLetras[k++] = L[i++];
        else pLetras[k++] = R[j++];
    }
    while (i < n1) pLetras[k++] = L[i++];
    while (j < n2) pLetras[k++] = R[j++];
}

void Merge::mergeSortCharsRec(int izquierda, int derecha) {
    if (izquierda < derecha) {
        int medio = (izquierda + derecha) / 2;
        mergeSortCharsRec(izquierda, medio);
        mergeSortCharsRec(medio + 1, derecha);
        mergeChars(izquierda, medio, derecha);
    }
}

void Merge::ordenarChars() {
    mergeSortCharsRec(0, 4);
    cout << "Caracteres ordenados: ";
    for (int i = 0; i < 5; i++) cout << *pLetras[i] << " ";
    cout << endl << endl;
}

// ---------------------- PERSONAS ----------------------
void Merge::mergePersonas(int izquierda, int medio, int derecha) {
    int n1 = medio - izquierda + 1;
    int n2 = derecha - medio;
    Persona* L[n1];
    Persona* R[n2];

    for (int i = 0; i < n1; i++) L[i] = pPersonas[izquierda + i];
    for (int j = 0; j < n2; j++) R[j] = pPersonas[medio + 1 + j];

    int i = 0, j = 0, k = izquierda;
    while (i < n1 && j < n2) {
        if (L[i]->edad <= R[j]->edad) pPersonas[k++] = L[i++];
        else pPersonas[k++] = R[j++];
    }
    while (i < n1) pPersonas[k++] = L[i++];
    while (j < n2) pPersonas[k++] = R[j++];
}

void Merge::mergeSortPersonasRec(int izquierda, int derecha) {
    if (izquierda < derecha) {
        int medio = (izquierda + derecha) / 2;
        mergeSortPersonasRec(izquierda, medio);
        mergeSortPersonasRec(medio + 1, derecha);
        mergePersonas(izquierda, medio, derecha);
    }
}

void Merge::ordenarPersonas() {
    mergeSortPersonasRec(0, 2);
    cout << "Personas ordenadas por edad:\n";
    for (int i = 0; i < 3; i++)
        cout << pPersonas[i]->nombre << " (" << pPersonas[i]->edad << ")\n";
    cout << endl;
}

// EJECUTAR 
void Merge::ejecutar() {
    cout << "(MERGE SORT INDIRECTO)\n\n";
    ordenarEnteros();
    ordenarChars();
    ordenarPersonas();
}
