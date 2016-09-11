/*
 * Grafo.cpp
 *
 *  Created on: 1 de jun de 2016
 *      Author: renan
 */

#include "Grafo.h"
#define static int INFINITO = 9999999;
static int TEMPO = 0;
using namespace std;

//=======================================================================================

Grafo::Grafo() {
	// TODO Auto-generated constructor stub
	this->direcionado = true;
	};
//=======================================================================================

Grafo::Grafo(bool direcionado) {
	// TODO Auto-generated constructor stub
	this->direcionado = direcionado ;
};

//=======================================================================================

int Grafo::numero_Arestas(){
	return this->lista_Arestas.size();
};
//=======================================================================================

int Grafo::numero_Vertices(){
	return lista_Vertices.size();
};
//=======================================================================================

void Grafo::adiciona_Vetice( string identificador ){
	Vertice *vertice = new Vertice( identificador );
	lista_Vertices.push_back( vertice );
};
//=======================================================================================

void Grafo::remove_Vertice( string identificador){

	list< Aresta* >::iterator posicao_Aresta = this->lista_Arestas.begin();
	Vertice* origem;
	Vertice* destino;

	while( posicao_Aresta != this->lista_Arestas.end() )
	{
		origem = (*posicao_Aresta)->getOrigem();
		destino = (*posicao_Aresta)->getDestino();
		if ( origem->getId() == identificador or destino->getId() == identificador )
			lista_Arestas.erase(posicao_Aresta);

		posicao_Aresta++;
	}

	this->busca_Vertice(identificador);

};
//=======================================================================================

Vertice* Grafo::busca_Vertice( string identificador )
{
	Vertice* retorno;
	list< Vertice *>::iterator posicao_Vertice = lista_Vertices.begin();
	while ( posicao_Vertice != lista_Vertices.end() )
	{
	  if ( (*posicao_Vertice)->getId() == identificador )
	  {
		 retorno = (*posicao_Vertice);
		 break;}
	  posicao_Vertice++;
	}

   return retorno;
};
//=======================================================================================


void Grafo::adiciona_Aresta( string vertice_Origem, string vertice_Destino, int peso ){

	Vertice* origem = busca_Vertice( vertice_Origem );
	Vertice* destino = busca_Vertice( vertice_Destino );

	Aresta *aresta = new Aresta(origem,destino, peso);
	this->lista_Arestas.push_back(aresta);

	if ( direcionado == false)
	{
		Aresta *aresta = new Aresta(destino,origem, peso);
		lista_Arestas.push_back( aresta );
	}


};
//=======================================================================================

void Grafo::remove_Aresta( string vertice_Origem, string vertice_Destino){

	Vertice *origem;
	Vertice *destino;
	std::list<Aresta*>::iterator posicao_Aresta = this->lista_Arestas.begin();

	   while ( posicao_Aresta != lista_Arestas.end() )
	   {
		  origem = (*posicao_Aresta)->getOrigem();
		  destino = (*posicao_Aresta)->getDestino();

		  if ( origem->getId()  == vertice_Origem  and  destino->getId() == vertice_Destino   )
		  {
			 delete *posicao_Aresta;
			 *posicao_Aresta = NULL;
	 		 lista_Arestas.erase( posicao_Aresta );
		  }

		  posicao_Aresta++;
	   }

	   if ( this->direcionado == false )
	   {

		   std::list<Aresta*>::iterator posicao_Aresta = this->lista_Arestas.begin();


			   while ( posicao_Aresta != lista_Arestas.end() )
			   {
				  origem = (*posicao_Aresta)->getOrigem();
				  destino = (*posicao_Aresta)->getDestino();

				  if ( destino->getId() == vertice_Destino and origem->getId()  == vertice_Origem  )
				  {
					 delete *posicao_Aresta;
					 *posicao_Aresta = NULL;
			 		 lista_Arestas.erase( posicao_Aresta );
				  }

				  posicao_Aresta++;
			   }




	   }


};
//=======================================================================================


bool Grafo::esta_Vazio(){
	return ( this->lista_Vertices.size() == 0 );
};
//=======================================================================================

bool Grafo::eh_Conexo(){
	if ( esta_Vazio() ){
		return false;
	}

	else
	{
	list< Aresta *>::iterator posicao_Aresta = lista_Arestas.begin();

		   while ( posicao_Aresta != this->lista_Arestas.end() ){
			   // terminar de implementar!
		   }
	return true;
	}
};
//=======================================================================================
Aresta* Grafo::busca_Aresta(Vertice* Origem,Vertice* destino){

	Aresta* aresta = NULL;
	list< Aresta *>::iterator posicao_Aresta = this->lista_Arestas.begin();

	   while ( posicao_Aresta != lista_Arestas.end() )
	   {

		  if ( (*posicao_Aresta)->getOrigem()->getId() == Origem->getId()   and
		    (*posicao_Aresta)->getDestino()->getId() == destino->getId() )
		  {
			 aresta = *posicao_Aresta;
			 break;
		  }
		  if(direcionado)
		  {
			  if ( (*posicao_Aresta)->getOrigem()->getId() == destino->getId()   and
		   ( (*posicao_Aresta)->getDestino()->getId() ==  Origem->getId() ) )

			aresta = *posicao_Aresta;
			break;
		  }
		  posicao_Aresta++;
	   }

	   return aresta;

};
//=======================================================================================

Vertice* Grafo::busca_Adjacente( Vertice* u){
		Vertice* Adjacente = NULL;
	   list< Aresta *>::iterator posicao_Aresta = this->lista_Arestas.begin();

	   while ( posicao_Aresta != lista_Arestas.end() )
	   {
		  if ( ( (*posicao_Aresta)->getOrigem()->getId() == u->getId() )  and
			   ( (*posicao_Aresta)->getDestino()->getVisitado() == false ))
		  {
			  Adjacente = this->busca_Adjacente( (*posicao_Aresta)->getDestino());
			 break;
		  }
		  if ( !direcionado )
		  {
			  if ( ( (*posicao_Aresta)->getDestino()->getId() == u->getId() )  and // verificar isso depois
			  	( (*posicao_Aresta)->getOrigem()->getVisitado() == false ))

			Adjacente = this->busca_Adjacente((*posicao_Aresta)->getOrigem());
			break;
		  }
		  posicao_Aresta++;
	   }

	   return Adjacente;
};
//=======================================================================================

void Grafo::busca_Profundidade(){

	list<Vertice *>::iterator posicao_vertice = this->lista_Vertices.begin();

	while ( posicao_vertice != lista_Vertices.end() )
	{
		(*posicao_vertice)->setVisitado(false);
		posicao_vertice++;
	}

	posicao_vertice = lista_Vertices.begin();// volta para posição inicial da lista

	while ( posicao_vertice != lista_Vertices.end() )
	{
		if ( (*posicao_vertice)->getVisitado() == false ) // verica se o vertice jah foi visitado
		{
			cout << "Visitando o vertice " << (*posicao_vertice)->getId() << endl;
			this->busca_Profundidade((*posicao_vertice)); // método recursivo;
		}
		posicao_vertice++;
	}


};

void Grafo::busca_Profundidade(Vertice *u){ // função que visita recursivamente os vertice
	u->setVisitado(true);
	u->setImput( ++TEMPO  );

	Vertice* v = this->busca_Adjacente( u );
		if ( v->getVisitado() == false  )
		{

			v->setPredecessor(u);
			busca_Profundidade( v );
		}
	u->setVisitado(true);
	u->setOutput( ++TEMPO);
};
//=======================================================================================

void Grafo::imprimir_Grafo( string vertice_Origem, string vertice_Destino){

	if ( vertice_Origem == vertice_Destino)
	{
		cout << "[" << vertice_Origem << "]" << endl;
	}

	Vertice* destino = busca_Vertice(vertice_Destino);


	if ( destino->getPredecessor() )
	{
		cout << "Não existe caminho de [" << vertice_Origem <<"] para: " << vertice_Destino << endl;
	}

	else
	{
		imprimir_Grafo( vertice_Origem, destino->getPredecessor()->getId() );
		cout << "[" << destino->getPredecessor() << "]" << endl;
	}

};
//=======================================================================================

void Grafo::grafo_Transposto(){
	list< Aresta *>::iterator posicao_Aresta = this->lista_Arestas.begin();
	Vertice * aux_origem;
	Vertice * aux_destino;

		while( posicao_Aresta != lista_Arestas.begin() )
		{
			aux_origem = (*posicao_Aresta)->getOrigem();
			aux_destino = (*posicao_Aresta)->getDestino();
			(*posicao_Aresta)->setOrigem(aux_destino);
			(*posicao_Aresta)->setDestino(aux_origem);
			posicao_Aresta++;



		}
};


//=======================================================================================

void Grafo::busca_Largura( string vertice_Origem ){

	list< Vertice*>::iterator posicao_vertice = this->lista_Vertices.begin();

	while ( posicao_vertice != lista_Vertices.end() )
		{
			(*posicao_vertice)->setVisitado(false);
			(*posicao_vertice)->setEstimativa(INFINITO);
			posicao_vertice++;
		}

	Vertice * fonte = this->busca_Vertice(vertice_Origem);
	fonte->setVisitado(true);
	fonte->setEstimativa(0);


	priority_queue<Vertice*> queue;//ordenan vertices por menor prioridade


	while( queue.empty() )
		{
			Vertice* u = queue.top(); // recebe o primeiro elemento da fila
			Vertice* v = busca_Adjacente(u); // função retorna NULL se não existe adj
			if ( v == NULL)
			{
				queue.pop(); // retira o primeiro elemento da fila
			}
			else
			{
				v->setVisitado(true);
				v->setEstimativa(++TEMPO);
				v->setPredecessor(u);
				queue.push(v);
			}
		u->setVisitado(true);

		}

}
//=======================================================================================

void Grafo::inicializa_Vertice_Fonte( Vertice * fonte){
	list<Vertice *>::iterator posicao_vertice = lista_Vertices.begin();

	while ( posicao_vertice != lista_Vertices.end() )
		{
		(*posicao_vertice)->setEstimativa(INFINITO);
		(*posicao_vertice)->setVisitado(false);
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


void Grafo::Dijkstra( string vertice_Origem){

	Vertice * fonte = this->busca_Vertice(vertice_Origem);
	this->inicializa_Vertice_Fonte( fonte);
	list < Vertice *> conjuntoResposta;
	priority_queue< Vertice*> queue; // cria a fila de prioridade
	list<Vertice *>::iterator posicao_vertice = lista_Vertices.begin();

	while ( posicao_vertice != lista_Vertices.end() )
		{
			queue.push( (*posicao_vertice)); // insere todos os vertices na fila de prioridade
			posicao_vertice++;
		}

	while( !queue.empty() )

	{
		Vertice* u = queue.top();
		conjuntoResposta.push_back(u); //lista
		Vertice* v = this->busca_Adjacente(u);

		if ( v == NULL)
				{
				queue.pop(); // retiro vertice sem adj da fila
				}

			else
				{
					v->setVisitado(true);
					Aresta* w = this->busca_Aresta(u,v);
					relaxa_Vertice( u, v, w );
				}
	}

	cout << "Distancia do Vertice " <<fonte->getId() <<"para todos os outros: " << endl;
	list<Vertice *>::iterator posicao_iterador = conjuntoResposta.begin();

	while ( posicao_iterador != conjuntoResposta.end())
	{

		cout << "[ " <<fonte->getId() <<"]------------>["<< (*posicao_iterador)->getId() <<"] : " << (*posicao_iterador)->getEstimativa() << endl;
		posicao_iterador++;
	}
};
//=======================================================================================

bool Grafo::Bellman_Ford(Vertice* fonte){
	this->inicializa_Vertice_Fonte(fonte);

	for ( int i=0; i< numero_Vertices()-1; i++ )
	{
		list< Aresta *>::iterator posicao_Aresta = lista_Arestas.begin();

		while ( posicao_Aresta != lista_Arestas.end() )
		{
			Vertice* u = (*posicao_Aresta)->getOrigem();
			Vertice* v = (*posicao_Aresta)->getDestino();

			this->relaxa_Vertice( u, v, (*posicao_Aresta) );
			posicao_Aresta++;
		}

	}

	list< Aresta *>::iterator posicao_Aresta = lista_Arestas.begin();
	while ( posicao_Aresta != lista_Arestas.end() )
	{
		Vertice* u = (*posicao_Aresta)->getOrigem();
		Vertice* v = (*posicao_Aresta)->getDestino();

		if (u->getEstimativa() > v->getEstimativa() + (*posicao_Aresta)->getPeso() )
			{
				return false;
			}
	}
	return true;

}

//=======================================================================================
void Grafo::arvore_Geradora_Minima( string vertice_Origem ){

		Vertice* fonte = this->busca_Vertice(vertice_Origem);
		this->inicializa_Vertice_Fonte(fonte);
		list<Vertice*>::iterator posicao_vertice = this->lista_Vertices.begin();
		priority_queue< Vertice*> queue; // cria a fila de prioridade
		this->lista_Vertices.sort();

		while ( posicao_vertice != lista_Vertices.end() )
				{
					queue.push( (*posicao_vertice)); // insere todos os vertices na fila de prioridade
					posicao_vertice++;
				}


		while( !queue.empty() )

			{
				Vertice* u = queue.top();
				Vertice* v = this->busca_Adjacente(u);

			if ( v == NULL)
					{
					queue.pop(); // retiro vertice sem adj da fila
					}

				else
					{
						v->setVisitado(true);
						Aresta* w = this->busca_Aresta(u,v);
						if( v->getEstimativa() > w->getPeso() )
						{
							v->setPredecessor(u);
							v->setEstimativa( w->getPeso());
						}

					}
		}

		cout << "Árvore Geradora Mínima "<< endl;
		std::list<Aresta*>::iterator posicao_Aresta = this->lista_Arvore.begin();

		while( posicao_Aresta != this->lista_Arvore.end() )
		{
			cout << "[ " <<(*posicao_Aresta)->getOrigem()->getId() <<"]------------>["<< (*posicao_Aresta)->getDestino()->getId() << endl;
			posicao_vertice++;
		}

};
//=======================================================================================

bool Grafo::busca_cicloEuleriano(){
	list< Vertice *>::iterator posicao_vertice = this->lista_Vertices.begin();

	   Vertice *origem;
	   Vertice *destino;

	   while ( posicao_vertice != lista_Vertices.end() )
	   {
		  if ( direcionado )
		  {
			 int contadorOrigem = 0;
			 int contadorDestino = 0;
			 list<Aresta*>::iterator posicao_Aresta = this->lista_Arestas.begin();

			 while ( posicao_Aresta != lista_Arestas.end() )
			 {
				origem = (*posicao_Aresta)->getOrigem();
				destino = (*posicao_Aresta)->getDestino();
						string a,b;

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

			 list<Aresta*>::iterator posicao_Aresta = lista_Arestas.begin();

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

bool Grafo::busca_ciclo(){
		std::list<Vertice*>::iterator posicao_vertice = this->lista_Vertices.begin();

		while( posicao_vertice != this->lista_Vertices.end() )
		{
			(*posicao_vertice)->setVisitado(false);
			posicao_vertice++;
		}

		posicao_vertice = lista_Vertices.begin();// volta para posição inicial da lista

		while ( posicao_vertice != lista_Vertices.end() )
		{
			if ( (*posicao_vertice)->getVisitado() == false ) // verica se o vertice jah foi visitado
			{
				this->busca_Profundidade((*posicao_vertice)); // método recursivo;
			}
			posicao_vertice++;
		}
	return true;
};

void Grafo::limpar_Grafo(){
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

Grafo::~Grafo(){
	// TODO Auto-generated destructor stub
	lista_Arestas.clear();
	lista_Vertices.clear();
	cout << "Destrutor chamado..." << endl;

};
//=======================================================================================
