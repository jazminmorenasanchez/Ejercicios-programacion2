#include <fstream>
#include "deposito.h"
using namespace std;
class archivo {
    private:
    ofstream archivoSalida;
    ifstream archivoEntrada;

    public:
    archivo();
    ~archivo();

    void grabarDeposito(deposito dispo_, deposito pi_);
    void leerDeposito();
    void cerrarArchivo();
    void porcentaje();
    void dinero();
};