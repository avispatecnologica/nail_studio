#pragma once
#include "Pila.h"
#include "Cita.h"
class Cliente {
	int id;
	string nombre;
	int telefono; // set
	Pila<Cita> historial;
public:
	Cliente(int _id, string _nombre, int _telf) {
		id = _id;
		nombre = _nombre;
		telefono = _telf;
	}

	int getId() {
		return id;
	}
	string getNombre() {
		return nombre;
	}
	int getTelefono() {
		return telefono;
	}
	void setTelefono(int _telefono) {
		telefono = _telefono;
	}

	Pila<Cita> verHistorial() {
		return historial;
	}

	void agregarCita(Cita c) {
		historial.apilar(c);
	}
};
