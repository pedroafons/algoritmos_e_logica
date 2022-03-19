/*Problema "glicose" 
Fazer um programa para ler a quantidade de glicose 
no sangue de uma pessoa e depois mostrar na tela a 
classificação desta glicose de acordo com a tabela de 
referência ao lado. */

#include <stdio.h>

main()
{
	float glic;
	
	printf("Digite a medida da glicose: \n");
	scanf("%f", &glic);
	
	if(glic <= 100){
		printf("\nNormal");
	}
	if(glic > 100 && glic <= 140){
		printf("\nElevada");
	}
	if(glic > 140){
		printf("\nDiabetes");
	}
}
