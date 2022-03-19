/*Problema "baskara" 
Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula 
de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais, 
conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem. */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float a, b, c, x1, x2, delta;
	
	printf("Digite valores para A, B e C\n");
	scanf("%f%f%f", &a, &b, &c);
	
	delta = pow(b, 2) - 4 * a * c;
	
	if(delta < 0){
		printf("\nA equação não possui raízes reais");
	}else{
		x1 = (- b + sqrt(delta))/ (2 * a);
		x2 = (- b - sqrt(delta)) / (2 * a);
		printf("\nX1 %.4f", x1);
		printf("\nX2 %.4f", x2);
	}
}
