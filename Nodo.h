#pragma once
#include <cstddef>
template <typename T> // permite usar datos genericos como ser un cliente o un servicio para no crear distintos nodos para lo mismo
class Nodo {
	T dato; // dato generico
	Nodo <T>* siguiente; // puntero al siguiente nodo

public:
	Nodo(T info) {
		dato = info;
		siguiente = NULL;
	}
	T getDato() {
		return dato;
	}
	Nodo<T>* getPuntero() {
		return siguiente;
	}
	void setDato(T info) {
		dato = info;
	}
	void setPuntero(Nodo <T>* sig) {
		siguiente = sig;
	}
	
};