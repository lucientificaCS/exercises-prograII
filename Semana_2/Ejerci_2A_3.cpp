/*Proposito: Desarrolle un programa en C++ en que lea las coordenadas y el programa indique
  si corresponde a un cuadrado negro o blanco*/

#include <iostream>
using namespace std;
int main() {
    int numero;
    char letra;
    cout<<"Ingresa una letra de la A hasta la H: "; cin>>letra;
    cout<<"Ingresa un numero del 1 al 8: "; cin>>numero;

    letra = toupper(letra); //CONVIERTE LA LETRA EN MAYUSCULA

    while ((letra<'A'|| letra>'H') or (numero<1|| numero>8)) {
        cout<<"Error al ingresar los datos, hagalo de nuevo\n";

        cout<<"Ingresa una letra de la A hasta la H: "; cin>>letra;
        cout<<"Ingresa un numero del 1 al 8: "; cin>>numero;
    }

    if (letra=='A'|| letra=='C' || letra=='E' || letra=='G' ) {

        if (numero%2!=0) {
            cout<<"El cuadrado es negro";}
        else {
            cout<<"El cuadrado es blanco";}
    }
    else {
        if (numero%2!=0) {
            cout<<"El cuadrado es blanco";}
        else {
            cout<<"El cuadrado es negro";
        }
    }

}