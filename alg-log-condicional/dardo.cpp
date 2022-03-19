/*Problema "dardo" 
No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir. 
Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual 
foi a maior.*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float med1, med2, med3;
	
	printf("Digite as três distâncias: \n");
	scanf("%f%f%f", &med1, &med2, &med3);
	
	if(med1 > med2 && med3 < med1){
		printf("\nMaior distância: %f", med1);
	}
	else if(med2 > med3 && med1 < med2){
		printf("\nMaior distância: %f", med2);
	}
	else{
		printf("\nMaior distância: %f", med3);
	}
}
