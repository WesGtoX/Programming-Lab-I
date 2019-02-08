/*Elaborar um algoritmo para ler a quantidade de horas
extras 50% e 100%, o sal�rio, a carga hor�ria mensal de
n funcion�rios e mostrar o total da folha de pagamento,
o total do FGTS (8%) e o total do PIS (1%)*/

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

//declara��o das vari�veis
float extra50, extra100, salario, cargah, salhora, salTotal, PIS, PISt=0, FGTS, FGTSt=0, total=0;
int funcionarios, controle;

//declara��o da fun��o principal
main() {
	
	//estrutura de repeti��o para entrada de dados
	do {
		printf("Informe o valor do salario: ");
		scanf("%f", &salario);
		
		printf("Informe a carga horaria mensal: ");
		scanf("%f", &cargah);
		
		salhora = salario / cargah;
		
		printf("Informe a quantidade de horas extras 50%: ");
		scanf("%f", &extra50);
		
		printf("Informe a quantidade de horas extras 100%: ");
		scanf("%f", &extra100);
		
		salTotal = salario + (salhora * extra50) + (salhora * extra100);
		
		FGTS = salTotal * 0.08;
		PIS = salTotal * 0.01;
		
		FGTSt+= FGTS;
		PISt+= PIS;
		
		total+= salTotal;
		
		//controle a estrutura de repeti��o
		printf("\nOutro funcionario <s/n>: ");
		controle = getche();
		
		system("cls");
	}while (toupper(controle)=='S');
		
		//sa�da de dados
		printf("\n=======================================\n");
		printf("========== FOLHA DE PAGAMENTO =========\n");
		printf("=======================================\n");
		
		printf("\nFGTS............................R$ %.2f\n", FGTSt);
		printf("PIS.............................R$ %.2f\n", PISt);
		printf("Salario total...................R$ %.2f\n", total);
		printf("=======================================\n");
	
	
	system("pause");
}
