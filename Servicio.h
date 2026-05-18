#pragma once
#include <string>
using namespace std;

class Servicio {
	int id;
	int duracion;
	string nombre;
	float precio;
public:

	Servicio() {
		id = 0;
		duracion = 0;
		nombre = "";
		precio = 0.0;
	}
	Servicio(int _id, int _duracion, string _nombre, float _precio) {
		id = _id;
		duracion = _duracion;
		nombre = _nombre;
		precio = _precio;
	}
	int getId() {
		return id;
	}
	int getDuracion() {
		return duracion;
	}
	string getNombre() {
		return nombre;
	}
	float getPrecio() {
		return precio;
	}
	void setPrecio(float _precio) {
		precio = _precio;
	}
};
