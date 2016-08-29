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
#include <stack> // Para achar componemtes conexos
#ifndef GRAFO_H_
#define GRAFO_H_

class Grafo {
public:
	Grafo();
	Grafo(bool direcionado);
	int numero_Arestas(); // Feito!
	int numero_Vertices(); // Feito!
	//==========================================================
	//fun√ßoes Void
	void adiciona_Vetice(); // Feito!
	void remove_Vertice( int identificador); // Feito!
	void adiciona_Aresta( int vertice_Origem, int vertide_Destino, int peso); // Feito!
	void remove_Aresta( int vertice_Origem, int vertice_Destino); // Feito!
	void limpar(); // Feito!
	void inicializa_Vertice_Fonte( Vertice * s ); //Feito!
	void relaxa_Vertice(Vertice* u,Vertice* v,Aresta* w); // Feito!
	void Dijkstra( int vertice_Origem ); //Feito!;
	void ordenaÁ„o_Topologica(); // N„o Feito!
	void grafo_Transposto(); // Feito
	void arvore_Geradora_Minima(); // Feito!
	void imprimi_Grafo(int vertice_Origem, int vertice_Destino); // Quase Feito!;
	//==========================================================
	// fun√ßoes Bool
	bool esta_vazio(); // Feito!
	bool busca_ciclo(); //Feito!
	bool eh_conexo(); // Feito!
	bool Bellman_Ford( Vertice* s); // Feito!
	//==========================================================
	// fun√ßoes Busca
	Vertice* busca_Vertice ( int vertice_Origem ); // Feito!
	Vertice* busca_Adjacente( int identificador); // Feito!//vertice adj n„o visitado
	Aresta * busca_Aresta(Vertice* Origem,Vertice* destino) //Feito!
	void busca_Profundidade(); //Feito!
	Vertice *busca_Profundidade( Vertice *u )
	void busca_Largura(int vertice_Origem); //  Feito!
	bool busca_cicloHamiltoniano(); // Nao Feito!
	bool busca_cicloEuleriano(); // Quase Feito!
	//==========================================================

private:
	bool orientado;
	list<Vertice *> lista_Vertices;
	list<Aresta *> lista_Arestas;
	list<Aresta *> lista_Arvore;
	stack <Vertice*> pilha_Vertices;
};

#endif /* GRAFO_H_ */
