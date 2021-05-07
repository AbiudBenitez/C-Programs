#include <stdio.h>
#include <conio.h>

main()
{
	printf("\t\t      Programa de arreglo de 10 valores que imprime un histograma con estos mismos\n\n");
	int A[10], N, i, Max, pos, Pas, Max1, j;
	N = 10;
	for(i=0;i<N;i++)
	{
		printf("Introduce el valor %d: ", i+1);
		scanf("%d", &A[i]);
	}
	printf("\n");
	printf("\tGrafica de Barras\n");
	for(i=0;i<N;i++)
	{
		switch(i)
		{
			case 0:
				printf("%d\t", A[i]);
				for(j=0;j<A[i];j++)
				{
					if(j==A[i]-1)
					{
						printf("*\n");
					}
					else
					{
						printf("*   ");
					}
				}
			break;
			case 1:
				printf("%d\t", A[i]);
				for(j=0;j<A[i];j++)
				{
					if(j==A[i]-1)
					{
						printf("*\n");
					}
					else
					{
						printf("*   ");
					}
				}
			break;
			case 2:
				printf("%d\t", A[i]);
				for(j=0;j<A[i];j++)
				{
					if(j==A[i]-1)
					{
						printf("*\n");
					}
					else
					{
						printf("*   ");
					}
				}
			break;
			case 3:
				printf("%d\t", A[i]);
				for(j=0;j<A[i];j++)
				{
					if(j==A[i]-1)
					{
						printf("*\n");
					}
					else
					{
						printf("*   ");
					}
				}
			break;
			case 4:
				printf("%d\t", A[i]);
				for(j=0;j<A[i];j++)
				{
					if(j==A[i]-1)
					{
						printf("*\n");
					}
					else
					{
						printf("*   ");
					}
				}
			break;
			case 5:
				printf("%d\t", A[i]);
				for(j=0;j<A[i];j++)
				{
					if(j==A[i]-1)
					{
						printf("*\n");
					}
					else
					{
						printf("*   ");
					}
				}
			break;
			case 6:
				printf("%d\t", A[i]);
				for(j=0;j<A[i];j++)
				{
					if(j==A[i]-1)
					{
						printf("*\n");
					}
					else
					{
						printf("*   ");
					}
				}
			break;
			case 7:
				printf("%d\t", A[i]);
				for(j=0;j<A[i];j++)
				{
					if(j==A[i]-1)
					{
						printf("*\n");
					}
					else
					{
						printf("*   ");
					}
				}
			break;
			case 8:
				printf("%d\t", A[i]);
				for(j=0;j<A[i];j++)
				{
					if(j==A[i]-1)
					{
						printf("*\n");
					}
					else
					{
						printf("*   ");
					}
				}
			break;
			case 9:
				printf("%d\t", A[i]);
				for(j=0;j<A[i];j++)
				{
					if(j==A[i]-1)
					{
						printf("*\n");
					}
					else
					{
						printf("*   ");
					}
				}
			break;
		}
	}
	getch();
}
