#include <iostream>
#include <stdio.h>
#include <conio.h>

int expansionArray(int *array, int cantElementos, int desde, int hasta);
void mostrarArray(int *array);

int main()
{
	
	int elArray[10]={8,4,1,6,5,2,9,7,0,-1};
	int desde;
	int hasta;
	int i;
	char continuar='s';
	
	
	printf("----------------------------------------\n"
	"0-1-2-3-4-5-6-7-8-9\n");
	
	
	while(continuar=='s')
	{
		printf("Indique la posicion que quiere mover: \n");
		scanf("%d",&desde);
		
		printf("Indique donde quiere ubicar el numero: \n\n");
		scanf("%d",&hasta);
		
		mostrarArray(elArray);
		
		expansionArray(elArray, 10, desde, hasta);
		
		printf("\n");
		mostrarArray(elArray);
		
		printf("Continuar moviendo posiciones ('s' o 'n')\n");
		scanf("%s",&continuar);
	}		
	
	getch();
	return 0;
}

int expansionArray(int *array, int cantElementos, int desde, int hasta)
{
	int pivote=array[desde];
	int i;
	
	if(desde>hasta)
	{
		for(i=desde;i>hasta;i--)
		{
			array[i]=array[i-1];
		}	
	}
	else
	{
		for(i=desde;i<hasta;i++)
		{
			array[i]=array[i+1];
		}
	}
		
	array[hasta]=pivote;
	
	return 0;
}

void mostrarArray(int *array)
{
	int i;
	for(i=0;i<10;i++)
	{
		//printf("Posicion %d: %d\n", i, elArray[i]);
		printf("%d, ", array[i]);
	}
}

