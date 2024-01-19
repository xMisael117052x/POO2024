#pragma once
#include "Prerequisites.h";

class Estudiante {
private:
    string nombre;
    int edad;

public:

    Estudiante(string nombre, int edad) : nombre(nombre), edad(edad) {}

    string getNombre() const { return nombre; }
    int getEdad() const { return edad; }

    
    void imprimirInfo() const {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
};
