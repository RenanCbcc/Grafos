/*
 * Vertice.h
 *
 *  Created on: 1 de jun de 2016
 *      Author: renan
 */

#ifndef VERTICE_H_
#define VERTICE_H_
#include <vector>;
using namespace std;

class Vertice {
public:
	Vertice( int v);
	Vertice();
	void setVisitado( bool valor);
	bool getVisitado();

	void setId(int _id);
	int  getId();

	void setImput( int in);
	int getImput();

	void setOutput(int out);
	int getOutput();

private:

	int id;
	int imput; // tempo inicial de busca do vertice;
	int output;// tempo final de busca do vertice;
	bool visitado;
};

#endif /* VERTICE_H_ */
