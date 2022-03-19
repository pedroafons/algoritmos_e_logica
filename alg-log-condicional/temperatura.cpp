/*Problema "temperatura" 
Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para 
isso, voc� deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser 
informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com 
duas casas decimais. A seguir � dada a f�rmula para converter de Fahrenheit para Celsius (voc� deve 
deduzir a f�rmula de Celsius para Fahrenheit): ( 32)*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char escala;
	float f, c, resultF, resultC;
	
	printf("Escolha a escala: F ou C\n");
	scanf("%c", &escala);
	
	if(escala == 'f'){
		printf("\nDigite a temperatura em Fahrenheit: \n");
		scanf("%f", &f);
		
		resultC = 0.55 * (f - 32);
		
		printf("\nA temperatura equivalente em Celsius �: %.2f", resultC);
	}else{
		printf("\nDigite a temperatura em Celsius: \n");
		scanf("%f", &c);
		
		resultF = 32 + (c * 1.8);
		
		printf("\nA temperatura equivalente em Fahrenheit �: %.2f", resultF);
	}
}
