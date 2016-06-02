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
	Vertice(unsigned int id,int vrt);
	void setVertice( int vrt );
	int getVertice();

	void setVisitado( bool valor);
	bool getVisitado();


private:
	int vertice;
	bool visitado;
	unsigned int id;

};

#endif /* VERTICE_H_ */
