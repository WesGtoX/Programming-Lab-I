/*Elaborar um algoritmo para ler o sal�rio de um colaborador e
mostrar o valor do desconto do IRFF de acordo com a tabela a seguir:
sal�rio						al�quota (%)			dedu��o
At� 1903.98						-					-
De 1903.99 at� 2826.65			7.5					142.80
De 2826.65 at� 3751.05			15.0				354.80
De 3751.05 at� 4664.68			22.5				636.13
Acima de 4664.68				27.5				869.36
*/

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o das variaveis
float salario, irff;

//declara��o da fun��o principal
main()
{
	//entrada de dados
	printf("Informe o salario do colaborador: ");
	scanf("%f", &salario);
	
	//testar o sal�rio e realizar o c�lculo de IRFF
	if(salario <= 1903.98)
		irff = salario;
	else if(salario <= 2826.65)
		irff = salario - (salario * 0,075) + 142.80;
	else if(salario <= 3751.05)
		irff = salario - (salario * 0,15) + 354.80;
	else if(salario <= 4664.68)
		irff = salario - (salario * 0,225) + 636.13;
	else
		irff = salario - (salario * 0,275) + 869.36;
		
	//mostrar o valor do desconto do IRFF
	printf("\nO valor do IRFF = %.2f \n", irff);
	
	system("pause");
}
