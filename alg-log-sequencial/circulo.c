#include <locale.h>
#include <stdio.h>
#include <math.h>

/*Problema "circulo" 
Fazer um programa para ler o valor "r" do raio de um c�rculo, e depois mostrar o valor da �rea do 
c�rculo com tr�s casas decimais. A f�rmula da �rea do c�rculo � a seguinte: ???????? = ??. ??
?
. Voc� pode 
usar o valor de ?? fornecido pela biblioteca da sua linguagem de programa��o, ou ent�o, se preferir, use 
diretamente o valor 3.14159.*/

main()
{
	float r, pi, area;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o valor do raio do c�rculo: ");
	scanf("%f", &r);
	
	pi = 3,14159;
	
	area = pi * pow(r, 2);
	
	printf("\nO valor da area �: %.3f", area);
}
