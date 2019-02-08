//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração das variáveis
float IMC, peso, altura;

//declaração da função principal
main()
{
	//entrada de dados
	printf("Qual o seu peso? ");
	scanf("%f", &peso);
	
	printf("Qual a sua altura em metros? ");
	scanf("%f", &altura);
	
	//cáculo IMC final
	IMC = peso / (altura * altura);
	
	//saída de dados
	printf("\nIMC = %.2f \n", IMC);
	
	system("pause");
}
