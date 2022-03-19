/*Problema "menor_de_tres" 
Fazer um programa para ler tr�s n�meros inteiros. Em seguida, mostrar qual o menor dentre os tr�s 
n�meros lidos. Em caso de empate, mostrar apenas uma vez.*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int a, b, c;
	
	printf("Digite 3 n�meros: ");
	scanf("%i%i%i", &a, &b, &c);
	
	if(a < b){
		printf("\nO menor n�mero �: %i", a);
	}
	else if(b < c && c > a){
		printf("\nO menor n�mero �: %i", b);
	}
	else{
		printf("\nO menor n�mero �: %i", c);
	}
}
