/*
 * main.cpp
 *
 *  Created on: 1 de jun de 2016
 *      Author: renan
 */
#include <iostream>
#include <stdlib.h>
#include "Grafo.h"
using namespace std;


void Questao_Seis(){
	Grafo graph = new Grafo();

	graph.adiciona_Vetice("0");
	graph.adiciona_Vetice("1");
	graph.adiciona_Vetice("2");
	graph.adiciona_Vetice("3");
	graph.adiciona_Vetice("4");
	graph.adiciona_Vetice("5");
	graph.adiciona_Vetice("6");
	graph.adiciona_Vetice("7");
	graph.adiciona_Vetice("8");
	graph.adiciona_Vetice("9");

	graph.adiciona_Aresta("0","2",0);
	graph.adiciona_Aresta("0","3",0);
	graph.adiciona_Aresta("1","8",0);
	graph.adiciona_Aresta("1","4",0);
	graph.adiciona_Aresta("2","5",0);
	graph.adiciona_Aresta("3","7",0);
	graph.adiciona_Aresta("3","8",0);
	graph.adiciona_Aresta("4","8",0);
	graph.adiciona_Aresta("5","6",0);
	graph.adiciona_Aresta("6","2",0);
	graph.adiciona_Aresta("7","9",0);
	graph.adiciona_Aresta("3","0",0);
	graph.adiciona_Aresta("9","7",0);

	graph.busca_Profundidade();

	cout << "Adjacencias: " << endl;


}

void Questao_Sete(){}

void Questao_Oito(){}

void Questao_Nove(){
		Grafo graph = new Grafo();

		graph.adiciona_Vetice("0");
		graph.adiciona_Vetice("1");
		graph.adiciona_Vetice("2");
		graph.adiciona_Vetice("3");
		graph.adiciona_Vetice("4");
		graph.adiciona_Vetice("5");
		graph.adiciona_Vetice("6");
		graph.adiciona_Vetice("7");
		graph.adiciona_Vetice("8");
		graph.adiciona_Vetice("9");

		graph.adiciona_Aresta("0","2",0);
		graph.adiciona_Aresta("0","3",0);
		graph.adiciona_Aresta("1","8",0);
		graph.adiciona_Aresta("1","4",0);
		graph.adiciona_Aresta("2","5",0);
		graph.adiciona_Aresta("3","7",0);
		graph.adiciona_Aresta("3","8",0);
		graph.adiciona_Aresta("4","8",0);
		graph.adiciona_Aresta("5","6",0);
		graph.adiciona_Aresta("6","2",0);
		graph.adiciona_Aresta("7","9",0);
		graph.adiciona_Aresta("3","0",0);
		graph.adiciona_Aresta("9","7",0);


	graph.busca_Largura("1");
	graph.imprimir_Grafo("1","9");

};

void Questao_Dez(){}
void Questao_Onze(){}
void Questao_Doze(){}
void Questao_Treze(){}
void Questao_Catorze(){}


int main(){

	cout<< "Grafo implementado em C++" << endl;

	int aux;
		do{

		cout << "\nEscolha uma questao: \n"
			 << "6 Questao	-1-\n"
			 << "7 Questao	-2-\n"
			 << "8 Questao	-3-\n"
			 << "9 Questao	-4-\n"
			 << "10 Questao	-5-\n"
			 << "11 Questao	-6-\n"
			 << "12 Questao	-7-\n"
	         << "13 Questao	-8-\n"
	         << "14 Questao	-9-\n"
	         << "Sair		-0-\n";
	        cout << endl;
			cin >> aux;
			switch (aux){
				case 1:
					system("cls");
					Questao_Seis();
					cout <<"\n";
					break;
				case 2:
					system("cls");

					cout <<"\n";
					break;
				case 3:
					system("cls");

					break;
				case 4:
					system("cls");

					cout <<"\n";
					break;
				case 5:
					system("cls");

					cout <<"\n";
					break;
				case 6:
					system("cls");

					cout <<"\n";
					break;
				case 7:
					system("cls");

					cout <<"\n";
					break;
				case 8:
					system("cls");

					cout <<"\n";
					break;
				case 9:
					system("cls");
					Questao_Nove();
					cout <<"\n";
					break;

	            default:
					cout << "Esclolha Invalida..." << endl;}
		} while ( aux != 0);






return 0;

}

