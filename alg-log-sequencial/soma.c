/*Problema "soma" 
Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma destes 
números.*/

#include <stdio.h>
#include <math.h>

main()
{
	int x, y, soma;
	
	printf("Digite um valor para x: ");
	scanf("%d", &x);
	
	printf("\nDigite um valor para y: ");
	scanf("%d", &y);
	
	soma = x + y;
	
	printf("\nO resultado da soma e: %d", soma);
}
