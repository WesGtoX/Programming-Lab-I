/*Algoritmo para gerenciar o pedido de pizza. O usu�rio poder�
escolher n pizzas e no final deve-se informar o total das pizzas
solicitadas. As op��es s�o:
1 - Mu�arela.....R$ 25,00	|	2 - Frango catupiry...R$ 30,00
3 - Margarita....R$ 28,00	|	4 - Portuguesa........R$ 35,00 */

//declara��o das vari�veis
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

//declara��o das vari�veis
int pizza;
float total=0;
char controle;

//declara��o da fun��o principal
main() {
	printf("=========================================================\n");
	printf("==================== PIZZARIA MENDES ====================\n");
	printf("=========================================================\n\n");
	
	//estrutura de repeti��o
	do {
		printf("Escolha a pizza: \n1 - Mucarela............R$ 20,00 \n2 - Frango Catupiry.....R$ 25,00 \n3 - Marguerita..........R$ 28,00 \n4 - Portuguesa..........R$ 30,00\n");
		scanf("%i", &pizza);
		
		//estrutura condicional para totalizar
		switch(pizza) {
			case 1: total+=20; //total=total + 20
					break;
			case 2: total+=25;
					break;
			case 3: total+=28;
					break;
			case 4: total+=30;
					break;
			default: printf("\nPizza nao cadastrado...");
					 system("pause");
		}
		
		printf("\nOutra pizza <S/N>: ");		
		controle = getche();
		
	} while(toupper(controle)=='S');
	
	printf("\n\nTotal a pagar R$ %.2f\n\n", total);
	
	system("pause");
}
