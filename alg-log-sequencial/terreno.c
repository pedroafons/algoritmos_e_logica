#include <stdio.h>
#include <math.h>

/*Problema "terreno" 
Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma 
casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida, 
o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com 
duas casas decimais, conforme exemplo.*/

main()
{
	float area, preco, b, h, mq;
	
	printf("Digite a largura do terreno: ");
	scanf("%f", &b);
	
	printf("\nDigite o comprimento do terreno: ");
	scanf("%f", &h);
	
	printf("\nDigite o valor do metro quadrado: ");
	scanf("%f", &mq);
	
	area = b * h;
	preco = mq * area;
	
	printf("\nArea do terreno: %.2f", area);
	printf("\nPreco do terreno: %.2f", preco);
}
