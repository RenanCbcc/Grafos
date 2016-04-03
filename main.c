#include <stdio.h>
#include "Grafos.h"
int main(int argc, char **argv)
{
	printf("Trabalho de Projeto de Algoritimos 2\n");
	printf("Aluno: Renan Thiago\n");

TipoGrafo *Grafos;

Grafos = Cria_Grafo ( 5, 7 , 0 ) // Numero de Vertices, Grau máxio de cada vertice e poderado.
Inserir_Aresta(Grafos,1,2,1,0); // Recebe um Grafo, um vertice origem & destino, Direcionado ou não e peso.
Inserir_Aresta(Grafos,1,4,1,3);
Inserir_Aresta(Grafos,2,4,1,3);
Inserir_Aresta(Grafos,2,3,1,3);
Inserir_Aresta(Grafos,3,4,1,3);
Inserir_Aresta(Grafos,4,4,1,3);
Inserir_Aresta(Grafos,4,1,1,3);
int vis[5]; // Vetor Auxiliar pra função profundidade.
float dis[5]; // Vetor Auxiliar pra função Distancia.
Profundidade_Aux(Grafos,1,vis); // Recebe um grafo, um vertice inicial e o vetor Auxiliar.

//Remove_Aresta(Grafos,1,4,1);


Libera_Gafos( Grafos);

	return 0;
}
