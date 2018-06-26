//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração das variáveis
float celsius, fahrenheit;

//declaração da função principal
main()
{
	//entrada de dados
	printf("Qual a temperatura? ");
	scanf("%f", &celsius);
	
	//cálculo final da temperatura
	fahrenheit = ((celsius/5) * 9) + 32;
	
	//saída de dados
	printf("\nA temperatura em Fahrenheit e %.2f \n", fahrenheit);
	
	system("pause");
}
