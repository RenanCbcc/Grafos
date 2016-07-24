/*
 * Grafo.cpp
 *
 *  Created on: 1 de jun de 2016
 *      Author: renan
 */

#include "Grafo.h"
#define INFINITO 9999999;
static int TEMPO = 0;
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
			   // terminar de implementar!
		   }

};
//=======================================================================================
Aresta* Grafo::buscar_Aresta(Vertice* Origem,Vertice* destino){
	Aresta* aresta = NULL;

	list<ArestaGrafo *>::iterator posicao_Aresta = lista_Arestas.begin();

	   while ( posicao_Aresta != lista_Arestas.end() )
	   {

		  if (*posicao_Aresta)->getOrigem()->getId() == Origem->getId() )  &&
		   ( (*posicao_Aresta)->getDestino()->getId() == destino->getId() ))
		  {
			 aresta = *posicao_Aresta;
			 break;
		  }

		  posicao_Aresta++;
	   }

	   return aresta;

};
//=======================================================================================

Vertice* Grafo::buscar_Adjacencia( Vertice* u){
	Vertice* Adjacente = NULL;
	   list<ArestaGrafo *>::iterator posicao_Aresta = lista_Arestas.begin();

	   while ( posicao_Aresta != lista_Arestas.end() )
	   {
		  if ( ( (*posicao_Aresta)->getOrigem()->getId() == u->getId() )  &&
			   ( (*posicao_Aresta)->getDestino()->getVisitado() == false ))
		  {
			 idAdjacente = buscar_Vertice( (*posicao_Aresta)->getDestino()->getId() );
			 break;
		  }

		  posicao_Aresta++;
	   }

	   return Adjacente;
};
//=======================================================================================

void Grafo::buscar_Profundidade( Grafo graph ){
	list<Vertice *>::iterator posicao_vertice = graph.lista_Vertices.begin();

	while ( posicao_vertice != lista_Vertices.end() ){
		lista_Vertices->setVisitado(false);
		posicao_vertice++;
	}

	int Tempo = 0;
	posicao_vertice = graph.lista_Vertices.begin();// volta para posição inicial da lista

	while ( posicao_vertice != lista_Vertices.end() )
	{
		if ( posicao_vertice.getVisitado() == false ) // verica se o vertice jah foi visitado
		{
			buscar_Profundidade( posicao_vertice ); // método recursivo;
		}
		posicao_vertice++;
	}

};

void Grafo::buscar_Profundidade( Vertice *u ){ // função que visita recursivamente os vertice
	u->setVisitado(true);
	u->setImput( ++TEMPO  );

	Vertice* v = buscar_Adjacencia( u );
		if ( v->getVisitado() == false  )
		{

			v->setPredecessor(u)
			busca_Profundidade( v );
		}
	u->setVisitado(true);
	u->setOutput( ++TEMPO);
};
//=======================================================================================

void Grafo::buscar_Largura(Grafo graph,Vertice * fonte){
	list<Vertice *>::iterator posicao_vertice = graph.lista_Vertices.begin();
		while ( posicao_vertice != lista_Vertices.end() )
		{
			posicao_vertice->setVisitado(false);
			posicao_vertice->setEstimativa(INFINITO);
		}

	s->setVisitado(true);
	s->setEstimativa(0);
	priority_queue< Vertice* , vector<Vertice*>, Comp_Prioridade> Fila;//ordenan vertices por menor prioridade
	Fila.push(s);

	while( !Fila.empty() )
		{
			Vertice* u = Fila.top(); // recebe o primeiro elemento da fila
			Vertice* v = busca_Adjacente(u); // função retorna NULL se não existe adj
			if ( v == NULL){
				Fila.pop(); // retira o primeiro elemento da fila
			}
			else
			{
				v->setVisitado(true);
				v->getEstimativa( ++TEMPO);
				v->setPredecessor(u);
				Fila.push(v);
			}
		u->setVisitado(true);

		}

	cout << "Distancia do Vertice " fonte->getId() "para todos os outros: " << endl;
		list<Vertice *>::iterator posicao_vertice = conjuntoResposta.begin();

		while ( posicao_vertice != conjuntoResposta.end())
		{
			// imprimir também a lista de predecessores de cada vertice
			cout << "[ " <<fonte->getId() <<"]------------>["<< posicao_vertice->getId() <<"] : " << posicao_vertice->getEstimativa() << endl;
			posicao_vertice++;
		}


};
//=======================================================================================


void Grafo::inicializar_Vertice_Fonte(Grafo graph, Vertice * fonte){
	list<Vertice *>::iterator posicao_vertice = graph.lista_Vertices.begin();

	while ( posicao_vertice != lista_Vertices.end() )
		{
		posicao_vertice->setEstimativa(INFINITO);
		}
	fonte->setEstimativa(0);
};

void Grafo::relaxa_Vertice(Vertice* u,Vertice* v,Aresta* w){

	if (u->getEstimativa() > v->getEstimativa() + w->getPeso())
	{
		u->setEstimativa( v->getEstimativa() + w->getPeso() );
		v->setPredecessor(u);
	}

};

struct Comp_Prioridade
{
	bool operator()( Vertice* u, Vertice* v)
	{
		return u->getEstimativa() > u->getEstimativa();
	}
};

void Grafo::Dijkstra(Grafo graph,Vertice* fonte){

	inicializar_Vertice_Fonte(graph,fonte);

	list < Vertice *> conjuntoResposta;

	priority_queue< Vertice* , vector<Vertice*>, Comp_Prioridade> Fila; // cria a fila de prioridade

	list<Vertice *>::iterator posicao_vertice = lista_Vertices.begin();

	while ( posicao_vertice != lista_Vertices.end() )
		{
			Fila.push_back(posicao_vertice); // insere todos os vertices na fila de prioridade
			posicao_vertice++;
		}

	while( ! Fila.empty() )

	{
		Vertice* u = Fila.top;
		conjuntoResposta.push_back(u); //lista
		Vertice* v = buscar_Adjacencia(u);

		if ( v == NULL)
				{
					Fila.pop(); // retiro vertice sem adj da fila
				}

			else
				{
					v->setVisitado(true);

					relaxa_Vertice( u, v, buscar_Aresta(u,v) );

				}
	}

	cout << "Distancia do Vertice " fonte->getId() "para todos os outros: " << endl;
	list<Vertice *>::iterator posicao_vertice = conjuntoResposta.begin();

	while ( posicao_vertice != conjuntoResposta.end())
	{
		cout << "[ " <<fonte->getId() <<"]------------>["<< posicao_vertice->getId() <<"] : " << posicao_vertice->getEstimativa() << endl;
		posicao_vertice++;
	}
};
//=======================================================================================

Grafo::~Grafo() {
	// TODO Auto-generated destructor stub
	lista_Arestas.clear();
	lista_Vertices.clear();
	cout << "Destrutor chamado..." << endl;
};
//=======================================================================================

