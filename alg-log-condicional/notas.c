/*Problema "notas" 
Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de 
uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no 
ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a 
mensagem "REPROVADO", conforme exemplos.*/

#include <stdio.h>

main()
{
	float n1, n2, final;
	
	printf("Digite a nota do Primeiro Semestre:\n");
	scanf("%f", &n1);
	
	printf("\nDigite as notas do Segundo Semestre:\n");
	scanf("%f", &n2);
	
	final = n1 + n2;
	
	if(final >= 60){
		printf("\nNOTA FINAL: %.1f", final);
	}
	else{
		printf("\nNOTA FINAL: %.1f", final);
		printf("\nREPROVADO!!!!");
	}
}
