/*Escreva um programa utilizando-se estrutura de repetição while para:
Inserir um número qualquer entre 1 e 10. Números diferentes deste intervalo
deverá aparecer a mensagen "Inválido" e solicitar um novo número. Se digitar
o número entre o intervalo de 1 a 10 deverá mostrar o número que foi digitado. */

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração das variáveis
int n;

//declaração da função principal
main() {
	//entrada de dados
	printf("Insira um numero: ");
	scanf("%i", &n);
	
	//estrutura de repetição
	while(n < 1 || n > 10) {
		printf("Numero Invalido\n");
		
		printf("Insira um novo numero: ");
		scanf("%i", &n);
	}
	
	//saída de dados
	printf("O numero digitado foi: %i\n", n);
	
	system("pause");
}
