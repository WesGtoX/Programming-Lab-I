//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração das variáveis
int nasc, ano, idade, ano20;

//declaração da função principal
main()
{
	//entrada de dados
	printf("Qual o ano do seu nascimento? ");
	scanf("%i", &nasc);
	
	printf("Qual o ano atual? ");
	scanf("%i", &ano);
	
	//cáculo da idade atual
	idade = ano - nasc;
	
	printf("\nSua idade e %i \n", idade, "anos");
	
	//cálculo da idade em 2020
	ano20 = 2020 - nasc;
	
	//saída de dados
	printf("\nSua idade em 2020 sera %i \n", ano20, "anos");
	
	system("pause");
}
