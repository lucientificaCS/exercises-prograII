#include <iostream>
using namespace std;


int main() {

/*Estructura WHILE
   while (EXPRESION LOGICA){
        INSTRUCCION;
        INSTRUCCION2;
   }
*/
    int i;
    i=1;
    while (i<=7) {
        cout<<"AS"<<endl;
        i++; // es lo mismo que i=i+1
    }

/*Estructura DO WHILE
    do {
        INSTRUCCION;
    } while (CONDICION); La condicion se verifica LUEGO de la ejecucion de la instruccion

*/
    int k=1;
    do {
        cout<<"MTJIR\n";
        k++;
    } while (k<=5);


/*Estructura FOR
     for (INICIALIZACION; CONDICION; VARIACIONES){
        INSTRUCCION;
     }

*/
    for (int x=1; x<=7;x++) {
        cout<<"TILL"<<endl;
    }

    return 0;

}