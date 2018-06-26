/*Algoritmo para simular uma aposta lotérica. Sortear 6 números
aleatórios de 0 a 60, ler 6 númeors e mostrar quantos números sorteados
são iguais aos informados */

//declação das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//declação das variáveis
int aposta[6], sorteio[6], i, j, acertos=0;

//declaração da função principal
main() {
	//estrutura de repetição para o sorteio
	srand(time(NULL));
	for(i=0; i<=5; i++) {
		sorteio[i]=rand()%61;
	}
	
	//estrutura de repetição para entrada de dados
	for(i=0; i<=5; i++) {
		printf("\nInforme o numero escolhido: ");
		scanf("%i\n", &aposta[i]);
	}
	
	//números sorteados
	for(i=0; i<=5; i++) {
		printf("%i  ", sorteio[i]);
	}
	
	//verificar acertos
	for(i=0; i<=5; i++) {
		for(j=0; j<=5; j++) {
			if(aposta[i]==sorteio[j]) {
				acertos++;
			}
		}
	}
	
	printf("\nOcorreram %i acertos\n", acertos);
	
	system("pause");
}
