#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
	int x, tam;
	char nome[30];

	for(x=1; x<=4; x++) {
		printf("Digite um nome: ");
		gets(nome);
		//na variável tam ficará guardado quantas letras tem o nome
		tam = strlen(nome);
		printf("\nEsse nome tem %d letras.\n\n", tam);
	}
	printf("\n\n");
	system("pause");
}
