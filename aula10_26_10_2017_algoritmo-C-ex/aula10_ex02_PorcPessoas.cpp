/*Elaborar o algoritmo para ler a idade e o sexo de n pessoas e
mostrar o % de pessoas por sexo e a quantidade de pessoas maiores
de 18 anos do sexo masculino*/

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

//declaração das variáveis
int idade, n = 0, totalM = 0, totalF = 0, M18anos = 0;
char sexo, resposta = 'S';

//declaração da função principal
main() {
	//estrutura de repetição para entrda de dados
	while(toupper(resposta)=='S') {
		printf("\n===============\n");
		printf("\nInforme o sexo: ");
		sexo = getche();
		scanf("s%", &sexo);
		
		printf("\nInforme a idade: ");
		scanf("%i", &idade);
		n++;
		
		if(toupper(sexo)=='F') {
			totalF++;
		}
		else if(toupper(sexo)=='M')
			totalM++;
		else {
			printf("Informacao invalida\n");
			n--;
		}
		
		if(toupper(sexo)=='M' && idade > 18)
			M18anos++;
			
		printf("\nContinuar <s/n>: ");
		resposta=getche();
	}
	
	//saída de dados
	printf("\nHa %.2f%% de Mulheres", float(totalF)/n*100);
	printf("\nHa %.2f%% de Homens", float(totalM)/n*100);
	printf("\n%i sao Homens maiores de 18 anos\n", M18anos);
	
	system("pause");
}
