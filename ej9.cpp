/*9. Definir un arreglo unidimensional de N componentes enteras de modo que la
gestión de memoria sea dinámica utilizando new. Ingresar los datos en el vector.
Mostrar el contenido del vector en dos modos: usando notación vectorial y luego
usando aritmética de punteros.*/
#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
    int n;
    cout<<"Ingrese el numero de arreglos: ";
    cin>>n;
    int *a=new int[n];
    
    cout<<"Ingrese los elementos del arreglo: \n";
    for(int i=0;i<n;i++){
        cout<<i+1<<": ";
        cin>>a[i];
        cout<<endl;
    }
    cout<<"Notacion Vectorial: \n";
    for(int i=0;i<n;i++){
        cout<<i+1<<": "<<a[i];
        cout<<endl;
    }
    cout<<"\nNotacion aritmetica de punteros: \n";
    int *p=a;
    for(int i=0;i<n;i++){
        cout<<i+1<<": "<<*p<<" direccion: "<<p<<endl;
        p++;
    }

    system("pause");
    return 0;
}