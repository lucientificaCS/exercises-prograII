/*Proposito: Desarrolle un programa que lea la denominación y que muestre el nombre
 del personaje, en el caso de los billetes de 500, 1000, 5000 y 10000 deberá mostrarse el mensaje
 “Denominación descontinuada” en otros valores deberá mostrar  “No existe esa denominación”.*/

#include <iostream>
using namespace std;
int main() {
    int denominacion;
    cout<<"Ingrese el denominacion del dolar de su eleccion: ";
    cin>>denominacion;

    switch (denominacion) {
        case 1: {
            cout<<"El personaje de su billete es George Washington";}
            break;
        case 2: {
            cout<<"El personaje de su billete es Thomas Jefferson";}
            break;
        case 5: {
            cout<<"El personaje de su billete es Abraham Lincoln";}
            break;
        case 10: {
            cout<<"El personaje de su billete es Alexander Hamilton";}
            break;

        case 20: {
            cout<<"El personaje de su billete es Andrew Jackson";}
            break;

        case 50: {
            cout<<"El personaje de su billete es Ulisses S. Grant";}
            break;

        case 100: {
            cout<<"El personaje de su billete es Benjamin Franklin";}
            break;

        case 500:
        case 1000:
        case 5000:
        case 10000: {
            cout<<"Denominacion descontinuada";
            break;
        }

        default: {
            cout<<"No existe esa denominacion";
        }

    }


 return 0;
}