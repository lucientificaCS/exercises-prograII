#include <iostream>
using namespace std;

int x,edad;
int main() {

/*Estructura IF:
    if (CONDICION){
        INSTRUCCIÓN;
    }*/

    if (!(x==4)) {
        cout<<"X no es igual a 4\n";
    }

/*Estructura IF/ELSE:
    if (CONDICION){
        INSTRUCCIÓN;
    }
    else{
        BLOQUE CONDICIONAL (estructura condicional dentro como un IF/ELSE)
        INSTRUCCIÓN;
    }
    */
    cout<<"Ingrese su edad: ";
    cin>>edad;

    //Si se cunple el if se queda ahi
    if (edad<18) {
        cout<<"El precio de la entrada es 15";
    }
    //Todos los casos del else son si NO se cumple el if
    else {
        //mayor a 18 pero menor igual a 25
        if (edad<=25) {
            cout<<"El precio de la entrada es 40";}

        else {
            if (edad<=59) {
                cout<<"El precio de la entrada es 70";
            }
            else {
                cout<<"El precio de la entrada es 20";
            }
        }

    }

/*Estructura SWITCH:
        switch (expresion) { LA EXPRESION SOLO PUEDE SER UN CHAR, INT O ENUM
            case opcion1: LAS OPCIONES DEBEN SER NUMEROS ORDINALES
                BLOQUE CODIGO
                break; EL BREAK TERMINA/PARA EL SWITCH Y CONTINUA CON LO DEMAS DEL CODIGO
            case opcion2:
                BLOQUE CODIGO

            default:
                BLOQUE CODIGO
        }
*/



    
    return 0;
}