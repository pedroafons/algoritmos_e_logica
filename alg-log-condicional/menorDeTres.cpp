/*Problema "menor_de_tres" 
Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três 
números lidos. Em caso de empate, mostrar apenas uma vez.*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int a, b, c;
	
	printf("Digite 3 números: ");
	scanf("%i%i%i", &a, &b, &c);
	
	if(a < b){
		printf("\nO menor número é: %i", a);
	}
	else if(b < c && c > a){
		printf("\nO menor número é: %i", b);
	}
	else{
		printf("\nO menor número é: %i", c);
	}
}
