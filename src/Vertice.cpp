/*
 * Vertice.cpp
 *
 *  Created on: 1 de jun de 2016
 *      Author: renan
 */

#include "Vertice.h"

Vertice::Vertice(  int id) {
	// TODO Auto-generated constructor stub
	setVisitado(false);
	setId( id );
}

// fun�oes set
//=========================================================


void Vertice::setVisitado(bool vis){
	this->visitado = vis;
}

void Vertice::setId(int id){
	this->id = id;
}
//=========================================================

// fun�oes get
//=========================================================

bool Vertice::getVisitado(){
	return this->visitado;
}

int Vertice::getId(){
	return this->id;
}
//=========================================================
