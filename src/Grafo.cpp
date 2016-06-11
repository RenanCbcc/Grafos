/*
 * Grafo.cpp
 *
 *  Created on: 1 de jun de 2016
 *      Author: renan
 */

#include "Grafo.h"

Grafo::Grafo() {
	// TODO Auto-generated constructor stub

}

int Grafo::numero_Aerstas(){
	return numero_Aresta;
};

int Grafo::numero_Vertices(){
	return numero_vertice;
};

void Grafo::adicionar_Vetice( int v){
	vertice = new Vertice(numero_Vertices++);
}

void Grafo::adicionar_Aresta( Vertice v1,Vertice v2 ){
	if ( v1 == null && v2 == null ){ cout << "Erro"; << endl; break;}
	aresta = new Aresta(v1,v2);
	numero_Aresta++;
}

bool Grafo::esta_vazio(){
	return ( numero_Vertices == 0 );
}

void Grafo::busca_Adjacence( int inicio){

}
void Grafo::busca_Profundidade( int inicio){


}

Grafo::~Grafo() {
	// TODO Auto-generated destructor stub
}

