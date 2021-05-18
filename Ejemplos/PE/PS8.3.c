#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int id;
	char name[50];
	char depa[30];
	char pues[30];
	char acad[30];
	char naci[30];
	float sala[12];
} profesor;

void read(profesor*,int,float*[]);
void inA(profesor*,float*[]);

int main()
{
	profesor EMPLE[200];
	int Num, i;
	float* Sum;
	do
	{
		printf("Ingrese el numero de profesores: ");
		scanf("%d", &Num);
	}
	while(Num>200 || Num<1);
	Sum = (float*)malloc(Num*sizeof(float));
	read(EMPLE,Num,&Sum);
	
	system("PAUSE");
	return 0;
}

void read(profesor A[], int Num, float* Sum[])
{
	int i, j, Op;
	for(i=0;i<Num;i++)
	{
		printf("\nIngrese la clave del profesor: ");
		scanf("%d", &A[i].id);
		fflush(stdin);
		printf("\nIngrese el nombre y apellido del profesor: ");
		gets(A[i].name);
		printf("\nIngrese el departamento al cual pertenece. \n\t1.- Economia. \n\t2.- Derecho \n\t3.- Computacion \n\t4.- Administracion\n");
		scanf("%d", &Op);
		fflush(stdin);
		switch(Op)
		{
			case 1:
				strcpy(A[i].depa, "\nEconomia");
			break;
			case 2:
				strcpy(A[i].depa, "\nDerecho");
			break;
			case 3:
				strcpy(A[i].depa, "\nComputacion");
			break;
			case 4:
				strcpy(A[i].depa, "\nAdministracion");
			break;
			default:
				printf("\nNo se ha seleccionado nungun numero valido.");
				exit(1);
		}
		printf("\nIngrese el puesto del profesor: ");
		gets(A[i].pues);
		printf("\nIngrese el grado academico del profesor: ");
		gets(A[i].acad);
		printf("\nIngrese la nacionalidad del profesor: ");
		gets(A[i].naci);
		float tot = 0.0;
		for(j=0;j<12;j++)
		{
			printf("\nIngrese el salario del profesor del mes %d: ", j+1);
			scanf("%f", &A[i].sala[j]);
			fflush(stdin);
			tot = tot + A[i].sala[j];
			printf("%f", tot);
		}
		*Sum[i] = tot;
		printf("%f", *Sum[i]);
	}
}
