/* 1. Elaborar um algoritmo utilizando a linguagem C para 
receber 10 números inteiros, calcular e mostrar a média, 
a variância e o desvio padrão. (obrigatório o uso de vetor) */

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//declaração das variáveis
int i, n=0, num[10];
float media, variancia, desvio, soma;

//função principal
main() {
	
	printf("===============================\n");
	printf("== CALCULADORA DESVIO PADRAO ==\n");
	printf("===============================\n\n");
	
	for(i=1; i<=10; i++) {
		printf("Informe o %io. numero: ", i);
		scanf("%i", &num[n]);
		soma+=num[n];
	}

	//cálculo média
	media = soma/10.0;
	
	//cálculo variância
	i=0;
	for(i=1; i<=10; i++) {
		variancia+= pow((num[n] - media), 2)/(10 - 1);
	}
	
	//cálculo desvio padrão
	desvio = sqrt(variancia);

	//saída de dados
	printf("\nMedia.......%.2f", media);
	printf("\nVariancia...%.2f", variancia);
	printf("\nDesvio......%.2f\n\n", desvio);
	
	system("pause");
}

/*
Nome: Wesley de Oliveira Mendes
Cód.: 828.507
Engenharia da Computação
UNAERP
*/
