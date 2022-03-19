/*Problema "multiplos" (adaptado de URI 1044)
Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os 
números podem ser digitados em qualquer ordem.*/

#include <stdio.h>

main()
{
	int n1, n2;
	
	printf("Digite dois numeros inteiros: \n");
	scanf("%i%i", &n1, &n2);
	
	
	if(n1 % n2 == 0 || n2 % n1 == 0){
		printf("\nSAO MULTIPLOS");
	}else{
		printf("\nNAO SAO MULTIPLOS");
	}
}
