#pragma once

class Circulo {
private:
    double radio;

public:
    
    Circulo(double r) : radio(r) {}

  
    double calcularArea() {
        return 3.1416* radio * radio;
    }

   
    double calcularPerimetro() {
        return 2 * 3.1416 * radio;
    }

    
    void setRadio(double r) {
        radio = r;
    }

    
    double getRadio() {
        return radio;
    }
};