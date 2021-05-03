#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

main()
{
	int N, max, min, i, aux, errores;
	printf("Ingresa una cantidad: ");
	scanf("%d", &N);
	int Num[N];
	printf("Ingresa el valor maximo de la serie: ");
	scanf("%d", &max);
	printf("Ingresa el valor minimo de la serie: ");
	scanf("%d", &min);
	while(min>=max)
	{
		printf("Favor de elegir un valor minimo menor al maximo: ");
		scanf("%d", &min);
	}
	srand(time(NULL));
	printf("\nLos numeros son: ");
	for(i=0;i<N;i++)
	{
		Num[i] = min + rand()%(max-min+1);
		if(i==N-1)
		{
			printf("%d\n", Num[i]);
		}
		else
		{
			printf("%d, ", Num[i]);
		}
	}
	do
	{
		for(i=0;i<N-1;i++)
		{
			if(Num[i]>Num[i+1])
			{	
				aux = Num[i+1];
				Num[i+1]=Num[i];
				Num[i] = aux;
			}
		}
		errores = 0;
		for(i=0;i<N-1;i++)
		{
			if(Num[i]>Num[i+1])
			{
				errores++;
				i=N-1;
			}
		}
	}
	while(errores!=0);
	printf("\nLos numeros ordenados son: ");
	for(i=0;i<N;i++)
	{
		if(i==N-1)
		{
			printf("%d", Num[i]);
		}
		else
		{
			printf("%d, ", Num[i]);
		}
	}
	getch();
}
