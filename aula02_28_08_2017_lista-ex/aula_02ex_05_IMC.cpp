//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o das vari�veis
float IMC, peso, altura;

//declara��o da fun��o principal
main()
{
	//entrada de dados
	printf("Qual o seu peso? ");
	scanf("%f", &peso);
	
	printf("Qual a sua altura em metros? ");
	scanf("%f", &altura);
	
	//c�culo IMC final
	IMC = peso / (altura * altura);
	
	//sa�da de dados
	printf("\nIMC = %.2f \n", IMC);
	
	system("pause");
}
