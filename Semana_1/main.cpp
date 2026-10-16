/*
Propósito del archivo: Programa para el area y volumen de una esfera usando funciones
Autora: Luciana Melgarejo Quispe
Fecha: 24/09/2026
*/

#include "Ufunciones.h"

double radio;
int main() {

  cout<<"Ingrese el radio de la esfera: ";
  cin>> radio;

  cout<<"El area de la esfera es: "<< hallarArea(radio)<<endl;
  cout<<"El volumen de la esfera es: "<< hallarVolumen(radio)<<endl;

  return 0;
}

