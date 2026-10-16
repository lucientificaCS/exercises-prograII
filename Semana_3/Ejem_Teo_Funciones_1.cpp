
#include "Ejem_Teo_Funciones_1.h"

const double PI=3.1415926;
double radio=0, altura=0;

double areadelaBase(double r) {
    return (PI*pow(r,2));
}

double areaLateral(double r, double h) {
    return (2*PI*r*h);
}

double areaTotal(double r, double h) {
    return ((2*areadelaBase(r))+areaLateral(r,h));
}

double Volumen(double r, double h) {
    return (PI*pow(r,2)*h);
}

double LeerDato(string mensaje) {
    int dato;
    do {
        cout<<mensaje<<endl;
        cin>>dato;
    } while (dato<=0);
    return dato;
}
