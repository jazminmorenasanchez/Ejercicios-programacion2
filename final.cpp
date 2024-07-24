#include <iostream>
#include "deposito.h"
#include "archivo.h"

using namespace std;

int main() {
    deposito d;
    archivo archivo;
    int n, cantidad, precio;
    
    cout << "MENU\n";
    cout << "Ingrese disponibilidad TOTAL en deposito: \n";
    cin >> cantidad;
    d.setdispo(cantidad);

    do {
        cout << "Ingrese una opcion:\n";
        cout << "1) Ingreso de productos\n";
        cout << "2) Retiro de productos\n";
        cout << "3) Porcentaje de ocupacion de deposito\n";
        cout << "4) Dinero Recaudado\n";
        cout << "5) Ver movimientos\n";
        cout << "6) Salir\n";
        cin >> n;

        switch (n) {
        case 1:
            cout << "¿Cuantos productos ingresar?\n";
            cin >> cantidad;
            try {
                d.ingresarPaquetes(cantidad);
            } catch (const std::exception &e) {
                cerr << e.what() << endl;
            }
            break;

        case 2:
            cout << "¿Cuantos productos retirar?\n";
            cin >> cantidad;
            cout << "¿Precio por producto?\n";
            cin >> precio;
            try {
                if (d.retirarPaquetes(cantidad, precio)) {
                    archivo.grabarRetiro(cantidad, precio);
                }
            } catch (const std::exception &e) {
                cerr << e.what() << endl;
            }
            break;

        case 3:
            cout << "Porcentaje de ocupacion: " << d.obtenerPorcentajeOcupacion() << "%\n";
            break;

        case 4:
            cout << "Dinero Recaudado: " << d.getDineroRecaudado() << "\n";
            break;

        case 5:
            archivo.leerDeposito();
            break;

        case 6:
            cout << "Cerrando el programa." << endl;
            exit(0);

        default:
            cout << "Opcion no disponible. Ingrese otra a continuacion.\n\n";
            break;
        }
    } while (n != 6);

    return 0;
}