#include <stdio.h>
#define MAX 4
/*
 6.0-REALICE UN PROGRAMA QUE LLENE UNA MATRIZ 4*4
  LA PASE A UNA FUNCI粍 Y ESTA RETORNE
  LA SUMA DE LA DIAGONAL PRINCIPAL MAS
  LA SUMA DE LA DIAGONAL SECUNDARIA, UN SOLO TOTAL. 
  
  [|起_院] ======Erick Manuel Sosa <-__-> 1202690====== [|起_院]
*/

int diFirtSec(int funMatriz[MAX][MAX]); //PROTOTIPO DE LA FUNCION

main(){
	int matriz[MAX][MAX], rows, columns; //Declaracion de la matriz y la entrada del usuario(Filas y Columnas).
//	int testAutomatico = 1; // Para no estar llenando la matriz manual en las prueba del programa. !Eso Puede llegar ser agotador!
		
//		Proceso de llenado de la matriz
		for(columns = 0; columns < MAX; columns++){
			for(rows = 0; rows < MAX; rows++){
				 printf(" Enter the value %i, %i: ", columns, rows);
					scanf("%i", &matriz[rows][columns]);
                   //matriz[rows][columns] = testAutomatico++; 
			}
		}
		//Salida de la matriz
		printf("\n");
		for(columns = 0; columns < MAX; columns++){
			for(rows = 0; rows < MAX; rows++){
				printf("%5i", matriz[rows][columns]);
			}
			printf("\n");
		}
        //Salida de la suma total de la diagonal primaria y secuntaria, mediante la funcion encargada.	
		printf("\n La suma Total de la diagonal Primaria + Sec es: %i", diFirtSec(matriz));	
}

//Funcion para determinar la suma de la diagonal primaria mas la secuentaria.
int diFirtSec(int funMatriz[MAX][MAX]){
	int r, c;
	int totalSumDiagonales = 0;
//	int sumaDPri = 0, sumaDSec = 0; // TEST DE TOTALES DE FORMA INDIVIDUAL.

		for(c = 0; c < MAX; c++){
			for(r = 0; r < MAX; r++){
				//if(r == c ){
				//	 sumaDPri += funMatriz[r][c];
				//}
				//if(r + c == 3){					//ESTO ERA PARA PRUEBA Y CONFIRMAR QUE TODO ESTABA CORRECTO.
				//	 sumaDSec += funMatriz[r][c];
				//}
				if(r == c || r + c == 3){
					totalSumDiagonales += funMatriz[r][c];
				}
			}
		}	
		return  totalSumDiagonales;
//	printf(" Suma Diagonal Primaria: %i\n\n Suma Diagonal Secundaria: %i\n\n Total De la Suma de las Diagonales: %i\n", sumaDPri, sumaDSec, totalSumDiagonales);
}
