/*Algoritmo para simular uma aposta lot�rica. Sortear 6 n�meros
aleat�rios de 0 a 60, ler 6 n�meors e mostrar quantos n�meros sorteados
s�o iguais aos informados */

//decla��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//decla��o das vari�veis
int aposta[6], sorteio[6], i, j, acertos=0;

//declara��o da fun��o principal
main() {
	//estrutura de repeti��o para o sorteio
	srand(time(NULL));
	for(i=0; i<=5; i++) {
		sorteio[i]=rand()%61;
	}
	
	//estrutura de repeti��o para entrada de dados
	for(i=0; i<=5; i++) {
		printf("\nInforme o numero escolhido: ");
		scanf("%i\n", &aposta[i]);
	}
	
	//n�meros sorteados
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
