/*
 * Vertice.h
 *
 *  Created on: 1 de jun de 2016
 *      Author: renan
 */

#ifndef VERTICE_H_
#define VERTICE_H_
#include<iostream>
#include <vector>
using namespace std;

class Vertice {
public:
	Vertice( string id );
	Vertice();
	void setVisitado( bool valor );
	bool getVisitado();

	void setId(string id);
	string  getId();

	void setImput( int in );
	int getImput();

	void setOutput(int out );
	int getOutput();

	void setEstimativa(int in );
	int  getEstimativa();

	void setPredecessor( Vertice * v);
	Vertice*  getPredecessor();


private:
	vector <Vertice*> predecessores;
	string id;		// identificador do vertice
	int imput; // tempo inicial de busca do vertice para busca em profundidade;
	int output;// tempo final de busca do vertice para busca em profundidade;
	int estimativa; // tempo de um vertice Dijkstra;
	bool visitado;

};

#endif /* VERTICE_H_ */
