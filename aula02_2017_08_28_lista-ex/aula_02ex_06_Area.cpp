//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o das vari�veis
float base, altura, area;

//declara��o da fun��o principal
main()
{
	//entrada de dados
	printf("Qual a base do triangulo? ");
	scanf("%f", &base);
	
	printf("Qual a altura do triangulo? ");
	scanf("%f", &altura);
	
	//c�lculo fial da �rea do tri�ngulo
	area = (base * altura) / 2;
	
	//sa�da de dados
	printf("\nA area do triangulo e %.0f \n", area);
	
	system("pause");
}
