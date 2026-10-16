//Proposito: Comparar las estructuras repetitivas WHILE, DO WHILE Y FOR al inicializar mal la variable

#include <iostream>
using namespace std;
int main(){

//WHILE

  int i=10;
  while (i<=7){
      cout<<"CCC\n";
  } //La condición no se va a cumplir porque i es mayor a 7 siempre será FALSE

// DO WHILE
  do {
      cout<<"AUGCT\n";
      i++;
  } while (i<=7);
  //Al solo verificar la condicion LUEGO de ejecutarse el bloque DO esto resulta en un solo "AUGCT"


//FOR
    for (;i<=7;i++) {
        cout<<"CMYK\n";
    } //La condicion siempre será FALSE debido a que i no la cumple asi que no se ejecuta el for
  return 0;
}