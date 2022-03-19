#include <stdio.h>
#include <math.h>
#include <locale.h>

/*Problema "medidas" 
Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados 
com quatro casas decimais): 
a) a área do quadrado que tem lado A 
b) a área do triângulo retângulo que base A e altura B 
c) a área do trapézio que tem bases A e B, e altura C*/

main()
{
	float  a, b, c, a1, a2, a3;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite valores para as medidas A, B e C: ");
	scanf("%f %f %f", &a, &b, &c);
	
	a1 = a * a;
	
	a2 = (a * b) / 2;
	
	a3 = ((a + b) * c) / 2;
	
	printf("\nÁrea do quadrado: %.4f", a1);
	printf("\nÁrea do triângulo: %.4f", a2);
	printf("\nÁrea do trapézio: %.4f", a3);
}
