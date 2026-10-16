/*Proposito: Realice un programa que permita leer como dato un
 número entero y el programa indique el nombre del dia  de la semana que le corresponde.*/

#include <iostream>
using namespace std;
int main() {

    int dia;

    cout<<"Ingrese el dia de la semana: ";
    cin>>dia;

    switch(dia) {
        case 1: {
            cout<<"El dia es Lunes";
            break;}
        case 2: {
            cout<<"El dia es Martes";
            break;}
        case 3: {
            cout<<"El dia es Miercoles";
            break;}
        case 4: {
            cout<<"El dia es Jueves";
            break;}
        case 5: {
            cout<<"El dia es Viernes";
            break;}
        case 6: {
            cout<<"El dia es Sabado";
            break;}
        case 7: {
            cout<<"El dia es Domingo";
            break;}
        default: {
            cout<<"El dia insertado no es un dia de la semana";
        }
    }

    return 0;
}