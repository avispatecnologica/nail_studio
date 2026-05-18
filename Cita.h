#pragma once
#include "Diseno.h"
#include "Servicio.h"
#include <string>
enum estado {
	PENDIENTE, 
	COMPLETADA, 
	CANCELADA
};
class Cita {
	// cliente, servicio, diseño, fecha, hora, estado
	int id;
	string cliente;
	Servicio servicio;
	Diseno diseno;
	string fecha;
	string hora;
	estado estadoCita;
public:

	Cita() {
		id = 0;
		cliente = "";
		fecha = "";
		hora = "";
		estadoCita = PENDIENTE;
	}

	Cita(int _id,string _cliente, Servicio _servicio, Diseno _diseno, int mes, int dia, int minutos, int _hora) {
		id = _id;
		cliente = _cliente;
		servicio = _servicio; // set
		diseno = _diseno; // set
		fecha = convertor_fecha(dia, mes, 2026); // set
		hora = convertor_hora(_hora, minutos); // set
		estadoCita = PENDIENTE; // set
	}
	string convertor_fecha(int dia, int mes, int ano) {
		string fecha_;
		if (dia < 10) {
			fecha_ += "0" + to_string(dia) + "/";
		}
		else {
			fecha_ += to_string(dia) + "/";
		}
		if (mes < 10) {
			fecha_ += "0" + to_string(mes) + "/";
		}
		else {
			fecha_ += to_string(mes) + "/";
		}
		fecha_ += to_string(ano);
		return fecha_;
	}

	string convertor_hora(int hora, int minutos) {
		string hora_;
		if (hora < 10) {
			hora_ += "0" + to_string(hora) + ":";
		}
		else {
			hora_ += to_string(hora) + ":";
		}
		if (minutos < 10) {
			hora_ += "0" + to_string(minutos);
		}
		else {
			hora_ += to_string(minutos);
		}
		return hora_;
	}

	int getId() {
		return id;
	}
	string getCliente() {
		return cliente;
	}

	Servicio getServicio() {
		return servicio;
	}

	Diseno getDiseno() {
		return diseno;
	}

	string getFecha() {
		return fecha;
	}

	string getHora() {
		return hora;
	}

	estado getEstado() {
		return estadoCita;
	}
	void setServicio(Servicio _servicio) {
		servicio = _servicio;
	}
	void setDiseno(Diseno _diseno) {
		diseno = _diseno;
	}
	void setFecha(int dia, int mes, int ano) {
		fecha = convertor_fecha(dia, mes, ano);
	}
	void setHora(int _hora, int minutos) {
		hora = convertor_hora(_hora, minutos);
	}
	void setEstado(estado _estado) {
		estadoCita = _estado;
	}
};