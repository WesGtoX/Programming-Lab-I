//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o das vari�veis
float sal_i, sal_f, sal_d, sal_a, vendas, val_v;

//declara��o da fun��o principal
main()
{
	//entrada de dados
	printf("Qual o salario fixo do vendedor? ");
	scanf("%f", &sal_i);
	
	sal_a = sal_i + (sal_i * 10) / 100;
	sal_d = sal_a - (sal_a * 5) / 100;
	
	printf("Qual o valor das vendas? ");
	scanf("%f", &vendas);
	
	//c�culo final do sal�rio do vendedor	
	val_v = (vendas * 6) / 100;
	sal_f = sal_d + val_v;
	
	//sa�da de dados		
	printf("\nO salario do vendedor e de R$ %.2f \n", sal_f);
	
	system("pause");
}
