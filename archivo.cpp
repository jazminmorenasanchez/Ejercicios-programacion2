#include <fstream>
#include "deposito.h"
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

void archivo::cerrarArchivo() {
    if (archivoSalida.is_open()) {
        archivoSalida.close();
    }
    if (archivoEntrada.is_open()) {
        archivoEntrada.close();
    }
}

archivo::~archivo() {
    cerrarArchivo();
}

void archivo::grabarDeposito(deposito dispo_, deposito pi_) {
    try {
        for (int i = 0; i < 1; ++i) {
            archivoSalida << "Dispociocion TOTAL deposito: " << dispo_.getdispo() << "\n";
            archivoSalida << "Ingreso: " << pi_.getpi() << "\n";
        }
        archivoSalida.flush();
    } catch (const exception &e) {
        cerr << "Error al escribir en el archivo: " << e.what() << endl;
    }
}

void archivo::leerDeposito(){
    try {
    string linea;
    int dispo, pi;

    while (getline(archivoEntrada, linea)) {
        if (linea.find("Dispociocion TOTAL deposito:") != string::npos) {
            sscanf(linea.c_str(), "Dispociocion TOTAL deposito: %d", &dispo);

            getline(archivoEntrada, linea);
            sscanf(linea.c_str(), "Ingreso: %d", &pi);

            // Crear y mostrar la estructura con los números extraídos
            cout << "Dispociocion TOTAL deposito: " << dispo << "\n";
            cout << "Ingreso: " << pi << "\n";
        }
    }
    archivoEntrada.clear(); // Limpia errores al finalizar la lectura
} catch (const exception &e) {
    cerr << "Error al leer el archivo: " << e.what() << endl;
}

}