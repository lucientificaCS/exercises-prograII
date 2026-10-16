/*Proposito: Realice un programa que permita leer como dato
 un número entero y el programa indique si el número es Cero, es positivo o es negativo*/

#include <iostream>
using namespace std;
int main() {

    int numero;
    cout<<"Ingrese un numero entero:";
    cin>>numero;

    if (numero==0) {
        cout<<"El numero es 0";
    }
    else {
        if (numero<0) {
            cout<<"El numero es negativo";
        }
        else {
            cout<<"El numero es positivo";
        }
    }
    return 0;
}