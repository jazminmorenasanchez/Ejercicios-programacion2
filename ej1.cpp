#include <iostream>
#include <stdlib.h>
using namespace std;

/*Escribir un programa que declare e inicialice dos variables enteras y un puntero a
entero. A continuación, asigne al puntero la dirección de la primera variable e
imprima la dirección de memoria apuntada y su contenido. Repetir la operación
para la segunda variable.*/

int main(){
    int a=3 ,b=4, *c;
    c=&a;
    cout<<c<<endl;//direccion
    cout<<*c<<endl;//contenido
    c=&b;
    cout<<c<<endl;
    cout<<*c<<endl;

    system("pause");
    return 0;
}