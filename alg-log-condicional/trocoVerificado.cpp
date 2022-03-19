/*Problema "troco_verificado" 
Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. 
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, 
e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido 
ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o 
valor restante conforme exemplo. */

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float preco, dinheiro, troco, pagar, falta;
	int quant;
	
	printf("Preço do produto: \n");
	scanf("%f", &preco);
	
	printf("Quantidade do produto: \n");
	scanf("%i", &quant);
	
	printf("Valor em dinheiro: \n");
	scanf("%f", &dinheiro);
	
	pagar = preco * quant;
	troco = dinheiro - pagar;
	falta = pagar - dinheiro;
	
	if(dinheiro >= pagar){
		printf("\nTROCO: R$%.2f", troco);
	}
	else if(dinheiro < pagar){
		printf("\nFALTAM: R$%.2f", falta);
	}
}
