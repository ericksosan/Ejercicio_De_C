/*
	4.1 Realice un programa que lea una cantidad determinada en Kb e imprima su equivalente en Gb.
	
	[|起_院] ======Erick Manuel Sosa <-__-> 1202690====== [|起_院]
*/

#include <stdio.h>
#include <math.h>

main(){
	float Kb, Gb;
	int keyPress;
		do{
			printf("\nEnter the amount of Kb: ");
				scanf("%f", &Kb); 
				
					if(Kb >= 1 * pow(10, 6)){
						Gb = Kb / pow(10, 6);
							printf("\nThe equivalent in GB is: [%.f GB]\n", Gb);
					}
					else{
						Gb = Kb / pow(10, 6);
							printf("\nThe equivalent in GB is: [%f GB]\n", Gb);
					}
					printf("\n!!Press 1 to continue or 2 to finish!! (1 or 2) ---> ");
						scanf("%i", &keyPress);
		}while(keyPress == 1);
}
