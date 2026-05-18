#pragma once
#include "Nodo.h"
#include <iostream>
using namespace std;
template <typename T>
class Cola {
	Nodo <T>* inicio;
	Nodo <T>* final;
	int tamano;

public:
	Cola() {
		inicio = NULL;
		final = NULL;
		tamano = 0;
	}
	void encolar(T dato) {
		// Se encola desde el final
		Nodo <T>* nodo = new Nodo <T>(dato);
		if (estaVacia()) {
			inicio = nodo;
		}
		else {
			final->setPuntero(nodo);
		}
		final = nodo;
		tamano++;
	}
	void desencolar() {
		// se desencola del inicio
		if (estaVacia()) {
			cout << "La cola esta vacia"<<endl;
		}
		else {
			Nodo <T>* aux = inicio;
			inicio = inicio->getPuntero();
			delete aux;

			if (inicio == NULL) {
				final = NULL;
			}
			tamano--;
		}
	}
	T verFrente() {
		return inicio->getDato();
	}
	bool estaVacia() {
		return (inicio == NULL);
	}
	int getTamano() {
		return tamano;
	}
};
