//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o das vari�veis
float fabrica, preco, imposto, revendedor;
char carro[20]; //string de caracteres

//declara��o da fun��o principal
main()
{
	//entrada de dados
	printf("Qual o nome do automovel? ");
	//limpar o buffer de entrada de dados
	fflush(stdin);
	gets(carro); //recebe uma string por meio do teclado
	
	printf("Qual o preco de fabrica? ");
	scanf("%f", &fabrica);
	
	//c�lculo do pre�o final do ve�culo
	imposto = (fabrica * 0.45);
	revendedor = (fabrica * 0.28);
	
	preco = fabrica + imposto + revendedor;
	
	//sa�da de dados
	printf("O automovel %s tem preco de R$ %.2f \n", carro, preco);
	
	system("pause");
}
