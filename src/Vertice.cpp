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

Vertice::Vertice(  string id ) {
	// TODO Auto-generated constructor stub
	setId( id );
};

bool Vertice::operator<( Vertice& v )
{
	return this->getEstimativa() < v.getEstimativa() ;
}

bool Vertice::operator == ( Vertice& v)
{
    return v.getEstimativa() == this->getEstimativa() ;
}

bool Vertice::operator>( Vertice& v )
{  return this->getEstimativa() > v.getEstimativa(); }


friend ostream &operator<<(ostream &stream, Vertice v)
{
  stream << v.getId() << ' ' << v.getEstimativa()
		  << '('<<v.getImput()<<'/' << v.getOutput() << ')' <<endl ;

  return stream;
}
// funçoes set
//=========================================================
void Vertice::setImput( int in){
	this->imput = in;
};

void Vertice::setOutput( int out){
	this->output = out;
};

void Vertice::setVisitado(bool vis){
	this->visitado = vis;
};

void Vertice::setId(string id){
	this->id = id;
};

void Vertice::setEstimativa(int in){
	this->estimativa = in;
};

void Vertice::setPredecessor( Vertice * u ){
	this->predecessores.push_back(u);
};
//=========================================================

// funçoes get
//=========================================================

int Vertice::getImput(){
	return this->imput;
};

int Vertice::getOutput(){
	return this->output;
};

string Vertice::getId(){
	return this->id;
};

bool Vertice::getVisitado(){
	return this->visitado;
};

int Vertice::getEstimativa(){
	return this->estimativa;
};

Vertice* Vertice::getPredecessor(){
	return this->predecessores.front();
}
//=========================================================

