/*2 - De acordo com o Código Nacional de Trânsito Brasileiro as multas de trânsito são 
classificadas por gravidade, portanto, dependendo da gravidade da multa o 
contudor/responsável pelo veículo tem uma quantidade de pontos anotada em seu 
prontuário, sendo que a multa de grau leve gera dois pontos, de grau moderado três pontos, 
de grau grave cinco pontos e de grau gravíssimo sete pontos. Diante do contexto, 
implemente um algoritmo utilizando a linguagem C para mostrar uma estatística 
considerando cinco multas, sendo que de cada multa informa-se a quantidade de pontos que ela 
gerou. Após, receber a informação das multas, mostrar quantas multas foram:
a) de dois pontos;
b) de três pontos;
c) de cinco pontos;
d) de sete pontos.*/

#include <stdio.h>
#include <stdlib.h>

//declaração das variáveis
int i, multa, leve, moderado, grave, gravissima, l, m, g, gr;

main() {
	
	//entrada de dados		
	for(i=1; i <= 5; i++) {
	
		printf("\n1 - Leve \n2 - Moderada \n3 - Grave \n4 - Gravissima \n\nInforme a multa: ");
		scanf("%i", &multa);
			if(multa == 1)
				leve = leve + 1;
			
			else if(multa == 2)
				moderado = moderado + 1;

			else if(multa == 3)
				grave = grave + 1;

			else if(multa == 4)
				gravissima = gravissima + 1;
	}		

	l = leve * 2;
	m = moderado * 3;
	g = grave * 5;
	gr = gravissima * 7;
				
	//saída de dados
	printf("\nO condutor teve um total de 5 multas: \n %i de grau leve, perdendo %i pontos \n %i de grau moderado, perdendo %i pontos \n %i de grau grave, perdendo %i pontos \n %i de grau gravissimo, perdendo %i pontos \n",leve, l, moderado, m, grave, g, gravissima, gr);
	
	system("pause");
}
