#pragma once
#include "Cola.h"
#include "Cita.h"
class gestorCitas {
	// reservarCita(), cancelarCita(), completarCita(), getColaDia()
	Cola<Cita> colaDia;
public:
	void reservarCita(Cita c) {
		colaDia.encolar(c);
	}
	void cancelarCita(Cita &c) {
		c.setEstado(CANCELADA);

		// de cualquier lugar de la cola
		int contador = 0;
		while (contador < colaDia.getTamano()) {
			if (colaDia.verFrente().getId() == c.getId()) {
				colaDia.desencolar();
			}
			else {
				colaDia.encolar(colaDia.verFrente());
				colaDia.desencolar();
			}
			contador++;
		}
	}
	void completarCita(Cita &c) {
		c.setEstado(COMPLETADA);
		if (!colaDia.estaVacia()) {
			colaDia.desencolar();
		}
		
	}
	Cola<Cita> getColaDia() {
		return colaDia;
	}
};