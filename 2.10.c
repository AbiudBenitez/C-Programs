#include <stdio.h>
#include <conio.h>

main()
{
	int n, i, aux, errores;
	printf("Introduce la cantidad de numeros que deseas: ");
	scanf("%d", &n);
	int A[n];
	for(i=0;i<n;i++)
	{
		printf("Ingresa el numero de la posicion %d: ", i+1);
		scanf("%d", &A[i]);
	}
	do
	{
		for(i=0;i<n-1;i++)
		{
			if(A[i]>A[i+1])
			{	
				aux = A[i+1];
				A[i+1]=A[i];
				A[i] = aux;
			}
		}
		errores = 0;
		for(i=0;i<n-1;i++)
		{
			if(A[i]>A[i+1])
			{
				errores++;
				i=n-1;
			}
		}
	}
	while(errores!=0);
	printf("\n\nLos numeros pares del arreglo ordenados de menor a mayor son: ");
	for(i=0;i<n;i++)
	{
		if(A[i] % 2 == 0)
		{
			printf(" %d ", A[i]);
		}
	}
	printf("\n\nLos numeros imapres del arreglo ordenados de mayor a menor son: ");
	for(i=n;i>0;i--)
	{
		if(A[i] % 2 != 0)
		{
			printf(" %d ", A[i]);
		}
	}
	getch();
}
