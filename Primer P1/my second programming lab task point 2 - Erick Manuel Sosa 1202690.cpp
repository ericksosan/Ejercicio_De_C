/*
	2.2 - Realice un programa que lea tres n�meros e imprima el mayor.
	[|起_院] ======Erick Manuel Sosa <-__-> 1202690====== [|起_院]
*/

#include <stdio.h>

main(){
	int a, b, c; 
	
	printf("Enter the value #a: ");
			scanf("%i", &a);
	printf("Enter the value #b: ");
			scanf("%i", &b);
	printf("Enter the value #c: ");
			scanf("%i", &c);
			
	printf("\n");
	
	if(a >= b && a >= c){
		printf("The greater number is: %i", a);
	}
	else if(b >= a && b >= c){
		printf("The greater number is: %i", b);
	}
	else if(c >= a && c >= b){
		printf("The greater number is: %i", c);
	}

}
