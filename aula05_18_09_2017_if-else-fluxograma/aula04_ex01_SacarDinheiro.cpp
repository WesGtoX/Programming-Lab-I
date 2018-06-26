//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração das variáveis
int valor, conta;

//declaração da função principal
main()
{
	//entrada de dados
	conta = 2500;
	
	printf("Digite o valor a ser retirado: ");
	scanf("%i", &valor);
	
	if(valor <= conta)
		printf("\nRetire o dinheiro no local indicado\n");
	else
		printf("\nSaldo insuficiente\n");
		
	conta = conta - valor;
	printf("\nSeu saldo e de: %i\n", conta);
		
	system("pause");
}
