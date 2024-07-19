/*7. Obtener una función copia que utilice punteros para copiar una cadena en otra.*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void m(char *c, char *p);

int main(){
    char c[51];
    char *p=c;
    cout<<"Ingrese su nombre: ";
    cin.getline(c,51,'\n');

    m(c,p);
    cout<<"Cadena 1: "<<c<<endl;
    cout<<"Cadena 2: "<<p<<endl;

    system("pause");
    return 0;
}
void m(char *c, char *p){
    while (*c!='\0'){// Iterar sobre la cadena de origen y copiar cada carácter en la cadena de destino
        *p=*c;
        ++c;
        ++p;
   }
   *p='\0';
   
}