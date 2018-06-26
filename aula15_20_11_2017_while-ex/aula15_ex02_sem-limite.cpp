/*Determine se o cliente de uma loja excedeu seu limite de crédito. 
Os seguintes dados estão disponíveis para cada cliente:
a) número da conta
b) saldo no ínicio do mês
c) total de todos os encargos desse cliente nesse mês
d) total de todos os créditos aplicados à conta desse cliente nesse mês
e) limite de crédito autorizado
O programa deverá ler cada um desses dados e calcular:
• o novo saldo (saldo inicial - encargos + crédito)
• determinar se o novo saldo é superior ao limite de crédito do cliente
• para clientes que o limite de crédito for ultrapassado, o programa deverá
exibir o número da conta do cliente, o limite de crédito, o novo valor e a 
mensagem "Limite ultrapassado" */

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração das variáveis
int nconta;
float saldInicio, encargos, newCredit, limCredit, saldo, limite;

//declaração da função principal
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
