#include "Grafos.h"
#include <stdio.h>
#include <stdlib.h>

TipoGrafo * Cria_Grafo( int vertices, int grau_max, int ponderado){
	TipoGrafo *gf = ( TipoGrafo *) malloc(sizeof( struct Grafo ));
	if ( gr != NULL)
	{
		int i;
		gf->Vertices = nvertices;
		gf->Grau_Max = grau_max;
		gf->Ponderado = ( ponderado == true ) ? true : false;
		gf->Grau = ( int *) calloc(vertices, sizeof(int));  // Vetor de grau
		gf->Arestas = (int **) malloc( vertices *sizeof(int*)); // Matriz de Arestas e criando pra cada vertice 'i<= vertices' o grau maximo dele;	
		for ( i=1;  i<= vertices; i++)
		{ 
			gf->Arestas[i] = (int*) malloc( grau_max *sizeof(int ));
		}	
			if ( gf->Ponderado )
		{
				gf->Pesos = (float *) malloc( vertices *sizeof(float));
				for ( i=1; i<= vertices; i++)
				{
					gf->Pesos[i] = ( float*) malloc(grau_max *sizeof(float))
				}
		}
	}
  return *gf;
}

void Libera_Grafo( TipoGrafo *gf ){
	if ( gf  != NULL){
		int i;
		for ( i=1;  i<= vertices; i++)
			free ( gf->Arestas[i]);
			free ( gf->Arestas);
			if ( gf->Ponderado){
				for ( i=1;  i<= vertices; i++)
				free ( gf->Pesos[i]);
				free ( gf->Pesos)
				
			}
		}
	}

int Inserir_Aresta( TipoGrafo *gf, int orig, int dest, bool digrafo, float peso){
    if ( gf == NULL )
        return 0;
    if ( orig < 0 || orig > gf->Vertices )
        return 0;
    if ( dest < 0 || dest > gf->Vertices)
    gf->Arestas[orig][gf->Grau[orig]] = dest;
    if ( gf->Ponderado)
        gf->Pesos[orig][gf->Grau[orig]] = dest;
        gf->Grau[orig]++;
    if ( digrafo )
        Inserir_Aresta ( gf,dest,orig,1,peso );
        return 1;
}

int Remove_Aresta( TipoGrafo *gf, int orig, int dest, int digrafo){
    if ( gf == NULL )
        return 0;
    if ( orig < 0 || orig > gf->Vertices )
        return 0;
    if ( dest < 0 || dest > gf->Vertices)
int i=0;
    while( i < gf->Grau[orig] && gf->Arestas[orig][i] != dest){
    i++}
    
}

void Profundidade_Aux( TipoGrafo * gf, int ini, int *visitado){
    int i, cont;
    for ( i=1; i<=gf->Arestas)
        visitado[i] = 0;
        Profundidade_Grafo(gr,ini,visitado,cont)
} 

void Profundidade_Grafo( TipoGrafo * gf, int ini, int *visitado,int cont){
    int i;
    visitado[i] = cont;
    for ( i=1; i<=gf->Grau; i++ ){
        if ( !visitado[gf->Arestas[ini][i]])
            Profundidade_Grafo(gf,gf->Arestas[ini][i],visitado,cont+1)
    }
}

void MenorCaminho_Grafo( TipoGrafo *gf, int ini, int ant, float *dist){
    int i,cont ,vertices, indc, *visitado, aux;
    cont = vertices = gf->Vertices;
    visitado = (int*) malloc(vertices *sizeof(int));
        for ( i=1; i<= vertices; i++){ // vetor auxiliar que inicializa distancia e anteriores;
            ant[i] = -1;
            dist[i]= -1;
            visitado[i]= 0;
        }
    dist[ini] = 0;
    while ( cont > 0){
        aux = MenorCaminho_Aux(dist,visitado,vertices);
        if (aux == -1)
            break;
            visitado[aux] = 1;
            cont --;
    }
    free(visitado);    
}

int MenorCaminho_Aux(float *dist, int *visitado, int Vertices){
    int i, menor = -1, primeiro = 1;
        for (i = 1; i<=vertices; i++){
            if ( dist[i]>=1 && visitado[i]==0){
                if ( primeiro){
                    menor = i;
                    primeiro = 0
                }
                else{
                    if ( dist[menor]> dist[i])
                        menor = i;
                }
            }
                
        }
return menor;
}