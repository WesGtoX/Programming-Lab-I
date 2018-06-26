/*Algoritmo para ler o salário de um operário e mostrar qual o valor
que ele terá descontado referente ao INSS de acordo com as regras:
até 1659.38 - 8%
de 1659.39 até 2765.66 - 9%
de 2765.67 até 5531.31 - 11%
acima de 5531.31 - R$ 608.44 */

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração das variaveis
float salario, inss;

//declaração da função principal
main()
{
	//entrada de dados
	printf("Informe o salario do operario: ");
	scanf("%f", &salario);
	
	//testar o salário e realizar o cálculo do INSS
	if(salario <= 1659.38)
		inss = salario * 0.08;
	else if(salario <= 2765.66)
		inss = salario * 0.09;
	else if(salario <= 5531.31)
		inss = salario * 0.11;
	else
		inss = 608.44;
		
	//mostrar o valor do desconto do INSS
	printf("\nO valor do INSS = %.2f \n", inss);
		
	system("pause");
}
