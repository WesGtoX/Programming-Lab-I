/*Algoritmo para receber o valor de n produtos e mostrar o maior
valor */

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

//declaraçõo das variáveis
float valor, maior=0;
char resposta;

//declaração da função principal
main() {
	
	//estrutura de repetição para entrada de dados
	do {
		printf("Informe o valor do produto: ");
		scanf("%f", &valor);
		
		//condição para encontrar o maior valor
		if(valor > maior)
			maior = valor;
		
		//interação com o usuário - controle do loop
		printf("Outro valor <s/n>: ");
		resposta = getche();
		
		//Limpa a tela
		system("cls");
	} while (toupper(resposta)=='S');
	
	//saída de dados
	printf("O maior valor foi %.2f\n", maior);
	
	system("pause");
}
