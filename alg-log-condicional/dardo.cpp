/*Problema "dardo" 
No arremesso de dardo, o atleta tem tr�s chances para lan�ar o dardo � maior dist�ncia que conseguir. 
Voc� deve criar um programa para, dadas as medidas das tr�s tentativas de lan�amento, informar qual 
foi a maior.*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float med1, med2, med3;
	
	printf("Digite as tr�s dist�ncias: \n");
	scanf("%f%f%f", &med1, &med2, &med3);
	
	if(med1 > med2 && med3 < med1){
		printf("\nMaior dist�ncia: %f", med1);
	}
	else if(med2 > med3 && med1 < med2){
		printf("\nMaior dist�ncia: %f", med2);
	}
	else{
		printf("\nMaior dist�ncia: %f", med3);
	}
}
