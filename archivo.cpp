#include <iostream>
#include "archivo.h"
using namespace std;

archivo::archivo() {
    try {
        archivoSalida.open("deposito.txt", ios::app);
        archivoEntrada.open("deposito.txt");

        if (!archivoSalida.is_open() || !archivoEntrada.is_open()) {
            throw runtime_error("No se pudo abrir el archivo 'deposito.txt'");
        }
    } catch (const exception &e) {
        cerr << "Error al abrir el archivo: " << e.what() << endl;
    }
}

archivo::~archivo() {
    cerrarArchivo();
}

void archivo::cerrarArchivo() {
    if (archivoSalida.is_open()) {
        archivoSalida.close();
    }
    if (archivoEntrada.is_open()) {
        archivoEntrada.close();
    }
}

void archivo::grabarRetiro(int cantidad, int precio) {
    try {
        archivoSalida << "Retiro: " << cantidad << " paquetes, Total: " << cantidad * precio << "\n";
        archivoSalida.flush();
    } catch (const exception &e) {
        cerr << "Error al escribir en el archivo: " << e.what() << endl;
    }
}

void archivo::leerDeposito() {
    try {
        string linea;
        while (getline(archivoEntrada, linea)) {
            cout << linea << "\n";
        }
        archivoEntrada.clear(); // Limpia errores al finalizar la lectura
        archivoEntrada.seekg(0, ios::beg); // Reinicia el puntero de lectura al principio del archivo
    } catch (const exception &e) {
        cerr << "Error al leer el archivo: " << e.what() << endl;
    }
}