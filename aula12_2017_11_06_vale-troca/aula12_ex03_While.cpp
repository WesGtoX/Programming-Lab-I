//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o das vari�veis
int i, x=0, y=1;

//declara��o da fun��o pricipal
main() {
	
	//estrutura de repeti��o While
	while(i!=2)
	{
		printf("\n=============");
		printf("\nNumero: %i", x);
		printf("\n=============\n");
		x = x + y;
		
		printf("\n1 - Sim\n2 - Nao\nQuer continuar? " );
		scanf("%i", &i);
	}
	
	system("pause");
}
