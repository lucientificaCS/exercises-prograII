/*
Propósito del archivo: Programa para el area y volumen de una esfera usando funciones
Autora: Luciana Melgarejo Quispe
Fecha: 24/09/2026
*/

//Este archivo ve el código de funciones exceptuando el main

#include "Ufunciones.h"

double hallarArea(double r) {
    return (4*PI*pow(r,2));
}

double hallarVolumen(double r) {
    return ((4.0/3)*PI*pow(r,3));
}
