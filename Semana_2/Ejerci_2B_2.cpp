/*Proposito: Realice un programa que permita leer un número entero de
 al menos 3 dígitos, dato que se debe validar, luego el programa indicará:

La cantidad total de dígitos
La cantidad de dígitos pares
La cantidad de dígitos impares*/

#include <iostream>
using namespace std;
int main() {

    unsigned long long int numero, cantidad=0, digi_par=0, digi_impar=0, digito;


    do {
        cout<<"Ingrese el numero: "; cin>>numero;

    }while (numero<100);

    while (numero!=0) {
        digito=numero%10;
        if (digito%2==0) {
            digi_par++;}
        else {
            digi_impar++;}
        cantidad++;
        numero=numero/10;
    }

    cout<<"Numero de digitos: "<<cantidad<<endl;
    cout<<"Cantidad de numeros pares: "<<digi_par<<endl;
    cout<<"Cantidad de numeros impares: "<<digi_impar<<endl;

    return 0;
}
