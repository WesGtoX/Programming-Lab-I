/*Algoritmo para ler 10 n�meros inteiros, calcular a m�dia e mostrar
quantos n�meros s�o iguais ou maiores que a m�dia e quantos s�o menores */

//decla��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o do vetor
int numero[10];

//declara��o da vari�veis
int i, qtdmaior=0, qtdmenor=0, soma=0;
float media;


main() {
	
	//estrutura de repeti��o para entrada de dados
	for(i=0; i<=9; i++) {
		printf("Informe um numero: ");
		scanf("%i", &numero[i]);
		soma+=numero[i];
	}

	//c�lculo da m�dia
	media = soma/10.0;
	
	//encontrar maiores e menores que a m�dia
	for(i=0; i<=9; i++) {
		if(numero[i]>=media) {
			qtdmaior++;
		}
		else
			qtdmenor++;
	}
	//sa�da de dados
	printf("\nHa %i numeros maiores que a media", qtdmaior);
	printf("\nHa %i numeros maiores que a media\n\n", qtdmenor);
	
	system("pause");
}
