#include "vetorial.h"
#include <stdio.h>
#include <math.h> // bibliotema matematica 

int protutoInterno (int vet1[], int vet2[], int tam)
{
	int produto = 0;
	for(int i = 0; i< tam; i++)
	{
		produto += (vet1[i]*vet2[i]);
	}
	
	return produto;
}

float norma (int vet1[], int tam)
{
	int produto = 0;
	float raiz = 0;
	
	// percorre o tamanho para multiplicar a norma 
	for(int i = 0; i< tam; i++)
	{
		produto += (vet1[i]* vet1[i]);
	}
	//sqrt calcula a raiz quadrada do produto
	raiz = sqrt(produto);
	
	return raiz;
}


void produtoVetorial(int vet1[], int vet2[], int coordenadas[])
{
	// 
	int  i = 0, j= 0, k = 0;
	i = (vet1[1]*vet2[2])-(vet1[2]*vet2[1]);
	j = (vet2[0]*vet1[2])-(vet2[2]*vet1[0]);
	k = (vet1[0]*vet2[1])-(vet1[1]*vet2[0]);
	
	// criação das coodenadas 
	coordenadas[0 ] = i;
	coordenadas[1 ] = j;
	coordenadas[2 ] = k;
}

float produtoMisto(int vet1[], int vet2[], int pontoRet1[], int pontoRet2[])
{
	int resPonto [3];
	int coordenadas[3];
	float misto = 0;
	
	resPonto[0] = (pontoRet2[0] - pontoRet1[0]);
	resPonto[1] = (pontoRet2[1] - pontoRet1[1]);
	resPonto[2] = (pontoRet2[2] - pontoRet1[2]);
	
	printf("valores resp %d %d %d ", resPonto[0], resPonto[1], resPonto[2] );
	
	
	produtoVetorial(vet1, vet2, coordenadas);
	
	misto = protutoInterno (resPonto, coordenadas, 3);
	
	return misto;
}


