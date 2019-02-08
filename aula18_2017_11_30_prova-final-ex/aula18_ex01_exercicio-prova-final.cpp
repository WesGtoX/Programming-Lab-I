/* 1. Elaborar um algoritmo utilizando a linguagem C para 
receber 10 n�meros inteiros, calcular e mostrar a m�dia, 
a vari�ncia e o desvio padr�o. (obrigat�rio o uso de vetor) */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//declara��o das vari�veis
int i, n=0, num[10];
float media, variancia, desvio, soma;

//fun��o principal
main() {
	
	printf("===============================\n");
	printf("== CALCULADORA DESVIO PADRAO ==\n");
	printf("===============================\n\n");
	
	for(i=1; i<=10; i++) {
		printf("Informe o %io. numero: ", i);
		scanf("%i", &num[n]);
		soma+=num[n];
	}

	//c�lculo m�dia
	media = soma/10.0;
	
	//c�lculo vari�ncia
	i=0;
	for(i=1; i<=10; i++) {
		variancia+= pow((num[n] - media), 2)/(10 - 1);
	}
	
	//c�lculo desvio padr�o
	desvio = sqrt(variancia);

	//sa�da de dados
	printf("\nMedia.......%.2f", media);
	printf("\nVariancia...%.2f", variancia);
	printf("\nDesvio......%.2f\n\n", desvio);
	
	system("pause");
}

/*
Nome: Wesley de Oliveira Mendes
C�d.: 828.507
Engenharia da Computa��o
UNAERP
*/
