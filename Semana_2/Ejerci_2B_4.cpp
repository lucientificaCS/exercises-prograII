/*Proposito: Desarrolle un programa que permita dibujar un árbol con números
 según la cantidad de filas que se indiquen como dato:
    El número de las filas debe ser mayor a 0 y menor a 10.
    El programa deberá verificar el ingreso del dato.
    El triángulo se construye imprimiendo espacios en blanco antes de empezar a imprimir los números en cada fila. */

//Dato de entrada: filas (int)

#include <iostream>
using namespace std;
int main() {

    int filas;
    do {
        cout<<"Filas [1-9]: "; cin>>filas;
    } while (filas<1 or filas>9);

    int i;
    while (i<=filas) {
        for (int k= filas; k>i;k--) {
            cout<<" ";
        }

        for (int j=1;j<=i;j++) {
            cout<<j;
        }
        i++;
        cout<<endl;

    }


    return 0;
}