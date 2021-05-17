#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

					/*Programa no finalizado*/

int colu;

void search(int,int*,int*);

int main()
{
	int rows, colu, i, j, max, min, Op, r, s, c, o;
	c = o = 0;
	int* n1;
	int* n2;
	int **A;
	int **B;
	printf("Ingresa el numero de filas que deseas: ");
	scanf("%d", &rows);
	printf("Ingresa el numero de columnas que deseas: ");
	scanf("%d", &colu);
	A = (int**)malloc(rows*sizeof(int*));
	if(A==NULL)
	{
		printf("\nNo se ha podido asignar espacio de memoria.");
		exit(1);
	}
	for(i=0;i<rows;i++)
	{
		A[i] = (int*)malloc(colu*sizeof(int));
		if(A[i]==NULL)
		{
			printf("\nNo se puso asignar espacio de memoria");
			exit(1);
		}
	}
	printf("Ingresa el numero mayor que abarcara la serie: ");
	scanf("%d", &max);
	printf("Ingresa el numero menor que abarcara la serie: ");
	scanf("%d", &min);
	srand(time(NULL));
	for(i=0;i<rows;i++)
	{
		for(j=0;j<colu;j++)
		{
			A[i][j] = min + rand()%(max-min);
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("Seleccione el tipo de numero que desea excluir: \n\t1.- Numeros pares. \n\t2.- Numeros impares. \n\t3.- Numeros primos \n\t4.-Numeros perfectos.\n\t");
	scanf("%d", &Op);
	switch(Op)
	{
		case 1:
			r = 0;
			for(i=0;i<rows;i++)
			{
				for(j=0;j<colu;j++)
				{
					if(A[i][j] % 2 == 0)
					{
						printf("%d ", A[i][j]);
						r++;
					}
				}
			}
			printf("\n\n%d\n", r);
			search(r,&n1,&n2);
			printf("\n\n\t%d %d", n1,n2);
			B = (int**)malloc(*n1*sizeof(int*));
			for(i=0;i<n1;i++)
			{
				B[i] = (int*)malloc(*n2*sizeof(int));
			}
			for(i=0;i<rows;i++)
			{
				for(j=0;j<colu;j++)
				{
					if(A[i][j] % 2 != 0)
					{
						B[c][o] = A[i][j];
						o++;
						if(o == n2)
						{
							c++;
							o = 0;
						}
					}
				}
			}
		break;
		default:
			printf("\nNo se ha seleccionado un valor valido");
	}
	getch();
	return 0;
}

void search(int r, int* n1, int* n2)
{
	int x, y;
	x = *n1;
	y = *n2;
	int i, j;
	if(r%2==0)
	{
		for(i=0;i<r;i++)
		{
			for(j=0;j<r;j++)
			{
				if(j * i == r)
				{
					printf("\n%d %d", i, j);
					x = i;
					y = j;
				}
			}
		}
		i = 2;
		while(i<10)
		{
			if(x%i==0)
			{
				x = x / i;
				y = y * i;
			}	
			if(x%i!=0)
			{
				i++;
			}
		}
	}
	else
	{
		r = r + 1;
		for(i=0;i<r;i++)
		{
			for(j=0;j<r;j++)
			{
				if(j * i == r)
				{
					printf("\n%d %d", i, j);
					x = i;
					y = j;
				}
			}
		}
		i = 2;
		while(i<10)
		{
			if(x%i==0)
			{
				x = x / i;
				y = y * i;
			}	
			if(x%i!=0)
			{
				i++;
			}
		}
	}
	*n1 = x;
	*n2 = y;
	return;
}
