#include <stdio.h>
#include <conio.h>
#include <windows.h>

main()
{
	printf("Programa que captura la cantidad de numeros que el usuario elija, para despues imprimirlos en forma horizontal separados por comas");
	int i, N;
	printf("\n\nIngrese la cantidad de numeros que desee: ");
	scanf("%d", &N);
	int O[N];
	for(i=0;i<N;i++)
	{
		printf("Ingresa un numero: ");
		scanf("%d", &O[i]);
	}
	system("PAUSE");
	system("CLS");
	for(i=0;i<N;i++)
	{
		if(i==N-1)
		{
			printf("%d", O[i]);
		}
		else
		{
			printf("%d, ", O[i]);
		}
	}
	getch();
}
