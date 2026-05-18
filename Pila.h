#pragma once
#include "Nodo.h"
#include <iostream>
using namespace std;
template <typename T>
class Pila {
	Nodo <T>* cima;
	int tamano;
public: 
	Pila() {
		cima = NULL;
		tamano = 0;
	}
	void apilar(T dato) {
		Nodo<T>* aux = new Nodo<T>(dato);

		aux->setPuntero(cima);
		cima = aux;
		tamano++;
	}
	void desapilar() {
		if (estaVacia()) {
			cout << "La pila esta vacia" << endl;
		}
		else {
			Nodo<T>* aux = cima;
			cima = cima->getPuntero();
			delete aux;
			tamano--;
		}

	}
	T verCima() {
		if (estaVacia()) {
			cout << "La pila esta vacia" << endl;
			exit(1); // detiene el programa
		}
		else {
			return cima->getDato();
		}
	}
	bool estaVacia() {
		return (cima == NULL);
	}
	int getTamano() {
		return tamano;
	}
};