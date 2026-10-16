/*Proposito: Escribir un programa en C++, que permita leer un número entre 1 y 30 imprima
 un triángulo con asteriscos. El triángulo tendrá tantas filas como indica el número.*/

#include <iostream>
using namespace std;
int main() {
    int numero;
    do {
        cout<<"Ingrese el numero (de 1 a 30): "; cin>>numero;
    } while (numero<1 or numero>30);
    int i=1;
    while (i<=numero) {

        for (int j=1;j<=i;j++) {
            cout<<"*";
        }
        cout<<endl;
        i++;
    }

    return 0;
}