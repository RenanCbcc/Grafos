/*
 * main.cpp
 *
 *  Created on: 1 de jun de 2016
 *      Author: renan
 */

#include "Grafo.h";
using namespace std;
void main(){
	cout<< "Grafo implementado em C++" << endl;

	int aux;
		do{

		cout << "\nEscolha uma questao: \n"
			 << "6ª Questao 	-1-\n"
			 << "7ª Questao		-2-\n"
			 << "8ª Questao		-3-\n"
			 << "9ª Questao		-4-\n"
			 << "10ª Questao	-5-\n"
			 << "11ª Questao	-6-\n"
			 << "12ª Questao    -7-\n"
	         << "13ª Questao    -8-\n"
	         << "14ª Questao	-9-\n"
	         << "Sair			-0-\n";
	        cout << endl;
			cin >> aux;
			switch (aux){
				case 1:
					system("cls");
					Questao_seis();

					break;
				case 2:
					system("cls");
					Transponder();

					break;
				case 3:
					system("cls");
					Piloto_auto();
					break;
				case 4:
					system("cls");
					DisplayMessage();
					cout <<"\n";
					break;
				case 5:
					system("cls");
					TakeOff();
					cout <<"\n";
					break;
				case 6:
					system("cls");
					ChangeFlight();
					cout <<"\n";
					break;
				case 7:
					system("cls");
					getRadar();
					cout <<"\n";
					break;
				case 8:
					system("cls");
					setPassenger();
					cout <<"\n";
					break;
				case 9:
					system("cls");
					getPassenger();
					cout <<"\n";
					break;

	            default:
					cout << "Esclolha Invalida..." << endl;}
		} while ( aux != 0);






system("pause>0");

};


void Questao_seis(){
	Grafo graph = new Grafo();
	for(int i = 0; i< 9 i++){
		graph.adicionar_Vetice(); // adiciona 9 vertices
	}

	graph.adicionar_Aresta(0,2,0);
	graph.adicionar_Aresta(0,3,0);
	graph.adicionar_Aresta(1,8,0);
	graph.adicionar_Aresta(1,4,0);
	graph.adicionar_Aresta(2,5,0);
	graph.adicionar_Aresta(3,7,0);
	graph.adicionar_Aresta(3,8,0);
	graph.adicionar_Aresta(4,8,0);
	graph.adicionar_Aresta(5,6,0);
	graph.adicionar_Aresta(6,2,0);
	graph.adicionar_Aresta(7,9,0);
	graph.adicionar_Aresta(3,0,0);
	graph.adicionar_Aresta(9,7,0);


	graph.buscar_Profundidade();
};
