/*Algoritmo para ler a idade de 6 pessoas e mostrar o % de pessoas
que possuem idade maior ou igual a 18 anos */

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração das variáveis
int idade, i, total18 = 0;

//declaração da função principal
main()
{	
	//Estrutura de repetição
	for (i=1; i<=6; i++)
	{
		printf("Informe a idade: ");
		scanf("%i", &idade);

		if (idade >= 18)
			total18++;
	}
	//saída de dados
	printf("\nHa %.2f%% de pessoas com 18 anos ou mais\n", float(total18)/6*100);
	
	system("pause");
}
	
