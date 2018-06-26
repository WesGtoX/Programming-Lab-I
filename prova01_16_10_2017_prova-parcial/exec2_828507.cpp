#include <stdio.h>
#include <stdlib.h>

//declaração das variaveis
float litros, venda, valor;
char mes[20];

main() {
	//entrada de dados
	printf("Qual mes da venda? ");
	fflush;
	gets(mes);
	
	printf("Quantos litros de leite foram produzidos neste mes? ");
	scanf("%f", &litros);
	
	printf("Quantos litros foram vendidos neste mes? ");
	scanf("%f", &venda);
	
	if(litros >= 1000)
		valor = venda * 2.2;
	else
		valor = venda * 2.5;
	
	
	//saida de dados
	printf("\nO valor total da venda no mes de %s e de R$ %.2f\n", mes, valor);
	
	system("pause");
}
