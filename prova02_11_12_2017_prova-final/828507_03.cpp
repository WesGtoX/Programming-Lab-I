//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

//declaração das variáveis
int i=0;
char opcao, resp;

//função principal
main() {
	
	while(i <= 5) {
		printf("Voce foi selecionada para trabalhar em uma multinacional? <S> ");
		resp = getch();
		
		if(toupper(resp) == 'S'); {
			printf("\n\nPARABENS!! \nEstamos torcendo para o seu sucesso!\n");
			printf("=================================================\n\n");
		}
		
		i++;
	}

	system("pause");
}
