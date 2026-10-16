/*Proposito: Desarrolle un programa que permita dibujar un rectángulo, según la cantidad de
 filas y columnas.

El número de las filas debe ser mayor a 2. El programa deberá verificar el ingreso del dato.
El número de las columnas debe ser mayor a 4. El programa deberá verificar el ingreso del dato.
El rectángulo se construye imprimiendo un "*" en los bordes del rectángulo y "o" al medio,
tal y como se muestra en los ejemplos:*/

#include <iostream>
using namespace std;
int main() {
    int filas, columnas;
    do {
        cout<<"Filas [mayor a 2]: "; cin>>filas;
        cout<<"Columnas [mayor a 4]: "; cin>>columnas;
    } while (filas<=2 or columnas<=4);

    for (int i=1; i<=filas; i++) {
        if (i==1 or i==filas) { //Para los extremos del rectangulo
            for (int j=1; j<=columnas; j++) {
                cout<<"*";}
            cout<<endl;
        }
        else { //Para el interior del rectangulo
            for (int j=1; j<=columnas; j++) {
                if (j==1 or j==columnas) {  //Para los extremos de las columnas interiores
                    cout<<"*";}
                else { //Para el centro de las columnas interiores
                    cout<<"o";}
            }
            cout<<endl;
        }
    }
    return 0;
}