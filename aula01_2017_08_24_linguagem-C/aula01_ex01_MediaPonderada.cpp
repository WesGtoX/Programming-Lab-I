/*Escrever um algoritmo para ler dois valores refenretes
a duas notas escolares de um aluno. Calcular a m�dia
ponderada. O peso da primeira nota � 4 e o peso
da segunda nota � 6. Imprimir a m�dia. */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o das vari�veis
float nota1, nota2, media;

//declara��o da fun��o pricipal
main()
{
	//entrada de dados
	printf("Informe a primeira nota: ");
	scanf("%f", &nota1);
	/*& antes do nome da vari�vel a entrada de dados
	refere-se ao endere�o de mem�ria (obrigat�rio) */
	/* \n - utilizado para quebra de linha - pular linha */
	printf("\nInforme a segunda nota: ");
	scanf("%f", &nota2);
	
	//c�lculo de m�dia
	//s�mbolo de = refere a atribui��o de valor
	media = nota1 * 0.4 + nota2 * 0.6;
	
	//mostrar a m�dia - sa�da de dados
	printf("\nMedia = %.2f \n", media);
	//formata��o de casas decimais = %.n�merocasasf
	//exemplo %.2f - duas casas decimais
	system("pause");
	
}

