#include <stdio.h>
#include <math.h>
#include <locale.h>

/*Problema "medidas" 
Fazer um programa para ler tr�s medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados 
com quatro casas decimais): 
a) a �rea do quadrado que tem lado A 
b) a �rea do tri�ngulo ret�ngulo que base A e altura B 
c) a �rea do trap�zio que tem bases A e B, e altura C*/

main()
{
	float  a, b, c, a1, a2, a3;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite valores para as medidas A, B e C: ");
	scanf("%f %f %f", &a, &b, &c);
	
	a1 = a * a;
	
	a2 = (a * b) / 2;
	
	a3 = ((a + b) * c) / 2;
	
	printf("\n�rea do quadrado: %.4f", a1);
	printf("\n�rea do tri�ngulo: %.4f", a2);
	printf("\n�rea do trap�zio: %.4f", a3);
}
