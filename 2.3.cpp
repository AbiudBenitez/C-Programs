#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	printf("Programa que permite al usuario generar la cantidad de numeros aleatorios que desee, indicando el rango del cual se generan para imprimirlos al final, en forma horizontal separado por comas.\n\n");
	int n, m, i, o;
	printf("Introduce la cantidad de numeros aleatorios que deseas: ");
	scanf("%d", &o);
	int x[o];
	printf("Introduce el valor maximo: ");
	scanf("%d", &n);
	printf("Introduce el valor minimo: ");
	scanf("%d", &m);
	for(i=1;m>=n;i++)
	{
		printf("Favor de elegir un valor minimo valido: ");
		scanf("%d", &m);
	}
	printf("\nLos numeros son: ");
	srand(time(NULL));
	for(i=0;i<o;i++)
	{
		x[i] = m + rand()%(n-m+1);
		if(i==o-1)
		{
			printf("%d", x[i]);
		}
		else
		{
			printf("%d, ", x[i]);
		}
	}
	getch();
}
