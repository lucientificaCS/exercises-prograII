/*Proposito: Realice un programa en C++, en el que considerando el tipo de tren y la edad del usuario,
 determine el precio a pagar. Al seleccionar el tipo de tren, el usuario podrá ingresar una sola letra,
 la cual podría estar en mayúscula o en minúsculas, en ambos casos el programa debe hallar el precio apropiado.*/

//Dato de entrada: tipo_tren (char), edad (int)
//Dato de salida: precio (int)

#include <iostream>
using namespace std;
int main() {

    char tipo_tren;
    int edad, precio;

    cout<<"Ingrese el tipo de tren que va a usar: ";
    cin>>tipo_tren;
    cout<<"Ingrese su edad: ";
    cin>>edad;

    tipo_tren=toupper(tipo_tren);

    if (tipo_tren=='H' or tipo_tren=='E') {
        if (edad<=17) {
            precio=800;}
        else {
            if (precio<=60) {
                precio=990;}
            else {
                precio=700;}
        }
    }
    else {
        if (tipo_tren=='V' or tipo_tren=='A') {
            if (edad<=17) {
                precio=350;}
            else {
                if (precio<=60) {
                    precio=500;}
                else {
                    precio=700;}
            }
        }
        else {
            cout<<"El tipo de tren seleccionado es invalido\n";

        }
    }

    cout<<"El precio a pagar es "<<precio<<endl;
    return 0;
}