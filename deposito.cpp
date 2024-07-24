#include <iostream>
#include "deposito.h"
using namespace std;

deposito::deposito() : dispo(0), ocupacion(0), dineroRecaudado(0) {}

void deposito::setdispo(int dispo_) {
    dispo = dispo_;
}

void deposito::ingresarPaquetes(int cantidad) {
    if (ocupacion + cantidad <= dispo) {
        ocupacion += cantidad;
    } else {
        throw runtime_error("No hay suficiente espacio en el depósito.");
    }
}

bool deposito::retirarPaquetes(int cantidad, int precio) {
    if (cantidad <= ocupacion) {
        ocupacion -= cantidad;
        dineroRecaudado += cantidad * precio;
        return true;
    } else {
        throw runtime_error("No hay suficientes paquetes para retirar.");
    }
}

double deposito::obtenerPorcentajeOcupacion() const {
    return (static_cast<double>(ocupacion) / dispo) * 100;
}

int deposito::getDineroRecaudado() const {
    return dineroRecaudado;
}

int deposito::getCapacidadDisponible() const {
    return dispo - ocupacion;
}