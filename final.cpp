#include <iostream>
#include "deposito.h"
#include "archivo.h"
using namespace std;

int main(){
    deposito d;
    archivo archivo;
    int n, pi, di, pr, dispo;
    cout << "MENU\n";
    cout << "Ingrese disponibilidad TOTAL en deposito: \n";
    cin >> dispo;
    d.setdispo(dispo);
    do{
        cout << "Ingrese una opcion:\n";
        cout << "1) Ingreso de productos\n";
        cout << "2) Retiro de productos\n";
        cout << "3) Porcentaje de ocupacion de deposito\n";
        cout << "4) Dinero Recaudado\n";
        cout<<"5) Ver movimientos\n";
        cout<<"6) Salir\n";
        cin >> n;
        switch (n){
        case 1:
            cout << "¿Cuantos productos ingresaron?\n";
            cin >> pi;
            d.setpi(pi);
            break;
        case 2:
            cout << "¿Cuantos productos se retiraron?\n";
            cin >> pr;
            cout << "¿Cuanto dinero ingreso?\n";
            cin >> di;
            break;
        case 3:
            cout << "Porcentaje de ocupacion: ";
            cout << "Espacio disponible: ";
            break;
        case 4:
            cout << "Dinero Recaudado: ";
            break;
        case 5: 
            archivo.leerDeposito();
            break;
        case 6:
            cout << "Cerrando el programa." << endl;
            exit(1);
            break;
        default:
            cout << "Opcion no diponible. Ingrese otra a continuacion.\n\n";
            break;
        }
    }while (n != 1 || n != 2 || n != 3 || n != 4 || n !=5 || n !=6 );
    return 0;
}