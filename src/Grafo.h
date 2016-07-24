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
	//fun√ßoes Void
	void adicionar_Vertice (); // Feito!
	void remover_Vertice( int identificador); // Feito!
	void adicionar_Aresta( vertice_Origem, vertide_Destino, int peso); // Feito!
	void remover_Aresta( vertice_Origem, vertide_Destino); // Feito!
	void limpar(); // Feito!
	void inicializar_Vertice_Fonte( Grafo graph,Vertice * s ); //Feito!
	void relaxa_Vertice(Vertice* u,Vertice* v,Aresta* w); // Feito!
	void Dijkstra(Grafo graph); //Feito!;
	void ordenaÁ„o_Topologica(); // N„o Feito!
	//==========================================================
	// fun√ßoes Bool
	bool esta_vazio(); // Feito!
	bool buscar_ciclo(); // Nao Feito!
	bool eh_conexo(); // Feito!
	//==========================================================
	// fun√ßoes Busca
	Vertice* buscar_Vertice ( Vertice* Origem ); // Feito!
	Vertice* buscar_Adjacente( int identificador); // Feito!//vertice adj n„o visitado
	Aresta * buscar_Aresta(Vertice* Origem,Vertice* destino) //Feito!
	void buscar_Profundidade(Grafo graph); // Feito!
	void buscar_Profundidade( Vertice* u ); // Quase Feito!
	void buscar_Largura(Grafo graph,Vertice * s); // Quase Feito!
	bool buscar_Hamiltoniano(); // Nao Feito!
	bool buscar_Euleriano(); // Nao Feito!
	//==========================================================

private:
	bool orientado;
	list<Vertice *> lista_Vertices;
	list<Aresta *> lista_Arestas;
};

#endif /* GRAFO_H_ */
