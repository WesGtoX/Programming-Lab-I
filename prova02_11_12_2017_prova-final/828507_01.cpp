//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

//declaração das variáveis

int idade;
char nome[20], n, sexo;

//função principal
main() {
	
	//entrada de dados
	printf("Digite o nome completo: ");
	scanf("%s", nome);
	
	printf("\nDigite a idade: ");
	scanf("%i", &idade);
	
	printf("Digite o sexo: ");
	sexo = getch();
	
	if(toupper(sexo) == 'F' && idade < 18) {
		printf("%s", nome);
		printf("\n\nNAO PODE VOTAR!!\n\n");
	}
	
	else {
		printf("%s", nome);
		printf("\n\nPODE VOTAR!!\n\n");
	}
	
	
	//saída de dados
	
	system("pause");
}
