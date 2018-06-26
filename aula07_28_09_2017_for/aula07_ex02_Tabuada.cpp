/*Algoritmo para calcular a tabuada */

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração das variáveis
float tabuada, i;

//declaração da função principal
main()
{
	printf("Informe a tabuada: ");
	scanf("%f", &tabuada);
	
	//Estrutura de repetição
	for (i=1; i<=10; i++)
	{
		printf("%.2f X %.2f = %.2f\n", tabuada, i, tabuada*i);
	}
	system("pause");
}
	
