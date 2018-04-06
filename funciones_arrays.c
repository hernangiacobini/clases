#include <stdio.h>
#include <stdlib.h>


int calculaMaximo(int elArray[], int tope, int *max)
{
    int i;
    int maximo=0;
    int retorno=-1;

    if(tope>=0)
    {
        retorno=0;
    }
    for(i=0;i<tope;i++)
    {
        if(i==0)
        {
            maximo=elArray[i];
        }
        else
        {
            if(elArray[i]>maximo)
            {
                maximo=elArray[i];
            }
        }
    }
    *max=maximo;

    return retorno;
}

int calculaPromedio(int elArray[], int tope, float *promedio)
{
    int i;
    int sumaNumeros=0;

    for(i=0;i<tope;i++)
    {
        sumaNumeros=sumaNumeros+elArray[i];
    }
    *promedio=(float)sumaNumeros/tope;

    return 0;
}
