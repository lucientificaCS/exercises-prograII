
#include "Teo_Funciones.h"
// Aquí realmente se crean en la memoria y se inicializan
int linea=0;
int contador=0;

void imprimir(int n) {
    linea++;
    contador=contador+n;
    cout<<"Valor:"<<contador<<"\n";
}