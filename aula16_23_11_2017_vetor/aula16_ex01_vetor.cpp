/*Algoritmo para ler 10 números inteiros, calcular a média e mostrar
quantos números são iguais ou maiores que a média e quantos são menores */

//declação das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração do vetor
int numero[10];

//declaração da variáveis
int i, qtdmaior=0, qtdmenor=0, soma=0;
float media;


main() {
	
	//estrutura de repetição para entrada de dados
	for(i=0; i<=9; i++) {
		printf("Informe um numero: ");
		scanf("%i", &numero[i]);
		soma+=numero[i];
	}

	//cálculo da média
	media = soma/10.0;
	
	//encontrar maiores e menores que a média
	for(i=0; i<=9; i++) {
		if(numero[i]>=media) {
			qtdmaior++;
		}
		else
			qtdmenor++;
	}
	//saída de dados
	printf("\nHa %i numeros maiores que a media", qtdmaior);
	printf("\nHa %i numeros maiores que a media\n\n", qtdmenor);
	
	system("pause");
}
