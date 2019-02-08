#include <stdio.h>
#include <stdlib.h>

//declaração das variaveis
float valor;
int garrafa;

main() {
	//entrada de dados
	printf("Qual a quantidade de garrafas? ");
	scanf("%i", &garrafa);
	
	if(garrafa < 12)
		valor = garrafa * 2.5;
	else
		valor = (garrafa * 2.5) * 0.9;
	
	//saida de dados
	printf("\nO custo total e R$ %.2f\n", valor);
	
	system("pause");
}
