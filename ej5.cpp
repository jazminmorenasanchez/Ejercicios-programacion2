/*5. Ingresar una cadena de caracteres de longitud máxima 10, enviarla como
parámetro a una función que maneje punteros de modo que retorne la misma
cadena de caracteres, pero en mayúsculas.*/
#include<iostream>
#include<stdlib.h>
#include<cctype>
using namespace std;
void m(char *c);

int main(){
    char c[10];
    char *p=c;
    cout<<"Ingrese su nombre: ";
    cin.getline(c,11,'\n');

    m(p);
    cout<<p<<endl;

    system("pause");
    return 0;
}
void m(char *c){
    for(;*c !='\0';++c){
        *c=toupper(*c);
    }
}