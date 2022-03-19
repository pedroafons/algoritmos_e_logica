/*Problema "operadora" 
Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de 
telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para 
ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago. */

#include <stdio.h>

main()
{
	double valorPlano;
	int min;
	
	printf("Digite a quantidade de minutos: ");
	scanf("%d", &min);
	
	valorPlano = 50 + 2 * (min - 100);
	
	if(min > 100){
		printf("\nValor a ser pago: R$ %.2f", valorPlano);
	}
	else{
		printf("\nValor a ser pago: R$ 50,00");
	}
}
