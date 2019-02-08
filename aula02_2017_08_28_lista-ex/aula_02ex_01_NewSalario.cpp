//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração das variáveis
float sal1, sal2, reaj;

//declaração da função principal
main()
{
	//entrada de dados
	printf("Qual o seu salario atual? ");
	scanf("%f", &sal1);
	
	printf("Qual a porcentagem do reajuste? ");
	scanf("%f", &reaj);
	
	//cálculo final do novo salário
	sal2 = sal1 + (sal1 * reaj) / 100;
	
	//saída de dados
	printf("\nO seu novo salario e de R$ %.2f \n", sal2);
	
	system("pause");
}
