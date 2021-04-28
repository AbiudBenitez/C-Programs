#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

main()
{
	/*"Programa que le pide al usuario rellenar un arreglo de n numeros, posteriormente 
	genera otro arreglo de ese mismo tamaño usando valores aleatorios, desde el numero 
	menor hasta el numero mayor del primer arreglo, para al final generar un arreglo del 
	tamaño nx2 y rellenarlo intercalando los valores del primer y segundo arreglo. 
	Al final debe imprimir los 3 arreglos*/
	int N, i, v = 0, Con, Min, Max;
	printf("Ingresa la cantidad de numeros que deseas ingresar: ");
	scanf("%d", &N);
	if(N<1)
	{
		printf("\nFavor de elegir un numero mayor a 0: ");
		scanf("%d", &N);
	}
	int A[N], B[N], C[N * 2];
	for(i=0;i<N;i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d", &A[i]);
	}
	for(i=0;i<N;i++)
	{
		if(i==0)
		{
			Min = A[i];
			Max = A[i];
		}
		else
		{
			if(A[i]<Min)
			{
				Min = A[i];
			}
			else 
			if(A[i]>Max)
			{
				Max = A[i];
			}
		}
	}
	system("PAUSE");
	system("CLS");
	printf("Los numeros de la primera serie son: ");
	for(i=0;i<N;i++)
	{
		if(i==N-1)
		{
			printf("%d", A[i]);
		}
		else
		{
			printf("%d, ", A[i]);
		}
	}
	printf("\nEl valor maximo es de %d\n", Max);
	printf("El valor minimo es de %d\n", Min);
	srand(time(NULL));
	printf("\nLos numeros de la serie aleatoria son: ");
	for(i=0;i<N;i++)
	{
		B[i] = Min + rand()%(Max-Min+1);
		if(i==N-1)
		{
			printf("%d", B[i]);
		}
		else
		{
			printf("%d, ", B[i]);
		}
	}
	printf("\n\nLos numeros intercalados son: ");
	for(i=0;i<N*2;i++)
	{
		if(i%2==0)
		{
			C[i] = A[v];
			Con++;
		}
		else
		{
			C[i] = B[v];
			Con++;
		}
		if(Con == 2)
		{
			v++;
			Con = 0;
		}
		if(i==(N*2)-1)
		{
			printf("%d", C[i]);
		}
		else
		{
			printf("%d, ", C[i]);
		}
	}
	getch();
}
