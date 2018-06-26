#include <stdio.h>
#include <stdlib.h>

//declaração das variaveis
float pol;
int i;

main() {
	
	for(i=1; i <=20; i++)
	{
		pol = i * 2.54;
		printf("%i - %.2f\n",i, pol);
		}	
	
	system("pause");
}
