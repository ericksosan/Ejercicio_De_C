#include <stdio.h>
/*
	3.2 Haga un programa que calcule el 嫫ea de dos tri嫕gulos e imprima el promedio de las 嫫eas,
	    teniendo en cuenta que la f鏎mula del 嫫ea A=(b*H)/2
	
	[|起_院] ======Erick Manuel Sosa <-__-> 1202690====== [|起_院]
*/

main(){
	int i;
	float area, base, height, prom = 0;
	
	for(i = 1; i <= 2; i++){
		printf("\nEnter the base (base) of the triangle #%i: ", i);
		scanf("%f", &base);
	printf("Enter the height (Altura) of the triangle #%i: ", i);
		scanf("%f", &height);
		
		area = (base * height)/2;
			printf("\n\n\tCalculo del triangulo #%i", i);
		printf("\n The area of the triangle #%i is: %.2f\n", i, area);
		
		prom += area / 2;
	}
	
	printf("\n\n  The average (Promedio) areas is: %.2f%c", prom, 37);
}
