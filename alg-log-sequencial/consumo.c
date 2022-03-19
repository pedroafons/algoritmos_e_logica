#include <stdio.h>
#include <math.h>
#include <locale.h>

/*Problema "consumo" 
Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de 
combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo 
médio do carro, com três casas decimais.*/

main()
{
	float distTotal, combusTotal, media;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Qual a distância total percorrida pelo veículo? ");
	scanf("%f", &distTotal);
	
	printf("\nQual foi o total de combustível gasto por este veículo? ");
	scanf("%f", &combusTotal);
	
	media = distTotal / combusTotal;
	
	printf("\nConsumo médio: %.3f", media);
}
