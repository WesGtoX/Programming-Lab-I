//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o das vari�veis
int i, x=0, y=1;

//declara��o da fun��o pricipal
main() {
	
	//estrutura de repeti��o For
	for(i=1; i<=10; i++)
	{
		printf("%i\n", x);
		x = x + y;
	}
	
	system("pause");
}
