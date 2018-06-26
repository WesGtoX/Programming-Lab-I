/* Exemplos das funções pow() e sqrt() */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numero;

main() {
	printf("Informe um numero: ");
	scanf("%i", &numero);
	
	printf("\nRaiz Quadrada........%.2f\n", sqrt(numero));
	printf("\nNumero ao Quadrada...%.2f\n", pow(numero, 2));
	printf("\nNumero ao Cubo.......%.2f\n", pow(numero, 3));
	
	system("pause");
}
