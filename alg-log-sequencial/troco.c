/*Problema "troco" 
Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. 
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, 
e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve 
mostrar o valor do troco a ser devolvido ao cliente.*/

#include <stdio.h>
#include <math.h>

main()
{
	float qnt, valor, prod, troco;
	
	printf("Preco do produto: ");
	scanf("%f", &prod);
	
	printf("\nQuantidade de unidades compradas: ");
	scanf("%f", &qnt);
	
	printf("\nValor em dinheiro dado pelo cliente: ");
	scanf("%f", &valor);
	
	troco = (prod * qnt) - valor;
	
	printf("\n\nO troco e: %.2f", troco);
}
