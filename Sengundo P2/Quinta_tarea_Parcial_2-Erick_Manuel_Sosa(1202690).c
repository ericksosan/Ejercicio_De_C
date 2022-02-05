/*
	5.1-REALICE UN PROGRAMA QUE LLENE UNA MATRIZ 4*4
	  E IMPRIMA EL MAYOR NUMERO PRIMO QUE ESTA CONTIENE.
	
	[|起_院] ======Erick Manuel Sosa <-__-> 1202690====== [|起_院]
*/

#include <stdio.h>
#define MAX 4

main(){
    int Matt[MAX][MAX], rows, columns, aux, i, findCounsins;

    //Loading the user's prime numbers
    printf("\n En esta parte se digitan los valores deseados\n");
    for ( rows = 0; rows < MAX; rows++)
    {
        for ( columns = 0; columns < MAX; columns++)
        {
            printf("\n Enter the Value  C:[%i], F:[%i]: ", rows, columns);
                scanf("%i", &Matt[rows][columns]);
        }
    }

    printf(" \n Salida previa de los datos digitados (Sin Procesos)\n");
    // Sample outputs of the data without processes
    printf("\n");
    for ( rows = 0; rows < MAX; rows++)
    {
        for ( columns = 0; columns < MAX; columns++)
        {
            printf("%5i", Matt[rows][columns]);
        }
        printf("\n");
    }

    printf(" \n Numeros Primos Encontrados\n");
    // Official output of the data corresponding to the problem
    printf("\n");
    for ( rows = 0; rows < MAX; rows++)
    {
        for ( columns = 0; columns < MAX; columns++)
        {
            findCounsins = 1;
            for ( i = 2; i < Matt[rows][columns]; i++)
            {
                if(Matt[rows][columns] % i == 0){
                    findCounsins = 0;
                }
            }
            if (findCounsins)
            {
				// Este proceso de aqui se encarga de encontrar 
				// el numero primo mayor.
                if (i == 1)
                {
                    aux = Matt[rows][columns];
                }
                else
                {
                    if(Matt[rows][columns] > aux){
                        aux = Matt[rows][columns];
                    }
                }
                printf("%5i", Matt[rows][columns]);
            }
        }
        printf("\n");
    }   
        printf(" \n Aqui debajo esta la Salida del numero primo MAYOR \n");
        printf("\n - [o__o] Hi, I am the largest prime number --> [#: %i]", aux);
}
