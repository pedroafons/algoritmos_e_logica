#include <stdio.h>
#include <math.h>
#include <locale.h>

/*Problema "consumo" 
Fazer um programa para ler a dist�ncia total (em km) percorrida por um carro, bem como o total de 
combust�vel gasto por este carro ao percorrer tal dist�ncia. Seu programa deve mostrar o consumo 
m�dio do carro, com tr�s casas decimais.*/

main()
{
	float distTotal, combusTotal, media;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Qual a dist�ncia total percorrida pelo ve�culo? ");
	scanf("%f", &distTotal);
	
	printf("\nQual foi o total de combust�vel gasto por este ve�culo? ");
	scanf("%f", &combusTotal);
	
	media = distTotal / combusTotal;
	
	printf("\nConsumo m�dio: %.3f", media);
}
