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

Grafo::Grafo() {
	// TODO Auto-generated constructor stub
	this.direcionado = true;
	lista_Vertices = new list <Vertices*>;
	lista_Arestas = new list <Arestas*>;
	lista_Arvore = new listlist <Arestas*>;
	pilha_Vertices = new stack < Vertices*>;
};
//=======================================================================================

Grafo::Grafo(bool direcionado) {
	// TODO Auto-generated constructor stub
	this.direcionado = direcionado ;
	lista_Vertices = new list <Vertices*>;
	lista_Arestas = new list <Arestas*>;
	lista_Arvore = new listlist <Arestas*>;
	pilha_Vertices = new stack < Vertices*>;
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

void Grafo::adiciona_Vetice(){
	Vertice *vertice = new Vertice( numero_Vertices() );
	lista_Vertices.push_back( vertice );
};
//=======================================================================================

void Grafo::remove_Vertice( int identificador){

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

	lista_Vertices.erase(buscar_Vertice(int identificador));

};
//=======================================================================================

Vertice* Grafo::busca_Vertice( int identificador )
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


void Grafo::adiciona_Aresta( int idOrigem, int idDestino, int peso ){

	Vertice* origem = busca_vertice( idOrigem );
	Vertice* destino = busca_vertice( idDestino );

	if ( origem == NULL and destino == NULL )
			{
			cout << "Erro na função injetora"; << endl; break;
			}

	else if ( direcionado = false)
	{

			Aresta *aresta = new Aresta(origem,destino, peso);
			lista_Arestas.push_back( aresta );
			Aresta *aresta = new Aresta(destino,origem, peso);
			lista_Arestas.push_back( aresta );
			numero_Aresta++;
	}

	else

	{
		Aresta *aresta = new Aresta(origem,destino, peso);
		numero_Aresta++;
	}	lista_Arestas.push_back( aresta );

};
//=======================================================================================

void Grafo::remove_Aresta(int idOrigem, int idDestino){

	list< Aresta *>::iterator posicao_Aresta = lista_Aresta.begin();

	if ( orientado = false) // verifica se a aresta tem deireção
	{

		while( posicao_Aresta != lista_Arestas.begin() )
		{

		}


	}

	else
	{
		while( posicao_Aresta != lista_Arestas.begin() )
		{
			if ( posicao_Aresta->getOrigem() == idOrigem or posicao_Aresta->getDestino() == idDestino )
				lista_Arestas.erase(posicao_Aresta);
			break;
			posicao_Aresta++;
		}

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
Aresta* Grafo::busca_Aresta(Vertice* Origem,Vertice* destino){

	Aresta* aresta = NULL;
	list<ArestaGrafo *>::iterator posicao_Aresta = lista_Arestas.begin();

	   while ( posicao_Aresta != lista_Arestas.end() )
	   {

		  if (*posicao_Aresta)->getOrigem()->getId() == Origem->getId() )  and
		   ( (*posicao_Aresta)->getDestino()->getId() == destino->getId() ))
		  {
			 aresta = *posicao_Aresta;
			 break;
		  }
		  if(direcionado)
		  {
			  if(*posicao_Aresta)->getOrigem()->getId() == destino->getId() )  and
		   ( (*posicao_Aresta)->getDestino()->getId() ==  Origem->getId() ))

			aresta = *posicao_Aresta;
			break;
		  }
		  posicao_Aresta++;
	   }

	   return aresta;

};
//=======================================================================================

Vertice* Grafo::busca_Adjacencia( Vertice* u){
	Vertice* Adjacente = NULL;
	   list<ArestaGrafo *>::iterator posicao_Aresta = lista_Arestas.begin();

	   while ( posicao_Aresta != lista_Arestas.end() )
	   {
		  if ( ( (*posicao_Aresta)->getOrigem()->getId() == u->getId() )  and
			   ( (*posicao_Aresta)->getDestino()->getVisitado() == false ))
		  {
			 idAdjacente = buscar_Vertice( (*posicao_Aresta)->getDestino()->getId() );
			 break;
		  }
		  if ( !direcionado )
		  {
			  if ( ( (*posicao_Aresta)->getOrigem()->getId() == u->getId() )  and // verificar isso depois
			  	( (*posicao_Aresta)->getDestino()->getVisitado() == false ))
		  }
		  posicao_Aresta++;
	   }

	   return Adjacente;
};
//=======================================================================================

void Grafo::busca_Profundidade(){

	list<Vertice *>::iterator posicao_vertice = lista_Vertices.begin();

	while ( posicao_vertice != lista_Vertices.end() ){
		lista_Vertices->setVisitado(false);
		posicao_vertice++;
	}

	posicao_vertice = lista_Vertices.begin();// volta para posição inicial da lista

	while ( posicao_vertice != lista_Vertices.end() )
	{
		if ( posicao_vertice.getVisitado() == false ) // verica se o vertice jah foi visitado
		{
			buscar_Profundidade( posicao_vertice ); // método recursivo;
		}
		posicao_vertice++;
	}



/*	list<Vertice *>::iterator posicao_vertice = lista_Vertices.begin();
			while ( posicao_vertice != lista_Vertices.end() )
			{
				cout << "Estimativa de [" <<posicao_vertice.getId() <<"] ==> " <<posicao_vertice.getEstimativa << endl;

				if ( posicao_vertice->predecessores.empty() )
				{
					posicao_vertice++;
					break;
				}
				cout << "Predecesores de [" <<posicao_vertice.getId() << "] ==> " << endl;
				for ( int i = 0; posicao_vertice->predecessor.size(); i++  )
				{
					cout << posicao_vertice.getPredecessor();
				}

				posicao_vertice++;

			} */

};

void Grafo::busca_Profundidade( Vertice *u ){ // função que visita recursivamente os vertice
	u->setVisitado(true);
	u->setImput( ++TEMPO  );

	Vertice* v = busca_Adjacencia( u );
		if ( v->getVisitado() == false  )
		{

			v->setPredecessor(u->getId());
			busca_Profundidade( v );
		}
	u->setVisitado(true);
	u->setOutput( ++TEMPO);
};
//=======================================================================================

void Grafo::imprimi_Grafo(int vertice_Origem,int vertice_Destino){

	if ( vertice_Origem == vertice_Destino)
	{
		cout << "[" << vertice_Origem << "]" << endl;
	}

	Vertice * destino = buscar_Vertice(vertice_Destino);

	else if ( destino->predecessores.empty )
	{
		cout << "Não existe caminho de [" << vertice_Origem <<"] para: " << vertice_Destino << endl;
	}

	else
	{
		imprimir_Grafo(vertice_Origem,destino.getPredecessor() )
		cout << "[" << destino.getPredecessor() << "]" << endl;
	}

};
//=======================================================================================

void Grafo::grafo_Transposto(){
	list< Aresta *>::iterator posicao_Aresta = lista_Aresta.begin();
	Vertice * aux_origem;
	Vertice * aux_destino;

		while( posicao_Aresta != lista_Arestas.begin() )
		{
			aux_origem = posicao_Aresta->getOrigem();
			aux_destino = posicao_Aresta->getDestino();
			posicao_Aresta.Aresta(aux_destino,aux_origem,0);
			posicao_Aresta++
		{


};

void Grafo::componemte_Conexo(){
	busca_Profundidade();
	grafo_Transposto();


};

//=======================================================================================

void Grafo::busca_Largura( int vertice_Origem ){
		list<Vertice *>::iterator posicao_vertice = lista_Vertices.begin();
		while ( posicao_vertice != lista_Vertices.end() )
		{
			posicao_vertice->setVisitado(false);
			posicao_vertice->setEstimativa(INFINITO);
		}

	Vertice * fonte = buscar_Vertice(vertice_Origem);
	fonte->setVisitado(true);
	fonte->setEstimativa(0);
	priority_queue< Vertice* , vector<Vertice*>, Comp_Prioridade> Fila;//ordenan vertices por menor prioridade
	Fila.push(fonte);

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
				v->setPredecessor(u->getId());
				Fila.push(v);
			}
		u->setVisitado(true);

		}

};
//=======================================================================================

void Grafo::inicializa_Vertice_Fonte( Vertice * fonte){
	list<Vertice *>::iterator posicao_vertice = lista_Vertices.begin();

	while ( posicao_vertice != lista_Vertices.end() )
		{
		posicao_vertice->setEstimativa(INFINITO);
		posicao_vertice->setVisitado(false);
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

void Grafo::Dijkstra(int vertice_Origem){

	Vertice * fonte = buscar_Vertice(vertice_Origem);
	inicializar_Vertice_Fonte( fonte);
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
		Vertice* v = busca_Adjacencia(u);

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

bool Grafo::Bellman_Ford( Grafo graph, Vertice* fonte){
	inicializar_Vertice_Fonte(graph,fonte);

	for ( int i=0; i< numero_Vertices()-1; i++ )
	{
		list< Aresta *>::iterator posicao_Aresta = lista_Arestas.begin();

		while ( posicao_Aresta != lista_Arestas.end() )
		{
			relaxa_Vertice( (*posicao_Aresta)->getOrigem(),(*posicao_Aresta)->getDestino(), posicao_Aresta );
			posicao_Aresta++;
		}

	}

	list< Aresta *>::iterator posicao_Aresta = lista_Arestas.begin();
	while ( posicao_Aresta != lista_Arestas.end() )
	{
		if (u->getEstimativa() > v->getEstimativa() + w->getPeso())
			{
				return false;
			}
	}
	return true;

};
//=======================================================================================

void arvore_Geradora_Minima( int vertice_Origem){
		Vertice * fonte = buscar_Vertice(vertice_Origem);
		inicializar_Vertice_Fonte( fonte);
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
			Vertice* v = busca_Adjacencia(u);

			if ( v == NULL)
					{
						Fila.pop(); // retiro vertice sem adj da fila
					}

				else
					{
						v->setVisitado(true);
						Aresta* w = busca_Aresta(u,v);
						if( v->getEstimativa() > w->getPeso() )
						{
							v->setPredecessor(u);
							v->setEstimativa( w->getPeso());
						}

					}
		}

		lista_Arvore.push_back(u); // arrumo depois
		cout << "Distancia do Vertice " fonte->getId() "para todos os outros: " << endl;
		list<Vertice *>::iterator posicao_vertice = conjuntoResposta.begin();

		while ( posicao_vertice != conjuntoResposta.end())
		{
			cout << "[ " <<fonte->getId() <<"]------------>["<< posicao_vertice->getId() <<"] : " << posicao_vertice->getEstimativa() << endl;
			posicao_vertice++;
		}

};
//=======================================================================================

bool Grafo::buscar_cicloEuleriano(){
	list< Vertice *>::iterator posicao_vertice = lista_Vertices.begin();

	   const Vertice *origem;
	   const Vertice *destino;

	   while ( posicao_vertice != lista_Vertices.end() )
	   {
		  if ( direcionado )
		  {
			 int contadorOrigem = 0;
			 int contadorDestino = 0;
			 list<ArestaGrafo *>::iterator posicao_Aresta = lista_Arestas.begin();

			 while ( posicao_Aresta != lista_Arestas.end() )
			 {
				origem = (*posicao_Aresta)->getOrigem();
				destino = (*posicao_Aresta)->getDestino();

				if ( (*posicao_vertice)->getId() == origem->getId() )
				{
				   contadorOrigem ++;
				}
				if ( ( (*posicao_vertice)->getId() == destino->getId() ) )
				{
				   contadorDestino ++;
				}
				posicao_Aresta ++;
			 }

			 if ( contadorOrigem != contadorDestino )
			 {
				return false;
			 }
		  }
		  else
		  {
			 int contador = 0;

			 list<ArestaGrafo *>::iterator posicao_Aresta = lista_Arestas.begin();

			 while ( posicao_Aresta != lista_Arestas.end() )
			 {

				origem = (*posicao_Aresta)->getOrigem();
				destino = (*posicao_Aresta)->getDestino();

				if ( ( (*posicao_vertice)->getId() == origem->getId() ) and ( (*posicao_vertice)->getId() == destino->getId() ) )
				{
				   contador = contador + 2;
				}
				else
				{
				   if ( ( (*posicao_vertice)->getId() == origem->getId() ) or ( (*posicao_vertice)->getId() == destino->getId() ) )
				   {
					  contador ++;
				   }
				}
				posicao_Aresta ++;
			 }

			 if ( contador % 2 == 1)
			 {
				return false;
			 }
		}
		  posicao_vertice ++;
	  }
	  return true;
}

bool busca_ciclo(){
	list<Vertice *>::iterator posicao_vertice = lista_Vertices.begin();

		while ( posicao_vertice != lista_Vertices.end() ){
			lista_Vertices->setVisitado(false);
			posicao_vertice++;
		}

		posicao_vertice = lista_Vertices.begin();// volta para posição inicial da lista

		while ( posicao_vertice != lista_Vertices.end() )
		{
			if ( posicao_vertice.getVisitado() == false ) // verica se o vertice jah foi visitado
			{
				buscar_Profundidade( posicao_vertice ); // método recursivo;
			}
			posicao_vertice++;
		}

};
void Grafo::Limpar(){
	//deleta arestas
	   list< Aresta *>::iterator posicao_Aresta = lista_Arestas.begin();

	   while ( posicao_Aresta != lista_Arestas.end() )
	   {
		  delete *posicao_Aresta;
		  *posicao_Aresta = NULL;
		  posicao_Aresta++;
	   }

	   lista_Arestas.clear();

	//deleta nos
	   list< Vertice *>::iterator posicao_vertice = lista_Vertices.begin();

	   while ( posicao_vertice != lista_Vertices.end() )
	   {
		  delete *posicao_vertice;
		  *posicao_vertice = NULL;
		  posicao_vertice++;
	   }

	   lista_Vertices.clear();

};
Grafo::~Grafo() {
	// TODO Auto-generated destructor stub
	lista_Arestas.clear();
	lista_Vertices.clear();
	cout << "Destrutor chamado..." << endl;
};
//=======================================================================================

