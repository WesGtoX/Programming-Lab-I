//declaração de variáveis
#include <stdio.h>
#include <stdlib.h>

//declaração das variáveis
float valor, newvalor;
char veiculo[20], marca [20]; //string caracteres

//declaração da função principal
main()
{
	printf("Qual o nome do veiculo? ");
	//limpar buffer de entrada de dados
	fflush(stdin);
	gets(veiculo); //recebe uma string por meio do teclado
	
	printf("Qual a marca do veiculo? ");
	//limpar buffer de entrada de dados
	fflush(stdin);
	gets(marca); //recebe uma string por meio do teclado
	
	printf("Qual o valor do veiculo? R$ ");
	scanf("%f", valor);
	
	if(valor < 80000)
		newvalor = valor * 0.12;
		printf("\nO valor do veiculo %s da marca %s sofreu reajuste e seu valor atual e de R$ %f \n", veiculo, marca, newvalor);
	else
		printf("\nO valor do veiculo %s da marca %s nao sofreu reajuste e seu valor atual e de R$ %.2f \n", veiculo, marca, newvalor);
		
	system("pause");
}
