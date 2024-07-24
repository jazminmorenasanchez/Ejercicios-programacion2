#ifndef DEPOSITO_H
#define DEPOSITO_H

class deposito {
private:
    int dispo; // Capacidad total del depósito
    int ocupacion; // Espacio ocupado en el depósito
    int dineroRecaudado; // Dinero recaudado por retiros

public:
    deposito();
    void setdispo(int dispo_);
    void ingresarPaquetes(int cantidad);
    bool retirarPaquetes(int cantidad, int precio);
    double obtenerPorcentajeOcupacion() const;
    int getDineroRecaudado() const;
    int getCapacidadDisponible() const;
};

#endif // DEPOSITO_H