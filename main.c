#include <stdio.h>
#include <stdlib.h>
#include "funciones_arrays.h"

#define CANT_NUM 5

int main()
{
    int elArray[CANT_NUM];
    int i;
    float promedio=0;
    int max=0;

    printf("Ingrese 5 numeros:\n");

    for(i=0;i<CANT_NUM;i++)
    {
        scanf("%d", &elArray[i]);
    }

    if(calculaPromedio(elArray, CANT_NUM, &promedio)==0)
    {
        printf("\nEl promedio es %.2f", promedio);
    }
    else
    {
        printf("Error");
    }


    calculaMaximo(elArray, CANT_NUM, &max);

    printf("\nEl maximo es %d",max);


    return 0;
}
