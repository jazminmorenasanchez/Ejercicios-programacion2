/*4. Realizar un programa que rellene de forma aleatoria con los primeros 100
números un arreglo de 15 elementos. Mostrar por medio de punteros los valores
en el vector y la dirección de memoria de cada uno.*/
#include<iostream>
#include<stdlib.h>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    int v[15];
    int *c;
    srand(time(NULL));

    for(int i=0;i<15;i++){
        v[i]=rand() %100+1;
    }

    c=&v[0];

    for(int i=0;i<15;i++){
        cout<<"direccion: "<<c<<" --> valor: "<<*c<<endl;
        c++;
    }

    system("pause");
    return 0;
}