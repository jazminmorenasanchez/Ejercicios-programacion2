/*3. Para el arreglo del ejercicio anterior, declare dos punteros a entero y asigneles
las direcciones del primer y último elemento del arreglo. Imprima la diferencia
entre ambos punteros.*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int v[]={1,2,3,4,5};
    int *c;
    int *d, *e;

    c=&v[0];
    for (int i = 0; i < 5; i++){
        cout<<"Elemento " << i + 1 << ": " << c + i << endl;
    }

    d=&v[0];
    e=&v[4];
    cout<<"P1= "<<d;
    cout<<"P2= "<<e;

    cout<<"\nDiferencia entre los punteros: "<<e-d<<endl;

    system("pause");
    return 0;
}