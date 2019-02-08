/*Algoritmos para gerenciar a pesquisa de intenção de votos dos
candidatos a presidência do DA de um Curso, sendo 
1 - CandidatoA, 2 - CandidatoB e 3 - Candidato C. A pesquisa será respondida
por n alunos e, após a coleta de daods deve-se mostrar o percentual
previsto de cada candidato */

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

//declação das variáveis
int candA=0, candB=0, candC=0, i=0, voto;
char controle;

//função principal
main() {
	//estrutura de repetição
	printf("===================================\n");
	printf("============= VOTACAO =============\n");
	printf("===================================\n");
	do {
		system("cls");
		printf("Escolha o candidato:\n1-Quemuel\n2-Pestrini\n3-Fabio\n");
		scanf("%i", &voto);
		
		//estrutura condicional
		switch(voto) {
			case 1: {
				candA++;
				i++;
				break;
			}				
			case 2:	{
				candB++;
				i++;
				break;
			}			
			case 3: {
				candC++;
				i++;
				break;
			}
			default : {
				printf("\nCandidato Inexistente...");
				system("pausa");
			}
		}
		printf("\nOutro voto <s/n>: ");
		controle = getche();
	}while (toupper(controle)=='S');
	
	//saída de dados
	printf("\n============= URNA ELETRONICA =============\n");
	printf("\nQuemuel...........%.2f%%\n", float(candA)/i*100);
	printf("\nPestrini..........%.2f%%\n", float(candB)/i*100);
	printf("\nFabio.............%.2f%%\n\n", float(candC)/i*100);
	
	system("pause");
}
