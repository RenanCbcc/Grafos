/*
 * Grafo.cpp
 *
 *  Created on: 1 de jun de 2016
 *      Author: renan
 */

#include "Grafo.h"
#include <queue>
#include <stack>
using namespace std;


Grafo::Grafo( bool orientado) {
	// TODO Auto-generated constructor stub
	this.orientado = orinetado;
}

int Grafo::numero_Aerstas(){
	return numero_Aresta;
};

int Grafo::numero_Vertices(){
	return numero_vertice;
};

void Grafo::adicionar_Vetice( int v){
	Vertice *vertice = new Vertice(numero_Vertices++);
	lista_Vertices.push_back( vertice );
}

Vertice* Grafo::busca_vertice( int identificador )
{
	Vertice* retorno  = null;

   list< Vertice *>::iterator posicao_Vertice = lista_Vertices.begin();

   while ( posicao_Vertice != listaNos.end() )
   {
	  if ( (posicao_Vertice)->getId() == identificador )
	  {
		 retorno = (*posicao_Vertice);
		 break;}
   }

   return retorno;
}


void Grafo::adicionar_Aresta( int idOrigem, int idDestino, int peso ){
	Vertice* vertice_Origem = busca_vertice( idOrigem );
	Vertice* vertide_Destino = busca_vertice( idDestino );

	if ( vertice_Origem == null && vertide_Destino ){ cout << "Erro na função injetora"; << endl; break;}
	Aresta aresta = new Aresta(vertice_Origem,vertide_Destino, peso);
	numero_Aresta++;
	lista_Arestas.push_back( aresta );
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

