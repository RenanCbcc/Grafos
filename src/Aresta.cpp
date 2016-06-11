/*
 * Aresta.cpp
 *
 *  Created on: 1 de jun de 2016
 *      Author: renan
 */

#include "Aresta.h"

Aresta::Aresta(Vertice *origem, Vertice *destino, int peso) {
	// TODO Auto-generated constructor stub
	this->origem = origem;
	this->destino = destino;
	this->peso = peso;

}

// funções get
//=========================================================

Vertice Aresta::getOrigem(){
	return this->origem;
}

Vertice Aresta::getDestino(){
	return this->destino;
}

int Aresta::getPeso(){
	return this->peso;
}
//=========================================================

void Aresta::setPeso(int p){
	this->peso = p;
}
