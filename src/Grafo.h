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
	Grafo();
	int nArestas();
	int nVertices();
	void setAresta(Vertice v, Vertice w);
	void remAresta(Vertice v, Vertice w);
	bool vazio();
	void limpar();

private:
	bool direcionado;
	list <Vertice*> lVertices;
	list<Aresta *> cArestas;
	Vertice * adjNaoVisitado ( unsigned int idn);


};

#endif /* GRAFO_H_ */
