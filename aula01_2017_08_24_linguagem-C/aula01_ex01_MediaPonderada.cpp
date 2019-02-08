/*Escrever um algoritmo para ler dois valores refenretes
a duas notas escolares de um aluno. Calcular a média
ponderada. O peso da primeira nota é 4 e o peso
da segunda nota é 6. Imprimir a média. */

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração das variáveis
float nota1, nota2, media;

//declaração da função pricipal
main()
{
	//entrada de dados
	printf("Informe a primeira nota: ");
	scanf("%f", &nota1);
	/*& antes do nome da variável a entrada de dados
	refere-se ao endereço de memória (obrigatório) */
	/* \n - utilizado para quebra de linha - pular linha */
	printf("\nInforme a segunda nota: ");
	scanf("%f", &nota2);
	
	//cálculo de média
	//símbolo de = refere a atribuição de valor
	media = nota1 * 0.4 + nota2 * 0.6;
	
	//mostrar a média - saída de dados
	printf("\nMedia = %.2f \n", media);
	//formatação de casas decimais = %.númerocasasf
	//exemplo %.2f - duas casas decimais
	system("pause");
	
}

