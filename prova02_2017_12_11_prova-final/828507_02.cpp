//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração das variáveis
int opcao;
float x, y, resp;

//função principal
main() {
	//entrada de dados
	printf("===== OPERACAO MATEMATICA =====\n");
	printf("\n1 - para Adicao\n2 - para Subtracao\n3 - para Divisao\n4 - para Multiplicacao\n\nEscolha uma operacao: ");
	scanf("%i", &opcao);
	
	printf("\nInforme o primeiro valor: ");
	scanf("%f", &x);
	
	printf("Informe o segundo valor: ");
	scanf("%f", &y);
	
	
	switch(opcao) {
		case 1 : {
			resp = x + y;
			break;
		}
		
		case 2 : {
			resp = x - y;
			break;
		}

		case 3 : {
			resp = x / y;
			break;
		}

		case 4 : {
			resp = x * y;
			break;
		}
		
		default : {
			printf("\n**OPCAO INVALIDA**\n");
			break;
		}
	}
	
	printf("\nA resposta e %.2f\n\n", resp);
	
	system("pause");
}
