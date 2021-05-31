#include <stdio.h>
#include <conio.h>

void best(int[]);
void nobest(int[]);
void prom(int[]);

int main()
{
	int ven[12], i;
	for(i=0;i<12;i++)
	{
		printf("Ingrese las ventas del mes %d: ", i+1);
		scanf("%d", &ven[i]);
		while(ven[i]<1)
		{
			printf("Seleccione un numero valido: ");
			scanf("%d", &ven[i]);
		}
	}
	best(ven);
	nobest(ven);
	prom(ven);
	getch();
}

void best(int ven[])
{
	int i, aux;
	aux = 0;
	for(i=0;i<11;i++)
	{
		if(ven[i] > ven[i+1])
		{
			if(ven[aux]<ven[i])
			{
				aux = i;
			}
		}
		else
		{
			if(ven[aux]<ven[i+1])
			{
				aux = i+1;
			}
		}
	}
	printf("\nEl mes con mas ventas fue el %d con un total de %d.", aux+1, ven[aux]);
}

void nobest(int ven[])
{
	int i, aux;
	aux = 0;
	for(i=0;i<11;i++)
	{
		if(ven[i] > ven[i+1])
		{
			if(ven[aux]>ven[i+1])
			{
				aux = i+1;
			}
		}
		else
		{
			if(ven[aux]>ven[i])
			{
				aux = i;
			}
		}
	}
	printf("\nEl mes con menos ventas fue el %d con un total de %d.", aux+1, ven[aux]);
}

void prom(int ven[])
{
	int i, Sum;
	Sum = 0;
	for(i=0;i<12;i++)
	{
		Sum = Sum + ven[i];
	}
	printf("\nEl promedio de ventas anuales es de %.2f.", (float)Sum/12);
}
