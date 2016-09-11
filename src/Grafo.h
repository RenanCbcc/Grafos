/*
 * Grafo.h
 *
 *  Created on: 1 de jun de 2016
 *      Author: Renan
 */
#include "Vertice.h"
#include "Aresta.h"
#include <iostream>
#include <string>
#include <list> //Para lista de adjacia
#include <queue> //Para Djikstra(?)
#include <stack> // Para achar componemtes conexos
#ifndef GRAFO_H_
#define GRAFO_H_

class Grafo {
public:
	Grafo();
	~Grafo();
	Grafo(bool direcionado);
	int numero_Arestas(); // Feito!
	int numero_Vertices(); // Feito!
	//==========================================================
	//funçoes Void
	void adiciona_Vetice(string identificador); // Feito!
	void remove_Vertice( string identificador); // Feito!
	void adiciona_Aresta( string vertice_Origem, string vertide_Destino, int peso); // Feito!
	void remove_Aresta( string vertice_Origem, string vertice_Destino); // Feito!
	void inicializa_Vertice_Fonte( Vertice * s ); //Feito!
	void relaxa_Vertice(Vertice* u,Vertice* v,Aresta* w); // Feito!
	void Dijkstra( string vertice_Origem ); //Feito!;
	void grafo_Transposto(); // Feito
	void arvore_Geradora_Minima( string vertice_Origem ); // Feito!
	void imprimir_Grafo(string vertice_Origem, string vertice_Destino); // Quase Feito!;
	void componemte_Conexo(); // Quase feito;
	void limpar_Grafo(); // feito
	//==========================================================
	// funçoes Bool
	bool esta_Vazio(); // Feito!
	bool busca_ciclo(); //Feito!
	bool eh_Conexo(); // Feito!
	bool Bellman_Ford( Vertice* s); // Feito!
	//==========================================================
	// funçoes Busca
	Vertice* busca_Vertice ( string vertice_Origem ); // Feito!
	Vertice* busca_Adjacente( Vertice *u ); // Feito!//vertice adj n�o visitado
	Aresta * busca_Aresta(Vertice* Origem,Vertice* destino); //Feito!
	void busca_Profundidade(void); //Feito!
	void busca_Profundidade( Vertice *u );
	void busca_Largura(string vertice_Origem); //  Feito!
	bool busca_cicloHamiltoniano(); // Nao Feito!
	bool busca_cicloEuleriano(); // Quase Feito!
	//==========================================================

private:
	bool direcionado;
	list <Vertice *> lista_Vertices;
	list <Aresta *> lista_Arestas;
	list <Aresta *> lista_Arvore;
	stack <Vertice*> pilha_Vertices;

};

#endif /* GRAFO_H_ */
