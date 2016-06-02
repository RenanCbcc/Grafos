/*
 * Aresta.h
 *
 *  Created on: 1 de jun de 2016
 *      Author: renan
 */
#include "Vertice.h"
#ifndef ARESTA_H_
#define ARESTA_H_

class Aresta {
public:
	Aresta(Vertice *origem, Vertice *destino, int peso);

	Vertice geOrigem();
	Vertice getDestino();
	void setPeso( int p);
	int  getPeso();
private:
	Vertice *origem;
	Vertice *destino;
	int peso;
};

#endif /* ARESTA_H_ */
