/*Escribir un programa que declare un arreglo de 5 enteros, y un puntero a entero.
Comprobar que los elementos del arreglo ocupan posiciones sucesivas en
memoria, escribiendo sus direcciones.*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int v[]={1,2,3,4,5};
    int *c;

    c=&v[0];
    for (int i = 0; i < 5; i++){
        cout<<"Elemento " << i + 1 << ": " << c + i << endl;
    }

    system("pause");
    return 0;
}