/*Problema "baskara" 
Fazer um programa para ler os tr�s coeficientes de uma equa��o do segundo grau. Usando a f�rmula 
de Baskara, calcular e mostrar os valores das ra�zes x1 e x2 da equa��o com quatro casas decimais, 
conforme exemplo. Se a equa��o n�o possuir ra�zes reais, mostrar uma mensagem. */

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
		printf("\nA equa��o n�o possui ra�zes reais");
	}else{
		x1 = (- b + sqrt(delta))/ (2 * a);
		x2 = (- b - sqrt(delta)) / (2 * a);
		printf("\nX1 %.4f", x1);
		printf("\nX2 %.4f", x2);
	}
}
