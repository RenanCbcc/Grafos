/*
 * Grafo.h
 *
 *  Created on: 1 de jun de 2016
 *      Author: renan
 */
#include "Vertice.h"
#include "Aresta.h"
#include <list>
#ifndef GRAFO_H_
#define GRAFO_H_

class Grafo {
public:
	Grafo( bool orientado = false);
	int numero_Arestas();
	int numero_Vertices();
	Vertice retorna_Vertice(int v);
	//==========================================================
	//funçoes Void
	void adicionar_Vertice (int identificador);
	void adicionar_Aresta(Vertice v, Vertice w, int peso);
	void remove_Aresta(Vertice v, Vertice w);
	void limpar();
	//==========================================================
	// funçoes Bool
	bool existe_Aresta(Vertice v, Vertice w,int peso);
	bool esta_vazio();
	bool existe_ciclo();
	bool eh_conexo();
	//==========================================================
	// funçoes Busca
	Vertice busca_vertice ( Vertice v );
	void busca_Adjacente( int inicio);
	void busca_Profundidade(int inicio);
	void busca_Largura(int inicio);
	//==========================================================

private:
	Aresta	aresta;
	Vertice vertice;
	int numero_Vertices = 0;
	int numero_Arestas = 0;
	bool orientado;
	list<Vertice *> lista_Vertices;
	list<Aresta *> lista_Arestas;
};

#endif /* GRAFO_H_ */
