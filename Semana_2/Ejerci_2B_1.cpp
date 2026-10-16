/*Proposito: Realice un programa, que permita leer varios números
  enteros hasta que se introduzca el cero.

Luego el programa mostrará lo siguiente:
La cantidad de números leídos
La cantidad de números pares
La cantidad de números impares

El cero, no debe entrar en el conteo.*/

#include <iostream>
using namespace std;
int main() {

    int numero, numPar=0, numImpar=0, contador=0;
    cout<<"Ingrese el numero: ";
    cin>>numero;


    while (numero!=0) {
        contador++;
        if (numero%2==0) {
            numPar=numPar+1;}
        else {
            numImpar=numImpar+1;
        }
        cout<<"Ingrese el numero: ";
        cin>>numero;

    }

    cout<<"La cantidad de numeros leidos: "<<contador<<endl;
    cout<<"La cantidad de numeros pares: "<<numPar<<endl;
    cout<<"La cantidad de numeros impares: "<<numImpar<<endl;
    return 0;
}