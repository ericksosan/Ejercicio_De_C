#include <stdio.h>
#define MAX 4

/*
	  7.2-REALICE UN PROGRAMA QUE UTILIZANDO UNA FUNCI粍 PASE UNA 
	  MATRIZ Y AL MAYOR VALOR DE LA DIAGONAL PRINCIPAL LE RESTE EL
	   MENOR DE LA DIAGONAL SECUNDARIA E IMPRIMA.
      
      [|起_院] ======Erick Manuel Sosa <-__-> 1202690====== [|起_院]
*/
int less(int lessMatriz[MAX][MAX]);

main(){
	int matriz[MAX][MAX], rows, columns;
//	int autoMach = 1;
	
	for ( rows = 0; rows < MAX; rows++){
        for ( columns = 0; columns < MAX; columns++){
//        		matriz[rows][columns] = autoMach++;
            printf("\n Enter the Value C:[%i], F:[%i]: ", rows, columns);
                scanf("%i", &matriz[rows][columns]);
        }
    }
    
	printf("\n");
	for(columns = 0; columns < MAX; columns++){
		for(rows = 0; rows < MAX; rows++){
				printf("%5i", matriz[columns][rows]);
		}
		printf("\n");		
	}	
	
	printf("\n   El Resultado es: %i", less(matriz));	
}

int less(int lessMatriz[MAX][MAX]){
	int less = 0, lessCol, lessRows, auxP, auxSec, i = 0;

		for(lessCol = 0; lessCol < MAX; lessCol++){
			for(lessRows = 0; lessRows < MAX; lessRows++){
				i++;
//				printf("%5i", lessMatriz[lessCol][lessRows]);

					//Diagonal Primaria
					if(lessCol == lessRows){
						if(i == 1){
							auxP = lessMatriz[lessCol][lessRows];
						}else{
							if(lessMatriz[lessCol][lessRows] > auxP){
								auxP = lessMatriz[lessCol][lessRows];
							}
						}
					}
					
					//Diagonal Secundaria
					if(lessCol + lessRows == 3){
						if(i == 1){
							auxSec = lessMatriz[lessCol][lessRows];
						}else{
							if(lessMatriz[lessCol][lessRows] < auxSec){
								auxSec = lessMatriz[lessCol][lessRows];
							}
						}
					}	
			}
//		printf("\n");		
	}	
	printf("\n   N Mayor de la Diag Pri: %i\n   N Menor de la Diag Sec: %i\n", auxP, auxSec);
	return auxP - auxSec;
}

