//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o das vari�veis
float sal1, sal2, reaj;

//declara��o da fun��o principal
main()
{
	//entrada de dados
	printf("Qual o seu salario atual? ");
	scanf("%f", &sal1);
	
	printf("Qual a porcentagem do reajuste? ");
	scanf("%f", &reaj);
	
	//c�lculo final do novo sal�rio
	sal2 = sal1 + (sal1 * reaj) / 100;
	
	//sa�da de dados
	printf("\nO seu novo salario e de R$ %.2f \n", sal2);
	
	system("pause");
}
