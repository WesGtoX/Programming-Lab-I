//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o das vari�veis
int nasc, ano, idade, ano20;

//declara��o da fun��o principal
main()
{
	//entrada de dados
	printf("Qual o ano do seu nascimento? ");
	scanf("%i", &nasc);
	
	printf("Qual o ano atual? ");
	scanf("%i", &ano);
	
	//c�culo da idade atual
	idade = ano - nasc;
	
	printf("\nSua idade e %i \n", idade, "anos");
	
	//c�lculo da idade em 2020
	ano20 = 2020 - nasc;
	
	//sa�da de dados
	printf("\nSua idade em 2020 sera %i \n", ano20, "anos");
	
	system("pause");
}
