/*Proposito: Desarrolle un programa que permita calcular el perímetro de un polígono,
 si se sabe el número de vértices y las coordenadas de cada uno de los vértices.

Considere lo siguiente:
El número de vértices, es un número mayor o igual a 3 y menor o igual a 10. El programa debe
verificar el ingreso del dato, y volverá a pedir otro valor si no se encuentra en ese rango.
El programa irá solicitando el valor de cada vértice e irá calculando el valor de cada lado. Note que
para calcular el valor el último lado, debe considerar la última y la primera coordenada ingresada.*/

#include <iostream>
using namespace std;
int main() {
    int vertices;
    do {
        cout<<"Numero de vertices: "; cin>>vertices;
    } while (vertices<3 or vertices>10);

    int x, y;

    for(int i=1;i<vertices;i++) {
        cout<<"Vértice num "<<i<<endl;
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;

    }

    return 0;
}