/*1- Faça um algoritmo na linguagem C que determine o preço com desconto
para entradas de cinema. Estudantes recebem 50% de desconto, aposentados 
30% e os demais clientes pagam o valor integral. Para isso, deverá ser 
fornecido pelo usuário o valor integral do ingresso e o tipo de cliente: 
1 (para Estudantes); 2 (para Aposentados); 3 (para Outros).*/

#include <stdio.h>
#include <stdlib.h>

//declaração das variáveis
float ingresso, valor;
int tipo; 

//entrada de dados
main() {

	printf("Qual o valor do ingresso para o cinema? R$ ");
	scanf("%f", &ingresso);
	
	printf("\n1 - Estudante \n2 - Aposentado \n3 - Outros \n\nQual o tipo de cliente? ");
	scanf("%i", &tipo);
	
	if(tipo == 1)
		valor = ingresso * 0.50;
		
	else if(tipo == 2)
		valor = ingresso * 0.70;
		
	else
		valor = ingresso;
			
	printf("\nO valor do ingresso e R$ %.2f \n", valor);
	
	system("pause");
}

/*#include <stdio.h>
#include <stdlib.h>

//declaração das variáveis
float estudante, aposentado, outros, ingresso, qtd, i;
int tipo; 

//entrada de dados
main() {
	printf("Qual o valor do ingresso para o cinema? ");
	scanf("%f", ingresso);
	
	printf("Quantos ingressos serao comprados? ");
	scanf("%f", qtd);
	
	estudante = 1;
	aposentado = 2;
	outros = 3;
	
	for(i=0; i <= qtd; i++)
	{
		printf("Qual o tipo de ingresso? ");
		scanf("%i",tipo);
			if(tipo = 1)
				ingresso = ingresso * 0.50;
			if else(tipo = 2)
				ingresso = ingresso * 0.30;
			else
				printf("")
				
		/*
		printf("Qual o tipo de ingresso? ")
		fflush(stdin);
		gets(tipo);
			if(tipo = "Estudante")
				
	}
}*/

