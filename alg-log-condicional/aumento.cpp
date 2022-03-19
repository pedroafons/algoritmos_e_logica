/*Problema "aumento" (adaptado de URI 1048) Uma empresa vai conceder um aumento percentual de salário aos seus funcionários dependendo de quanto 
cada pessoa ganha, conforme tabela ao lado. Fazer um programa para ler o salário de uma pessoa, daí mostrar qual o novo salário desta pessoa depois
do aumento, quanto foi o aumento e qual foi a porcentagem de aumento. */

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float sa, aum, novoSa;
	
	printf("Digite o salário: \n");
	scanf("%f", &sa);
	
	if(sa <= 1000){
		novoSa = (sa * 0.2) + sa;
		printf("\nNovo salário: %.2f", novoSa);
		aum = sa * 0.2;
		printf("\nAumento: %.2f", aum);
		printf("\nPorcentagem: 20");
	}else if(sa > 1000 && sa <= 3000){
		novoSa = (sa * 0.15) + sa;
		printf("\nNovo salário: %.2f", novoSa);
		aum = sa * 0.15;
		printf("\nAumento: %.2f", aum);
		printf("\nPorcentagem: 15");
	}else if(sa > 3000 && sa <= 8000){
		novoSa = (sa * 0.1) + sa;
		printf("\nNovo salário: %.2f", novoSa);
		aum = sa * 0.1;
		printf("\nAumento: %.2f", aum);
		printf("\nPorcentagem: 10");
	} else if(sa > 8000){
		novoSa = (sa * 0.05) + sa;
		printf("\nNovo salário: %.2f", novoSa);
		aum = sa * 0.05;
		printf("\nAumento: %.2f", aum);
		printf("\nPorcentagem: 5");
	}
}
