#include <stdio.h>
#define Max 4

main(){
	int matriz[Max][Max], f, c, autom = 1, aux, es, i, j;
	
//	Cargas de los datos
	for(f = 0; f < Max; f++){
		for(c = 0; c < Max; c++){
			matriz[f][c] = autom++ * 10;
		}
	}

//	Salidas y procesos de los datos
	for(f = 0; f < Max; f++){
		for(c = 0; c < Max; c++){
			printf("%5i", matriz[f][c]);
		}
		printf("\n");
	}
	
	printf("\n");
	//	Otros procesos de los datos
	for(f = 0; f < Max; f++){
		for(c = 0; c < Max; c++){
			es = 1;
			for(j = 2; j < matriz[f][c]; j++){
				if(matriz[f][c] % j == 0){
					es = 0;
				}
			}
			if(es){
				if(j = 2){
					aux = matriz[f][c];
				}
				else{
					if(matriz[f][c] > aux){
						aux = matriz[f][c];
					}
				}
				printf("%5i", matriz[f][c]);
			}
		}
		printf("\n");
	}	
	printf("Hola soy aux %5i", aux);
}
