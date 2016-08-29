/*
 * Vertice.cpp
 *
 *  Created on: 1 de jun de 2016
 *      Author: renan
 */

#include "Vertice.h"
Vertice::Vertice(){
	setVisitado(false);
	setImput(0);
	setOutput(0);
};

Vertice::Vertice(  int id ) {
	// TODO Auto-generated constructor stub
	setId( id );
};

// funçoes set
//=========================================================
void Vertice::setImput( int in){
	this.imput = in;
};

void Vertice::setOutput( int out){
	this.out = out;
};

void Vertice::setVisitado(bool vis){
	this->visitado = vis;
};

void Vertice::setId(int id){
	this->id = id;
};

void Vertice::setEstimativa(int in){
	this->estimativa = in;
};

void Vertice::setPredecessor( Vertice * u ){
	predecessores.push_back(u);
};
//=========================================================

// funçoes get
//=========================================================

int Vertice::getImput(){
	return this.imput;
};

int Vertice::getOutput(){
	return this.output;
};

int Vertice::getId(){
	return this->id;
};

bool Vertice::getVisitado(){
	return this.visitado;
};

int Vertice::getEstimativa(){
	return this.estimativa
};

vertice* Vertice::getPredecessor(){
	return predecessores.front();
}
//=========================================================

