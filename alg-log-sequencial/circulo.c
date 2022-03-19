#include <locale.h>
#include <stdio.h>
#include <math.h>

/*Problema "circulo" 
Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do 
círculo com três casas decimais. A fórmula da área do círculo é a seguinte: ???????? = ??. ??
?
. Você pode 
usar o valor de ?? fornecido pela biblioteca da sua linguagem de programação, ou então, se preferir, use 
diretamente o valor 3.14159.*/

main()
{
	float r, pi, area;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o valor do raio do círculo: ");
	scanf("%f", &r);
	
	pi = 3,14159;
	
	area = pi * pow(r, 2);
	
	printf("\nO valor da area é: %.3f", area);
}
