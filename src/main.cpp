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
	Grafo graph = new Grafo();

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
					Gps();

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


