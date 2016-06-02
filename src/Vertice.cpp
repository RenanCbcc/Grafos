/*
 * Vertice.cpp
 *
 *  Created on: 1 de jun de 2016
 *      Author: renan
 */

#include "Vertice.h"

Vertice::Vertice( unsigned int id,int vrt) {
	// TODO Auto-generated constructor stub
	this->visitado = false;
	this->vertice = vrt;
	this->id = id;
}

// funções set
//=========================================================
void Vertice::setVertice(int v){
	this->vertice = v;
}


void Vertice::setVisitado(bool vis){
	this->visitado = vis;
}

//=========================================================

// funções get
//=========================================================
int Vertice::getVertice(){
	return this->vertice;
}

bool Vertice::getVisitado(){
	return this->visitado;
}
//=========================================================
