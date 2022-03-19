/*Problema "tempo_de_jogo" (adaptado de URI 1046) 
Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo 
pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 
horas. */

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int horaInicial, horaFinal;
	
	printf("Digite a hora inicial do jogo: \n");
	scanf("%i", &horaInicial);
	printf("\nDigite a hora final do jogo: \n");
	scanf("%i", &horaFinal);
	
	if(horaInicial < horaFinal){
		printf("\nO jogo durou %i hora(s)\n", horaFinal - horaInicial);
	}else{
		printf("\nO jogo durou %i hora(s)\n", 24 - (horaInicial - horaFinal));
	}
	return 0;
}

