//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o das vari�veis
float v1, v2, resultado;
int opcao;

//declara��o da fun��o pricipal
main() {
	//declara��o da fun��o pricipal
	printf("Calculo de operacoes matematicas basicas");
	printf("\n1 - Para Adicao\n2 - Para Subtracao\n3 - Para Multiplicacao\n4 - Para Divisao\n");
	
	//entrada de dados
	printf("Escolha a opcao desejada ");
	scanf("%i", &opcao);
	printf("Informe o primeiro numero ");
	scanf("%f", &v1);
	printf("Informe o segundo numero ");
	scanf("%f", &v2);
	
	//estrutura condicional
	switch(opcao) {	//compara a variavel com o case
	
		case 1:		//op��o comparada com a vari�vel, caso seja verdadeira, ser� executada
			resultado = v1 + v2;
			printf("Resultado: %.0f\n", resultado);			
			break;	//termina a execu��o do switch e o programa continua com a seguinte instru��o
		
		case 2:		//op��o comparada com a vari�vel, caso seja verdadeira, ser� executada
			resultado = v1 - v2;
			printf("Resultado: %.0f\n", resultado);
			break;	//termina a execu��o do switch e o programa continua com a seguinte instru��o
		
		case 3:		//op��o comparada com a vari�vel, caso seja verdadeira, ser� executada
			resultado = v1 * v2;
			printf("Resultado: %.2f\n", resultado);
			break;	//termina a execu��o do switch e o programa continua com a seguinte instru��o
		
		case 4:		//op��o comparada com a vari�vel, caso seja verdadeira, ser� executada
			resultado = v1 / v2;
			printf("Resultado: %.2f\n", resultado);
			break;	//termina a execu��o do switch e o programa continua com a seguinte instru��o
		
		default: //default exibe uma mensagem caso nenhuma das instru��es anteriores seja verdadeira
			printf("Valor invalido!\n");
	}
	
	system("pause");	//interrompe a execu��o do programa
}
