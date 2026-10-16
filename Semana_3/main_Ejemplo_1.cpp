/*Proposito: Escribir un programa que permita hallar el área total y el
volumen de un cilindro circular recto, si se conoce el valor del radio y la
altura.*/

#include "Ejem_Teo_Funciones_1.h"

int main() {

    /*FORMA DE LLAMAR A LOS DATOS SIN CREAR UNA FUNCION
     do {
        cout<<"Radio del cilindro: ";cin>>radio;
        cout<<"Altura del cilindro: ";cin>>altura;
        }while (radio<=0 or altura<=0);*/

    //FORMA CON LA FUNCION LEERDATO, EL DATO QUE RETORNA SE CONVERTIRA EN EL VALOR DE LA VARIABLE RADIO Y ALTURA
    radio= LeerDato("Radio del cilindro: ");
    altura= LeerDato("Altura del cilindro: ");

    cout<<"Area total: "<<areaTotal(radio,altura)<<endl;
    cout<<"Volumen: "<<Volumen(radio,altura);

    return 0;
}
