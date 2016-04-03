#include <stdio.h>
#include <stdlib.h>

typedef struct Grafo{
	int Vertices; // Numero de vertices
	bool Ponderado; // eh ponderado ou nao
	int Grau_Max; // Grau máximo que cada vertice pode ter //quantas arestas posso ter por vértice
	int * * Arestas; // Guarda os vinculos de cada vertices em uma matriz
	float * * Pesos; // 
	int * Grau; // Vetor de grau "pra cada vertice quantas eareste o mesmo pussui";
} TipoGrafo;


TipoGrafo * Cria_Grafo( int vertices, int grau_max, int ponderado);
void Libera_Grafo( TipoGrafo *gf );
int Inserir_Aresta( TipoGrafo *gf, int orig, int dest, int digrafo, float peso);
void Profundidade_Grafo( TipoGrafo * gf, int ini, int *visitado,int cont);
void Profundidade_Aux( TipoGrafo * gf, int ini, int visitado);
void MenorCaminho_Grafo( TipoGrafo * gf, int ini, int *ant, float *dist); // Dijkstra
int MenorCaminho_Aux( float * dist, int *visitado, int vertices);