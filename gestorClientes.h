#pragma once
#define MAX 200
#include "Cliente.h"
class gestorClientes {
	// registrarCliente(), buscarCliente(), listarClientes()
	Cliente clientes[MAX];
	int totalClientes = 0;
public:
	void registrarCliente(Cliente c) {
		clientes[totalClientes] = c;
		totalClientes++;
	}
	Cliente* buscarCliente(string nombre) {
		for (int i = 0;i < totalClientes;i++) {
			if (clientes[i].getNombre() == nombre) {
				return &clientes[i];
			}
		}
		return nullptr;
	}
	Cliente* listarClientes() {
		return clientes;
	}
};
