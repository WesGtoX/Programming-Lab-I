/*Algoritmo para receber um n�mero inteiro e mostrar a mensagem se
� par ou impar */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o da vari�vel
int numero;

//declara��o da fun��o principal
main()
{
	//entrada da fun��o principal
	printf("Informe um numero inteiro: ");
	scanf("%i", &numero);
	
	//estrutura condicional para validar o n�mero
	if(numero == 0)
		printf("\nZERO \n");
	
	else if(numero % 2 == 0)
		printf("\nPAR \n");
	else
		printf("\nIMPAR \n");
	
	
	system("pause");
}
