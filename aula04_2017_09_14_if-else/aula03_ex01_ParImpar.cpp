/*Algoritmo para receber um número inteiro e mostrar a mensagem se
é par ou impar */

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração da variável
int numero;

//declaração da função principal
main()
{
	//entrada da função principal
	printf("Informe um numero inteiro: ");
	scanf("%i", &numero);
	
	//estrutura condicional para validar o número
	if(numero == 0)
		printf("\nZERO \n");
	
	else if(numero % 2 == 0)
		printf("\nPAR \n");
	else
		printf("\nIMPAR \n");
	
	
	system("pause");
}
