//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o das vari�veis
float celsius, fahrenheit;

//declara��o da fun��o principal
main()
{
	//entrada de dados
	printf("Qual a temperatura? ");
	scanf("%f", &celsius);
	
	//c�lculo final da temperatura
	fahrenheit = ((celsius/5) * 9) + 32;
	
	//sa�da de dados
	printf("\nA temperatura em Fahrenheit e %.2f \n", fahrenheit);
	
	system("pause");
}
