/*Elaborar um algoritmo para receber o código, valor e a quantidade
de cada produtos de uma lista de compras e mostrar o valor
total da lista de compras.*/

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //declaração para usar a função getch()
#include <ctype.h> //declaração para usar a função toupper()
//toupper() - converte caractere em maiúsculo.

//declaração das variáveis
int codigo, quant;
float valor, total = 0;
char resposta = 'S';

//declaração da função principal
main() {
	//estrutura de repetição para entrda de dados
	while(toupper(resposta) == 'S') {
		printf("\n=============================\n");
		printf("Informe o codigo do produto: ");
		scanf("%i", &codigo);
		
		printf("Informe a quantidade do produto: ");
		scanf("%i", &quant);
		
		printf("\nInforme o valor do produto: ");
		scanf("%f", &valor);
		
		total+= valor * quant;
		
		printf("\nOutro produto <S/N>: ");
		resposta = getch();
	}
	
	//saída de dados
	printf("\n\nValor total da lista = R$ %.2f\n", total);
	
	system("pause");
}
