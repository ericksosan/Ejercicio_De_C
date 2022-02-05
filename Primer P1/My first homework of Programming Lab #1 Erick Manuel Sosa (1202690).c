/*
	Realice un programa que lea 5 numeros, sume los primeros 4 y este total lo divida entre el quinto si este es par e  imprima resultado.

	Notas:
	*-Si el quinto no es par imprime la suma de los primeros 4
	*-Utilice un solo Scanf
	*-No lea 5 variables
	*-Programa en c b嚙編ico, no mande fotos mande el fuente
	*-Programas iguales ambos estudiantes tienen 0
	
	[|起_院] ======Erick Manuel Sosa <-__-> 1202690====== [|起_院]
*/

#include <stdio.h>

main(){
	int valueNum, i;
	float result = 0;
	
		for(i = 1; i <= 5; i++){
			printf("Enter the value #%i: ", i);
				scanf("%i", &valueNum);
		
			if(i <= 4){
				result += valueNum;
			}
			else if(valueNum % 2 == 0){
					result /= valueNum;
						printf("\nThe result of the division is --> %.2f <--\n", result);	
			}
			else{
				printf("\nThe result of the sum is --> %.f <--\n", result);
			}
		}
	}
