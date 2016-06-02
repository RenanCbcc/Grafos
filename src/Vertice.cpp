/*
 * Vertice.cpp
 *
 *  Created on: 1 de jun de 2016
 *      Author: renan
 */

#include "Vertice.h"

Vertice::Vertice(  int id) {
	// TODO Auto-generated constructor stub
	this->visitado = false;
	this->id = id;
}

// funções set
//=========================================================


void Vertice::setVisitado(bool vis){
	this->visitado = vis;
}

void Vertice::setId(int id){
	this->id = id;
}
//=========================================================

// funções get
//=========================================================

bool Vertice::getVisitado(){
	return this->visitado;
}

int Vertice::getId(){
	return this->id;
}
//=========================================================
