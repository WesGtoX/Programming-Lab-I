/*Determine se o cliente de uma loja excedeu seu limite de cr�dito. 
Os seguintes dados est�o dispon�veis para cada cliente:
a) n�mero da conta
b) saldo no �nicio do m�s
c) total de todos os encargos desse cliente nesse m�s
d) total de todos os cr�ditos aplicados � conta desse cliente nesse m�s
e) limite de cr�dito autorizado
O programa dever� ler cada um desses dados e calcular:
� o novo saldo (saldo inicial - encargos + cr�dito)
� determinar se o novo saldo � superior ao limite de cr�dito do cliente
� para clientes que o limite de cr�dito for ultrapassado, o programa dever�
exibir o n�mero da conta do cliente, o limite de cr�dito, o novo valor e a 
mensagem "Limite ultrapassado" */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o das vari�veis
int nconta;
float saldInicio, encargos, newCredit, limCredit, saldo, limite;

//declara��o da fun��o principal
main() {
	
	printf("===========================================\n");
	printf("=============== BANCO MENDES ==============\n");
	printf("===========================================\n\n");
	
	//entrada de dados
	printf("Qual o numero da conta? ");
	scanf("%i", &nconta);
	
	printf("Qual o saldo do inicio do mes? ");
	scanf("%f", &saldInicio);
	
	printf("Qual o total de encargos do cliente? ");
	scanf("%f", &encargos);
	
	printf("Qual total de creditos aplicados a conta? ");
	scanf("%f", &newCredit);
	
	printf("Qual o limite de credito autorizado? ");
	scanf("%f", &limCredit);
	
	limite = saldInicio + newCredit;
	saldo = saldInicio - encargos + newCredit + limCredit;
	
	system("cls");
	
	printf("===========================================\n");
	printf("=============== BANCO MENDES ==============\n");
	printf("===========================================\n\n");
	
	if(saldo < 0) {
		printf("Numero da conta..................%i\n", nconta);
		printf("Limite de Credito................%.2f\n",limite);
		printf("Limite de Credito atual..........%.2f\n", saldo);
		printf("\n******** LIMITE ULTRAPASSADO ********\n\n");
	}
	else {
		printf("\nLimite de Credito atual..........%.2f\n\n", saldo);
	}
	
	
	system("pause");
	
}
