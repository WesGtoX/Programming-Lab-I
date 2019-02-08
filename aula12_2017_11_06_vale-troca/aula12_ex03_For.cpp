//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração das variáveis
int i, x=0, y=1;

//declaração da função pricipal
main() {
	
	//estrutura de repetição For
	for(i=1; i<=10; i++)
	{
		printf("%i\n", x);
		x = x + y;
	}
	
	system("pause");
}
