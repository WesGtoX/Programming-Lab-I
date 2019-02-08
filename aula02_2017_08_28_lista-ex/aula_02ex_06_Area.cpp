//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração das variáveis
float base, altura, area;

//declaração da função principal
main()
{
	//entrada de dados
	printf("Qual a base do triangulo? ");
	scanf("%f", &base);
	
	printf("Qual a altura do triangulo? ");
	scanf("%f", &altura);
	
	//cálculo fial da área do triângulo
	area = (base * altura) / 2;
	
	//saída de dados
	printf("\nA area do triangulo e %.0f \n", area);
	
	system("pause");
}
