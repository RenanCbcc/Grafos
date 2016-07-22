/*
 * Grafo.cpp
 *
 *  Created on: 1 de jun de 2016
 *      Author: renan
 */

#include "Grafo.h"
using namespace std;

//=======================================================================================

Grafo::Grafo( bool orientado) {
	// TODO Auto-generated constructor stub
	this.orientado = orinetado;
}
//=======================================================================================

int Grafo::numero_Aerstas(){
	return lista_Arestas.size();
};
//=======================================================================================

int Grafo::numero_Vertices(){
	return lista_Vertices.size();
};
//=======================================================================================

void Grafo::adicionar_Vetice(){
	Vertice *vertice = new Vertice( lista_Vertices.size() );
	lista_Vertices.push_back( vertice );
};
//=======================================================================================

void Grafo::remover_Vertice( int identificador){

	list< Aresta *>:: itarator posicao_Aresta = lista_Vertices.begin();
	Vertice* origem;
	Vertice* destino;

	while( posicao_Aresta != lista_Arestas.begin() )
	{
		origem = posicao_Aresta->getOrigem();
		destino = posicao_Aresta->getDestino();
		if ( origem->getId() == id or destino->getId() == id )
			lista_Arestas.erase(posicao_Aresta);

		posicao_Aresta++;
	}

	//lista_Vertices.erase(buscar_Vertice(int identificador));
	//lista_Vertices.remove(int identificador);

};
//=======================================================================================

Vertice* Grafo::buscar_Vertice( int identificador )
{
	Vertice* retorno  = null;
	list< Vertice *>::iterator posicao_Vertice = lista_Vertices.begin();
	while ( posicao_Vertice != lista_Vertices.end() )
	{
	  if ( (posicao_Vertice)->getId() == identificador )
	  {
		 retorno = (*posicao_Vertice);
		 break;}
	  posicao_Vertice++;
	}

   return retorno;
};
//=======================================================================================


void Grafo::adicionar_Aresta( int idOrigem, int idDestino, int peso ){

	Vertice* vertice_Origem = busca_vertice( idOrigem );
	Vertice* vertide_Destino = busca_vertice( idDestino );

	if ( vertice_Origem == null || vertide_Destino )
	{
		cout << "Erro na função injetora"; << endl; break;
	}

	Aresta aresta = new Aresta(vertice_Origem,vertide_Destino, peso);
	numero_Aresta++;
	lista_Arestas.push_back( aresta );
};
//=======================================================================================

void Grafo::remover_Aresta(int idOrigem, int idDestino){

	list< Aresta *>::iterator posicao_Aresta = lista_Aresta.begin();

	while( posicao_Aresta != lista_Arestas.begin() )
	{
			if ( posicao_Aresta->getOrigem() == idOrigem or posicao_Aresta->getDestino() == idDestino )
				lista_Arestas.erase(posicao_Aresta);
			break;
			posicao_Aresta++;
	}

};
//=======================================================================================


bool Grafo::esta_Vazio(){
	return ( lista_Vertices.size() == 0 );
};
//=======================================================================================

bool Grafo::eh_Conexo(){
	if ( esta_Vazio() ){
		return false;
	}

	else
	list<ArestaGrafo *>::iterator posicao_Aresta = lista_Arestas.begin();

		   while ( posicao_Aresta != lista_Arestas.end() ){

		   }

};
//=======================================================================================


void Grafo::buscar_Adjacencia( int identificador){
	Vertice* idAdjacente = NULL;
	   list<ArestaGrafo *>::iterator posicao_Aresta = lista_Arestas.begin();

	   while ( posicao_Aresta != lista_Arestas.end() )
	   {
		  if ( ( (*posicao_Aresta)->getOrigem()->getId() == id )  &&
			   ( (*posicao_Aresta)->getDestino()->getVisitado() == false ))
		  {
			 idAdjacente = buscar_Vertice( (*posicao_Aresta)->getDestino()->getId() );
			 break;
		  }

		  posicao_Aresta++;
	   }

	   return idAdjacente;
};
//=======================================================================================


void Grafo::buscar_Profundidade( int identificador ){
	list<Vertice *>::iterator posicao_vertice = lista_Vertices.begin();
	while ( posicao_vertice != lista_Vertices.end() )
	{
		if ( posicao_vertice.getIsitado() == false ) // verica se o vertice jah foi visitado
		{
			buscar_Profundidade( posicao_vertice ); // método recursivo;
		}
		posicao_vertice++;
	}

};
//=======================================================================================

void Grafo::buscar_Profundidade( Vertice *U){
	U->setVisitado(true)
	U->setImput( tempo + 1 ) // está errado(?)
	Vertice* V = buscar_Adjacencia( U->getId() );
	if ( !V->getVisitado() )
	{
		busca_Profundidade( V );
	}

	U->setOutput( tempo + 1);
};
//=======================================================================================

void Grafo::inicializar_Vertice_Fonte(Grafo graph, Vertice * fonte){
	list<Vertice *>::iterator posicao_vertice = lista_Vertices.begin();
	while ( posicao_vertice != lista_Vertices.end() )
		{
		posicao_vertice->setEstimativa(-9999999);
		}
	fonte->setEstimativa(0);
}

void Grafo::relaxa_Vertice(Vertice* u,Vertice* v,Aresta* w){
	if u->getEstimativa() > v->getEstimativa() + w->getPeso(){
		u->setEstimativa( v->getEstimativa() + w->getPeso() );
		v->setPredecessor(u);
	}

}

void Grafo::Dijkstra(Grafo graph){

}

Grafo::~Grafo() {
	// TODO Auto-generated destructor stub
	lista_Arestas.clear();
	lista_Vertices.clear();
	cout << "Destrutor chamado..." << endl;
};
//=======================================================================================

