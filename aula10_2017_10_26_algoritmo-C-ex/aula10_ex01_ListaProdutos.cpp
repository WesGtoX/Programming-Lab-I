/*Elaborar um algoritmo para receber o c�digo, valor e a quantidade
de cada produtos de uma lista de compras e mostrar o valor
total da lista de compras.*/

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //declara��o para usar a fun��o getch()
#include <ctype.h> //declara��o para usar a fun��o toupper()
//toupper() - converte caractere em mai�sculo.

//declara��o das vari�veis
int codigo, quant;
float valor, total = 0;
char resposta = 'S';

//declara��o da fun��o principal
main() {
	//estrutura de repeti��o para entrda de dados
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
	
	//sa�da de dados
	printf("\n\nValor total da lista = R$ %.2f\n", total);
	
	system("pause");
}
