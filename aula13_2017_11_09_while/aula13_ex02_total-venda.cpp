/* Algoritmo para receber o valor do ingresso de um show
e totalizar a venda de n ingressos, contudo, para ciente
com idade <= 18 ou >= 65 h� 25% de desconto */

//declara��o das blibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

//declara��o das vari�veis
float vlringresso, total=0;
int idade;
char controle;

//declara��o da fun��o principal
main() {
	
	//entrada de dados - valor do ingresso, apenas uma vez
	printf("Informe o valor do ingresso: R$ ");
	scanf("%f", &vlringresso);
			
	//estrutura de repeti��o para entrada de dados
	do {
		system("cls");
		
		printf("Informe a idade do cliente: ");
		scanf("%i", &idade);
		
		//verificar idade
		if(idade <= 18 || idade >=65)
			total+= vlringresso * 0.75;
		else
			total+= vlringresso;
			
		//controle a estrutura de repeti��o
		printf("\nOutra venda <s/n>: ");
		controle =getche();
	}while (toupper(controle)=='S');
	
	//sa�da de dados
	printf("\nTotal de venda = %.2f\n", total);
	
	system("pause");
}
