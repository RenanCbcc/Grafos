/*
 * Grafo.h
 *
 *  Created on: 1 de jun de 2016
 *      Author: renan
 */
#include "Vertice.h"
#include "Aresta.h"
#include <list> //Para lista de adjacia
#include <queue> //Para Djikstra(?)
#ifndef GRAFO_H_
#define GRAFO_H_

class Grafo {
public:
	Grafo( bool orientado = true);
	int numero_Arestas(); // Feito!
	int numero_Vertices(); // Feito!
	//==========================================================
	//funçoes Void
	void adicionar_Vertice (); // Feito!
	void remover_Vertice( int identificador); // Feito!
	void adicionar_Aresta( vertice_Origem, vertide_Destino, int peso); // Feito!
	void remover_Aresta( vertice_Origem, vertide_Destino); // Feito!
	void limpar(); // Feito!
	void inicializar_Vertice_Fonte( Grafo graph,Vertice * s );
	void relaxa_Vertice();
	void Dijkstra(Grafo graph); //Feito!;
	//==========================================================
	// funçoes Bool
	bool esta_vazio(); // Feito!
	bool existe_ciclo(); // Nao Feito!
	bool eh_conexo(); // Feito!
	bool operator ()( Vertice* u, Vertice* v);
	//==========================================================
	// funçoes Busca
	Vertice* buscar_Vertice ( Vertice* Origem ); // Feito!
	Vertice* buscar_Adjacente( int identificador); // Feito!
	Aresta * buscar_Aresta(Vertice* Origem,Vertice* destino) //Feito!
	void buscar_Profundidade(int identificador); // Nao Feito!
	void buscar_Profundidade( Vertice u ); // Nao Feito!
	void buscar_Largura(int identificador); // Nao Feito!
	bool buscar_Hamiltoniano(); // Nao Feito!
	bool buscar_Euleriano(); // Nao Feito!
	//==========================================================

private:
	bool orientado;
	list<Vertice *> lista_Vertices;
	list<Aresta *> lista_Arestas;
};

#endif /* GRAFO_H_ */
