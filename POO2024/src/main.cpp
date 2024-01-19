#include "../Includes/Circulo.h"
#include "../Includes/Persona.h"
#include "../Includes/Coche.h"
#include "../Includes/Estudiante.h"

int main() {
    // PERSONA

    Persona miPersona("Juan", 20);

    cout << "Nombre: " << miPersona.getNombre() << endl;
    cout << "Edad: " << miPersona.getEdad() << endl;

    // COCHE

    Coche miCoche("Toyota", "Corolla", 2020);

    miCoche.obtenerInformacion();


    miCoche.setMarca("Honda");
    miCoche.setModelo("Civic");
    miCoche.setYear(2022);
    miCoche.obtenerInformacion();

    // CIRCULO

    
    Circulo miCirculo(5);

    cout << "El área del círculo es: " << miCirculo.calcularArea() << endl;
    cout << "El perímetro del círculo es: " << miCirculo.calcularPerimetro() << endl;

    // ESTUDIANTE

    Estudiante estudiantes[3] = {
        Estudiante("Juan", 20),
        Estudiante("Pedro", 21),
        Estudiante("María", 22)
    };
    for (int i = 0; i < 3; i++) {
        estudiantes[i].imprimirInfo();
    }


    return 0;
}
