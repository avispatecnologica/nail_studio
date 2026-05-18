#pragma once
#include <iostream>
using namespace std;
class Diseno {
	int id;
	string nombre;
	string descripcion;
	string categoria;
public :

	Diseno() {
		id = 0;
		nombre = "";
		descripcion = "";
		categoria = "";
	}

	Diseno(int _id, string _nombre, string _descripcion, string _categoria) {
		id = _id;
		nombre = _nombre;
		descripcion = _descripcion;
		categoria = _categoria;
	}

	int getId() {
		return id;
	}
	string getNombre() {
		return nombre;
	}
	string getDescripcion() {
		return descripcion;
	}
	string getCategoria() {
		return categoria;
	}


};