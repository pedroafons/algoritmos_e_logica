#include <stdio.h>
#include <math.h>

/*Problema "retangulo" 
Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor 
da área, perímetro e diagonal deste retângulo, com quatro casas decimais, conforme exemplos.*/

main()
{
	float b, h, area, per, diag;
	
	printf("Digite o valor da base do retangulo: ");
	scanf("%f", &b);
	
	printf("\nDigite o valor da altura do retangulo: ");
	scanf("%f", &h);
	
	area = b * h;
	per = 2 * (b + h);
	diag = sqrt((b * b) + (h * h));
	
	printf("\nArea: %.4f", area);
	printf("\nPerimetro: %.4f", per);
	printf("\nDiagonal: %.4f", diag);
}
