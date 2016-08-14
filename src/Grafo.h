/*
 * Grafo.h
 *
 *  Created on: 1 de jun de 2016
 *      Author: Renan
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
	void adicionar_Aresta( int vertice_Origem, int vertide_Destino, int peso); // Feito!
	void remover_Aresta( int vertice_Origem, int vertide_Destino); // Feito!
	void limpar(); // Feito!
	void inicializar_Vertice_Fonte( Vertice * s ); //Feito!
	void relaxa_Vertice(Vertice* u,Vertice* v,Aresta* w); // Feito!
	void Dijkstra( int vertice_Origem ); //Feito!;
	void ordenaÁ„o_Topologica(); // N„o Feito!
	void grafo_Transposto(); // N„o feito
	void arvore_Geradora_Minima( int vertice_Origem); // Feito!
	//==========================================================
	// fun√ßoes Bool
	bool esta_vazio(); // Feito!
	bool buscar_ciclo(); // Nao Feito!
	bool eh_conexo(); // Feito!
	bool Bellman_Ford(Grafo graph, Vertice* s); // Feito!
	//==========================================================
	// fun√ßoes Busca
	Vertice* buscar_Vertice ( int vertice_Origem ); // Feito!
	Vertice* buscar_Adjacente( int identificador); // Feito!//vertice adj n„o visitado
	Aresta * buscar_Aresta(Vertice* Origem,Vertice* destino) //Feito!
	void buscar_Profundidade(Grafo graph); // Feito!
	void buscar_Profundidade( Vertice* u ); //Feito!
	void buscar_Largura( int vertice_Origem ); //  Feito!
	bool buscar_Hamiltoniano(); // Nao Feito!
	bool buscar_Euleriano(); // Nao Feito!
	//==========================================================

private:
	bool orientado;
	list<Vertice *> lista_Vertices;
	list<Aresta *> lista_Arestas;
	list<Aresta *> lista_Arvore;
};

#endif /* GRAFO_H_ */
