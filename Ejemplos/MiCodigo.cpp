#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

main()
{
	int N, max, min, i, aux, errores, Med, im, par, pru;
	float Medi;
	Med = im = par = pru = Medi = 0;
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
	if(N%2==0)
	{
		Med = (N + 1) / 2;
		Medi = (Num[Med-1] + Num[Med]) / 2.0;
		printf("\n\nLa mediana es de: %.2f", Medi);
	}
	else
	{
		Med = (N + 1) / 2;
		printf("\n\nLa mediana es de: %d", Num[Med-1]);
	}
	if(N%2==0)
	{
		for(i=0;i<N;i++)
		{			
			int temp = Medi / 1;
			pru = Num[i] % temp;
			if(pru == 0)
			{
				par = par + 1; 
			}
			else
			{
				im = im + 1;
			}			
		}
		printf("\n\nHay %d numeros pares y %d numeros impares con respecto a la mediana", par, im);
	}
	else
	{
		for(i=0;i<N;i++)
		{
			if(Num[i]%Num[Med-1]==0)
			{
				par = par + 1;
			}
			else
			{
				im = im + 1;
			}
		}
		printf("\n\nHay %d numeros pares y %d numeros impares con respecto a la mediana", par, im);
	}
	getch();
}
