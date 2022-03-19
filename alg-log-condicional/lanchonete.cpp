/*Problema "lanchonete" (adaptado de URI 1038)
Uma lanchonete possui vários produtos. Cada produto possui um código 
e um preço. Você deve fazer um programa para ler o código e a 
quantidade comprada de um produto (suponha um código válido), e daí 
informar qual o valor a ser pago, com duas casas decimais, conforme 
tabela de produtos ao lado. */

#include <stdio.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int cod, quant;
	double valor;
	
	printf("Digite o código do produto: \n");
	scanf("%i", &cod);
	
	printf("\nQual a quantidade? \n");
	scanf("%i", &quant);
	
	if(cod == 1){
		valor = quant * 5.00;
	}
	else if(cod == 2){
		valor = quant * 3.50;
	}
	else if(cod == 3){
		valor = quant * 4.80;
	}
	else if(cod == 4){
		valor = quant * 8.90;
	}
	else if(cod == 5){
		valor = quant * 7.32;
	}
	
	printf("\nValor a pagar: R$%.2lf", valor);
}
