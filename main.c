#include <stdio.h>
#include "vetorial.h"


// função que calcula o produto interno 
// tipo, nome = produto intertno,  parametros,
// produto interno x1*x2+y1*y2


int main()
{

	int tam = 0;
	
	// define o tamanho do vetor 
	printf("\n Digite o tamanho do vetor ");
	scanf("%d", &tam);

	
	
	int vet1[tam], vet2[tam];
	int coordenadas[tam];
	int pontoRet1 [tam], pontoRet2[tam];
	
	printf("\n Digite o Ponto da primeira reta ");
	scanf("%d %d %d", &pontoRet1[0], &pontoRet1[1], &pontoRet1[2]);
	
	printf("\n Digite o Ponto da segunda reta ");
	scanf("%d %d %d", &pontoRet2[0], &pontoRet2[1], &pontoRet2[2]);
	
	
	printf("\n Digite o valor do vetor1 = ");
	// percorre o vetor 1
	for(int i = 0; i<tam; i++){
		scanf("%d",&vet1[i]); // o vetor mostra o valor de cada posicao
	}
	
	printf("\n Digite o valor do vetor2 = ");
		// percorre o vetor 2
	for(int i = 0; i<tam; i++){
		scanf("%d",&vet2[i]); // o vetor mostra o valor de cada posicao
	}
	
	printf("\n A funcao he = %d ", protutoInterno(vet1, vet2, tam));
	printf("\n A norma he = %f ", norma(vet1, tam)); // passsagem por valor 
	produtoVetorial(vet1, vet2, coordenadas); // passagem por referencia 
	
	printf("\n O produto vetorial he = %d  %d  %d ", coordenadas[0],  coordenadas[1], coordenadas[2]);
	printf("\n O produto misto he = %f",produtoMisto(vet1, vet2, pontoRet1, pontoRet2));
	
	
	return 0;
}
