/*
 * Vertice.h
 *
 *  Created on: 1 de jun de 2016
 *      Author: renan
 */

#ifndef VERTICE_H_
#define VERTICE_H_
using namespace std;

class Vertice {
public:
	Vertice( int v);

	void setVisitado( bool valor);
	bool getVisitado();

	void setId(int _id);
	int  getId();


private:

	bool visitado;
	int id;

};

#endif /* VERTICE_H_ */
