#pragma once
#include "Prerequisites.h";

class Persona {
private:
	string m_nombre;
	int m_edad;

public:

	Persona(string _nombre, int _edad) : m_nombre(_nombre), m_edad(_edad) {}

	void setNombre(string nombre) {
		m_nombre = nombre;
	}

	void setEdad(int edad) {
		m_edad = edad;
	}

	string getNombre() {
		return m_nombre;
	}

	int getEdad() {
		return m_edad;
	}
};