

#ifndef EJEM_TEO_FUNCIONES_1_H
#define EJEM_TEO_FUNCIONES_1_H

#include <iostream>
using namespace std;
#include <cmath>

extern const double PI;
extern double radio, altura;

double areadelaBase(double r);
double areaLateral(double r, double h);
double areaTotal(double r, double h);
double Volumen(double r, double h);

double LeerDato(string mensaje);


#endif //EJEM_TEO_FUNCIONES_1_H
