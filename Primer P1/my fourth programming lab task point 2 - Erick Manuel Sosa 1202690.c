/*
	4.2 Realice un programa que lea las notas finales de 5 asignaturas e indique cuantas han aprobado, 
	cantidad que han reprobado y cuantas han aprobado con una nota m璯ima de aprobaci鏮 de 70 puntos..
	
	[|起_院] ======Erick Manuel Sosa <-__-> 1202690====== [|起_院]
*/

#include <stdio.h>

main(){
	int i, asign, approved = 0, minimal = 0, disapproved = 0;
	float prom = 0;
			printf("\n\tEnter the final grades of 5 subjects\n");
		for(i = 1; i <= 5; i++){
			printf("\n Enter the final note of the subject #%i: ", i);
				scanf("%i", &asign);
					
					if(asign >= 70){
//							printf("\nApproved\n");
								approved++;
					}
					if(asign == 70){
//							printf("\nPassed with a minimum grade\n");
								minimal++;
					}
					else if(asign < 70) {
//						    printf("\nDisapproved\n");
								disapproved++;
					}
					prom += (asign / 5); 
		}
												printf("\n\n\t\t\t  Final score");
		printf("\n Aproved:[%i]   Minimal Note:[%i]   Disapproved:[%i]   Average:[%.1f%c]", approved, minimal, disapproved, prom, 37);
}
