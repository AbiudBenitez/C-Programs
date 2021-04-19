#include <stdio.h>
#include <conio.h>

main()
{
	printf("Programa que captura un arreglo de n elementos para posteriormente imprimirlo e imprimir el promedio de los valores que tiene\n\n");
	int N, i, Sum;
	Sum = 0;
	printf("Elija una cantidad de numeros: ");
	scanf("%d", &N);
	int Num[N];
	for(i=0;i<N;i++)
	{
		printf("Ingrese un valor: ");
		scanf("%d", &Num[i]);
		Sum = Sum + Num[i];
	}
	printf("\nLos numeros son: ");
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
	printf("\n\nEl promedio de los numeros es de: %d", Sum / N);
	getch();
}
