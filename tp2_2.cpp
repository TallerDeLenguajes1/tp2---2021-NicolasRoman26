#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define fila 15
#define columna 15

int main()
{
    srand (time(NULL));
    int i,j,k=0,numero,par=0;
    int *pMatriz = (int *) malloc(sizeof(int) * fila * columna);
    int *vectorPar = (int *) malloc(sizeof(int) * fila);

    for (i = 0; i < fila; i++)
    {
        printf("\nFila numero %d\n", i);

        for (j = 5 + (rand() % 10 + 1) ; j < columna + 1 ; j++) //Cargo la matriz 
        {
            numero = 100 + rand() % 900;

            if(numero % 2 == 0)
            {
                par++;
            }

            *(pMatriz + i * columna + j) = numero;
            printf("%4d", *(pMatriz + i * columna + j), j);
        }

        vectorPar[k] = par;
        printf("\nVector par posicion %d contiene = %d\n",k,*(vectorPar + k)); //Muestro el vector con la cantidad de pares por fila.
        k++;
        printf("Esta fila tiene %d numeros pares\n", par);
        par = 0;
    }
    
    getchar();
    return 0;
}