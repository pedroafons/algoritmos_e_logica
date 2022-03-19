#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Problema "duracao" 
Fazer um programa para ler uma duração de tempo em segundos, daí imprimir na tela esta duração no 
formato horas:minutos:segundos.*/

main()
{
	int seg, h, m, s, resto;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a duração de tempo em segundos: ");
	scanf("%d", &seg);
	
	h = seg / 3600;
	resto = seg % 3600;
	m = resto / 60;
	s = resto % 60;
	
	printf("\n%d:%d:%d\n", h, m, s);
}
