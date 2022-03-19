/*Problema "coordenadas" (adaptado de URI 1041) Leia os valores das coordenadas X e Y de um ponto no plano 
cartesiano. A seguir, determine qual o quadrante ao qual pertence o ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver
na origem, escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”,
conforme for a situação. */

#include <stdio.h>

main()
{
	float x, y;
	
	printf("Digite um valor para X: ");
	scanf("%f", &x);
	
	printf("\nDigite um valor para Y: ");
	scanf("%f", &y);
	
	if(x >= 1 && y >= 1){
		printf("\nPertence ao Quadrante 1.");
	}
	else if(x < 0 && y >= 1){
		printf("\nPertence ao Quadrante 2.");
	}
	else if(x < 0 && y <= 1){
		printf("\nPertence ao Quadrante 3.");
	}
	else if(x > 1 && y <= 1){
		printf("\nPertence ao Quadrante 4.");
	}
	else if(x > 0 && y == 0){
		printf("\nEixo X.");
	}
	else if(x == 0 && y > 0){
		printf("\nEixo Y.");
	}
	else{
		printf("\nORIGEM.");
	}
}
