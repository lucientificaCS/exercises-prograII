/*Proposito: Realice un programa, que solicite el día, mes y año
 en que la persona nació y el programa imprima el nombre de su ángel de la guarda.*/

//Datos de ingreso: int dia, mes, anio;
//Datos de salida: cout que diga el nombre del angel

#include <iostream>
using namespace std;
int main() {

    int dia, mes, anio;
    string angel="";
    cout<<"----------Ingrese la fecha de su nacimiento: ------------\n";
    cout<<"Ingrese el dia (del 1 al 30): "; cin>>dia;
    cout<<"Ingrese el mes en numero (del 1 al 12): "; cin>>mes;
    cout<<"Ingrese el anio: "; cin>>anio;

    while ( (dia<1 || dia>30) or (mes<1 || mes>12) ) {
        cout<<"ADVERTENCIA: Los datos ingresados son invalidos, hagalo de nuevo por favor\n";

        cout<<"Ingrese el dia (del 1 al 30): "; cin>>dia;
        cout<<"Ingrese el mes en numero (del 1 al 12): "; cin>>mes;
        cout<<"Ingrese el anio: "; cin>>anio;
    }

    if (anio%2==0) {
        if (mes>=1 && mes<=3) {
            if (dia%2==0) {
                angel="Miguel";}
            else {
                angel="Gabriel";}
        }
        else {
            if (mes>=4 && mes<=6) {
                if (dia%2==0) {
                    angel="Jofiel";}
                else {
                    angel="Raziel";}
            }
            else {
                if (mes>=7 && mes<=9) {
                    if (dia%2==0) {
                        angel="Chamuel";}
                    else {
                        angel="Selatiel";}
                }
                else {
                    if (dia%2==0) {
                        angel="Ariel";}
                    else {
                        angel="Jeremiel";}
                }
            }

        }
    }
    else {
        if (mes>=1 && mes<=3) {
            if (dia%2==0) {
                angel="Rafel";}
            else {
                angel="Uriel";}
        }
        else {
            if (mes>=4 && mes<=6) {
                if (dia%2==0) {
                    angel="Barachiel";}
                else {
                    angel="Jehuiel";}
            }
            else {
                if (mes>=7 && mes<=9) {
                    if (dia%2==0) {
                        angel="Zadquiel";}
                    else {
                        angel="Metatron";}
                }
                else {
                    if (dia%2==0) {
                        angel="Anael";}
                    else {
                        angel="Azrael";}
                }
            }

        }
    }
    cout<<"Tu angel es: "<<angel<<endl;
     return 0;
}
