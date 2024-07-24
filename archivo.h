#ifndef ARCHIVO_H
#define ARCHIVO_H

#include <fstream>
#include "deposito.h"

class archivo {
private:
    std::ofstream archivoSalida;
    std::ifstream archivoEntrada;

public:
    archivo();
    ~archivo();

    void grabarRetiro(int cantidad, int precio);
    void leerDeposito();
    void cerrarArchivo();
};

#endif // ARCHIVO_H