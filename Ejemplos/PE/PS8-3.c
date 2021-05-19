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

void read(profesor*,int,float[]);
void inA(profesor*,int,float[]);

int main()
{
	profesor EMPLE[200];
	int Num, i;
	do
	{
		printf("Ingrese el numero de profesores: ");
		scanf("%d", &Num);
	}
	while(Num>200 || Num<1);
	float Sum[Num];
	read(EMPLE,Num,Sum);
	inA(EMPLE,Num,Sum);
	printf("%f", Sum[0]);
	printf("%f", Sum[1]);
	return 0;
}

void read(profesor A[], int Num, float Sum[])
{
	int i, j, Op;
	for(i=0;i<Num;i++)
	{
		printf("\nIngrese la clave del profesor: ");
		scanf("%d", &A[i].id);
		fflush(stdin);
		printf("\nIngrese el nombre y apellido del profesor: ");
		scanf("%s", A[i].name);
		printf("\nIngrese el departamento al cual pertenece. \n\t1.- Economia. \n\t2.- Derecho \n\t3.- Computacion \n\t4.- Administracion\n");
		scanf("%d", &Op);
		fflush(stdin);
		switch(Op)
		{
			case 1:
				strcpy(A[i].depa, "Economia");
			break;
			case 2:
				strcpy(A[i].depa, "Derecho");
			break;
			case 3:
				strcpy(A[i].depa, "Computacion");
			break;
			case 4:
				strcpy(A[i].depa, "Administracion");
			break;
			default:
				printf("\nNo se ha seleccionado nungun numero valido.");
				exit(1);
		}
		printf("\nIngrese el puesto del profesor: ");
		scanf("%s", A[i].pues);
		printf("\nIngrese el grado academico del profesor: ");
		scanf("%s", A[i].acad);
		printf("\nIngrese la nacionalidad del profesor: ");
		scanf("%s", A[i].naci);
		float tot = 0.0;
		for(j=0;j<12;j++)
		{
			printf("\nIngrese el salario del profesor del mes %d: ", j+1);
			scanf("%f", &A[i].sala[j]);
			fflush(stdin);
			tot = tot + A[i].sala[j];
		}
		Sum[i] = tot;
	}
	return;
}

void inA(profesor A[], int Num, float Sum[])
{
	int i, temppo;
	float Max;
	for(i=0;i<Num-1;i++)
	{
		if(Sum[i]>Sum[i+1])
		{
			Max = Sum[i];
			temppo = i;
		}
	}
	printf("El maestro que mas gano es: \n");
	printf("\n\tNombre: %s", A[temppo].name);
	printf("\n\tDepartamento: %s", A[temppo].depa);
	printf("\n\tNacionalidad: %s", A[temppo].naci);
	printf("\n\tIngreso total: %f", Sum[temppo]);
	return;
}