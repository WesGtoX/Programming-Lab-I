/*Algoritmo para receber o valor de n produtos e mostrar o maior
valor */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

//declara��o das vari�veis
float valor, maior=0;
char resposta;

//declara��o da fun��o principal
main() {
	
	//estrutura de repeti��o para entrada de dados
	do {
		printf("Informe o valor do produto: ");
		scanf("%f", &valor);
		
		//condi��o para encontrar o maior valor
		if(valor > maior)
			maior = valor;
		
		//intera��o com o usu�rio - controle do loop
		printf("Outro valor <s/n>: ");
		resposta = getche();
		
		//Limpa a tela
		system("cls");
	} while (toupper(resposta)=='S');
	
	//sa�da de dados
	printf("O maior valor foi %.2f\n", maior);
	
	system("pause");
}
