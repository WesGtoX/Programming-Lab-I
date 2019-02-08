//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração das variáveis
float v1, v2, resultado;
int opcao;

//declaração da função pricipal
main() {
	//declaração da função pricipal
	printf("Calculo de operacoes matematicas basicas");
	printf("\n1 - Para Adicao\n2 - Para Subtracao\n3 - Para Multiplicacao\n4 - Para Divisao\n");
	
	//entrada de dados
	printf("Escolha a opcao desejada ");
	scanf("%i", &opcao);
	printf("Informe o primeiro numero ");
	scanf("%f", &v1);
	printf("Informe o segundo numero ");
	scanf("%f", &v2);
	
	//comando switch case
	switch(opcao) {	//compara a variavel com os case
		case 1:
			resultado = v1 + v2;
			printf("Resultado: %.0f", resultado);			
			break;	//termina a execução do switch e o programa continua com a seguinte instrução
		
		case 2:
			resultado = v1 - v2;
			printf("Resultado: %.0f", resultado);
			break;	//termina a execução do switch e o programa continua com a seguinte instrução
		
		case 3:
			resultado = v1 * v2;
			printf("Resultado: %.2f", resultado);
			break;	//termina a execução do switch e o programa continua com a seguinte instrução
		
		case 4:
			resultado = v1 / v2;
			printf("Resultado: %.2f", resultado);
			break;	//termina a execução do switch e o programa continua com a seguinte instrução
		
		default: //default exibe uma mensagem caso nenhuma das instruções anteriores seja verdadeira
			printf("Valor invalido!\n");
	}
	
	return 0;
}
