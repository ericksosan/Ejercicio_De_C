/*
	2.1 Realizar un programa que lea N n�meros e indique cuantos son positivos, negativos y cero.
	
	[|起_院] ======Erick Manuel Sosa <-__-> 1202690====== [|起_院]
*/

#include <stdio.h>

main(){
	int numberQuantity, i, enterNumber, countNegative = 0, countPositive = 0, countZero = 0;
	
	printf("Enter the amount of number: ");
			scanf("%i", &numberQuantity);
	printf("\n");
			
	for(i = 1; i <= numberQuantity; i++){
		printf("Enter the value #%i: ", i);
			scanf("%i", &enterNumber);
		
		if(enterNumber > 0){
//			printf("\tIs Positive\n");
			countPositive++;
		}
		else if(enterNumber < 0){
//			printf("\tIs Negative\n");
			countNegative++;
		}
		else if(enterNumber == 0){
//			printf("\tThis number is zero\n");
			countZero++;
		}
	} 
	
	printf("\nPositive: %i \t Negative: %i \t Zero: %i", countPositive, countNegative, countZero);
}
