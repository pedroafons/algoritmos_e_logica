#include <stdio.h>
#include <math.h>

/*Problema "idades" 
Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os 
nomes e a idade média entre essas pessoas, com uma casa decimal, conforme exemplo.*/

main()
{
	char n1[50], n2[50];
	int i1, i2;
	double media;
	
	printf("Dados da pessoa 1:");
	printf("\nDigite seu nome: ");
	gets(n1);
	
	printf("\ne sua idade: ");
	scanf("%d", &i1);
	
	
	
	printf("Dados da pessoa 2:");
	printf("\nDigite seu nome: ");
	fseek(stdin, 0, SEEK_END);
	gets(n2);
	
	printf("\ne sua idade: ");
	scanf("%d", &i2);
	
	media = (i1 + i2) / 2.0;
	
	printf("\nA idade media entre %s e %s e de %.1lf anos", n1, n2, media);
	
	return 0;
}
