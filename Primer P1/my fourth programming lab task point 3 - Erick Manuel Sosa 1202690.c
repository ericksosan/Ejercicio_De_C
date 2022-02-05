/*
	4.3 Programa que lea N n�meros e imprima el mayor valor..
	
	[|起_院] ======Erick Manuel Sosa <-__-> 1202690====== [|起_院]
*/

#include <stdio.h>
main(){
	int nNumber, value, i, aux;
		
		printf("Enter the amount of number: ");
			scanf("%i", &nNumber);
			
			for(i = 1; i <= nNumber; i++){
					printf("\nEnter the value #%i: ", i);
						scanf("%i", &value);
						
							if(i == 1){
								aux = value;
							}
							else{
								if(value > aux)
									aux = value;
							}
			}
	
	printf("\n The largest number is: %i", aux);
}
