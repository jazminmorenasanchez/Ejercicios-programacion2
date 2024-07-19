/*6. Realizar un programa que ingrese una cadena de caracteres de máximo 50
elementos y la envíe como parámetro a una función que maneje punteros
de modo que la función invierta la cadena.*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void m(char *c);

int main(){
    char c[51];
    char *p=c;
    cout<<"Ingrese su nombre: ";
    cin.getline(c,51,'\n');

    m(p);
    cout<<p<<endl;

    system("pause");
    return 0;
}
void m(char *c){
   int largo= strlen(c);
   char *inicio=c;
   char *fin= c+ largo - 1;
   char aux;

   while (inicio<fin){
    aux=*inicio;
    *inicio=*fin;
    *fin=aux;
    ++inicio;
    --fin;
   }
   
}
