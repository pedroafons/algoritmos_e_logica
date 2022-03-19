#include <stdio.h>
#include <math.h>
#include <locale.h>

/*Problema "pagamento" 
Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a 
quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com 
uma mensagem explicativa, conforme exemplo.*/

main()
{
	float valorHora, qntHoras, pag;
	char nome[50];
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o nome do funcionário: ");
	gets(nome);
	
	printf("\nValor recebido por hora: ");
	scanf("%f", &valorHora);
	
	printf("\nHoras trabalhadas: ");
	scanf("%f", &qntHoras);
	
	pag = valorHora * qntHoras;
	
	printf("\nO pagamento de %s deve ser de: %.2f", nome, pag);
}
