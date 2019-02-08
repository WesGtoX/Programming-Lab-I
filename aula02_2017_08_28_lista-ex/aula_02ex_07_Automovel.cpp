//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração das variáveis
float fabrica, preco, imposto, revendedor;
char carro[20]; //string de caracteres

//declaração da função principal
main()
{
	//entrada de dados
	printf("Qual o nome do automovel? ");
	//limpar o buffer de entrada de dados
	fflush(stdin);
	gets(carro); //recebe uma string por meio do teclado
	
	printf("Qual o preco de fabrica? ");
	scanf("%f", &fabrica);
	
	//cálculo do preço final do veículo
	imposto = (fabrica * 0.45);
	revendedor = (fabrica * 0.28);
	
	preco = fabrica + imposto + revendedor;
	
	//saída de dados
	printf("O automovel %s tem preco de R$ %.2f \n", carro, preco);
	
	system("pause");
}
