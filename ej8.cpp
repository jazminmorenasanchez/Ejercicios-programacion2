/*8. Realice un programa que permita ingresar una cadena de caracteres de máximo
50 elementos, la envíe como parámetro a una función que utilizando punteros y
retorne el número de vocales minúsculas que contiene la cadena.*/
#include<iostream>
#include<stdlib.h>

using namespace std;
int m(char *c);

int main(){
    char c[51];
    char *p=c;
    int f;
    cout<<"Ingrese su nombre: ";
    cin.getline(c,51,'\n');

    f=m(p);
    cout<<f<<endl;

    system("pause");
    return 0;
}
int m(char *c){
    int contador=0;
   while (*c!='\0'){
        if(*c=='a'||*c=='e'||*c=='i'||*c=='o'||*c=='u'){
            contador ++;
        }
        c++;
   }
   return contador;
}