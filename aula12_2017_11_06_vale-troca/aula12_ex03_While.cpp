//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração das variáveis
int i, x=0, y=1;

//declaração da função pricipal
main() {
	
	//estrutura de repetição While
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
