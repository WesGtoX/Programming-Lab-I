/*Algoritmo para calcular a tabuada */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o das vari�veis
float tabuada, i;

//declara��o da fun��o principal
main()
{
	printf("Informe a tabuada: ");
	scanf("%f", &tabuada);
	
	//Estrutura de repeti��o
	for (i=1; i<=10; i++)
	{
		printf("%.2f X %.2f = %.2f\n", tabuada, i, tabuada*i);
	}
	system("pause");
}
	
