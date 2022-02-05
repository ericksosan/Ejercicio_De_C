/*
	1-REALICE UN PROGRAMA QUE LLENE UNA MATRIZ DE FORMA ALEATORIA
	  CON NÚMEROS DEL 1 AL 100 Y UTILIZANDO UNA FUNCIÓN RETORNE LA
	  SUMA DE LOS NUMERO PERFECTOS QUE CONTENGA. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>

#define MAX 10
#define MAXN 100

bool findN(int matriz[MAX][MAX], int f, int c, int nRand);
int perfectNumber(int matriz[MAX][MAX]);

main(){
      srand(time(0));
      
	int arr[MAX][MAX], rows, columns, numberRand, e, i;
	
		for(columns = 0; columns < MAX; columns++){
			for(rows = 0; rows < MAX; rows++){
				numberRand = rand() % 100 + 1;
				while(findN(arr, MAX, MAX, numberRand) == false){
					numberRand = rand() % 100 + 1;
				}
				arr[columns][rows] = numberRand;
			}
		}
		
		for(columns = 0; columns < MAX; columns++){
			for(rows = 0; rows < MAX; rows++){
				 printf("%5i", arr[columns][rows]);
			}
		}
		printf("\n\n");
		perfectNumber(arr);
}

bool findN(int matriz[MAX][MAX], int f, int c, int nRand){
	for(c = 0; c < MAX; c++){
			for(f = 0; f < MAX; f++){
				 if(nRand == matriz[c][f]){
				 	return false;
				 }
			}
		}
		return true;
}

int perfectNumber(int matriz[MAX][MAX]){
	int rows, columns, x, sum = 0;
	
	for(columns = 0; columns < MAX; columns++){
			for(rows = 0; rows < MAX; rows++){
//				if(matriz[columns][rows] % 2 == 0){
//					printf("%5i", matriz[columns][rows]);
//				}
				for(x = 1; x < matriz[columns][rows]; ++x){
					if(matriz[columns][rows] % x == 0){
						sum += x;
					}
					if(sum == matriz[columns][rows]){
					printf("%5i", matriz[columns][rows]);
				}
				}
			}
		}
}
	




