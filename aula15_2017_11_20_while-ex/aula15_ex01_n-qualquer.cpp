/*Escreva um programa utilizando-se estrutura de repeti��o while para:
Inserir um n�mero qualquer entre 1 e 10. N�meros diferentes deste intervalo
dever� aparecer a mensagen "Inv�lido" e solicitar um novo n�mero. Se digitar
o n�mero entre o intervalo de 1 a 10 dever� mostrar o n�mero que foi digitado. */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o das vari�veis
int n;

//declara��o da fun��o principal
main() {
	//entrada de dados
	printf("Insira um numero: ");
	scanf("%i", &n);
	
	//estrutura de repeti��o
	while(n < 1 || n > 10) {
		printf("Numero Invalido\n");
		
		printf("Insira um novo numero: ");
		scanf("%i", &n);
	}
	
	//sa�da de dados
	printf("O numero digitado foi: %i\n", n);
	
	system("pause");
}
