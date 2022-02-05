#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100 //Numero Max del array con los 100 num.
#define MAX_FIVE 5 //Numero Max de posiciones 

/*
	6.1-REALICE UN PROGRAMA QUE UTILIZANDO UN PROCEDIMIENTO LLENE UN VECTOR
	CON VALORES ALEATORIOS DEL 1 AL 100 E IMPRIMA LAS PRIMERAS 5 POSICIONES
	SORTEADAS ALEATORIA MENTE.
	
	[|起_院] ======Erick Manuel Sosa <-__-> 1202690====== [|起_院]
*/

int fiveRam(int aux[MAX]);//Prototipo de la funcion, para las 5 posiciones  

main(){
	srand(time(0));// segun lo que lei se coloca al inicio del programa para tomar una semilla(esto es como un numero inicial),
	// con esto se puede generar random, partiendo de la hora del procesador. 
	int arr[MAX], i, randN, e;
	
	printf("\t\t\t\t  Numeros aleatorio del Array (Sin Repetir)\n\n");
	
	for (i = 0; i < MAX; i++)
	{
		randN = rand() % MAX + 1;
		
		if(i > 0){
			for(e = 0; e < i; e++){
				if(randN == arr[e]){
					randN = rand() % MAX + 1;
					e = -1;
				}
			}
		}
		arr[i] = randN;
	}
	
	for (i = 0; i < MAX; i++) //Salida del array completa con numeros del 1 al 100, Sin repetir.
	{
		 printf("%5i", arr[i]);
		
	}
	
	printf("\n\n\n\t\t\t\tLas 5 primera posiciones aleatorio  (Sin Repetir)\n\n");
		fiveRam(arr);
}

int fiveRam(int aux[MAX]){
	int j, otherAux[MAX_FIVE], r;
	
	printf("\n");
	
	for (j = 0; j < MAX_FIVE; j++)
	{   
		 int otherRand = rand() % 5 + 0; 
		 
		 if(j > 0){
		 	for(r = 0; r < j; r++){
		 		if(otherRand == otherAux[r]){
		 			otherRand = rand() % 5 + 0;
		 			r =- 1;
				 }
			 }
		 }
		 otherAux[j] = otherRand;
		 printf(" \t\t\t\t\tLa Posicion: %i Corresponde A: %i\n\n",otherAux[j], aux[otherAux[j]]);
	}
}
