#include <stdio.h>

void table(int [][5], int);
void porce(int [][5], int);
void ApRe(int [][5], int);
void prom(int [][5], int);

int main()
{
	int Alu, i, Op;
	printf("Introduce la cantidad de alumnos que desee: ");
	scanf("%d", &Alu);
	int A[Alu][5];
	for(i=0;i<Alu;i++)
	{
		printf("\nIntroduce la matricula del alumno %d: ", i+1);
		scanf("%d", &A[i][0]);
		printf("Introduce la calificacion de las tareas del alumno %d: ", i+1);
		scanf("%d", &A[i][1]);
		printf("Introdice la calificacion del medio curso del alumno %d: ", i+1);
		scanf("%d", &A[i][2]);
		printf("Introduce la calificacion del ordinario del alumno %d: ", i+1);
		scanf("%d", &A[i][3]);
		A[i][4] = ((A[i][1] * .3) + (A[i][2] * .3) + (A[i][3] * .4));
		printf("%d", A[i][4]);
	}
	printf("\n�Que es lo que desea hacer? \n\t1.- Imprimir tabla de alumnos \n\t2.- Imprimir el porcentaje de alumnos reprobados \n\t3.- Imprimit matriculas aprobadas y reprobadas \n\t4.- Imprimir el promedio del grupo \n\t5.- Salir \n");
	scanf("%d", &Op);
	switch(Op)
	{
		case 1:
			table(A, Alu);
		break;
		case 2:
			porce(A, Alu);
		break;
		case 3:
			ApRe(A, Alu);
		break;
		case 4:
			prom(A, Alu);
		break;
		case 5:
			printf("\n\nGracias por venir");
		break;
		default:
			printf("\nNo se ha seleccionado un numero valido");
	}
	
    return 0;
}

void table(int A[][5], int Alu)
{
	int i;
	printf("|\tMatricula\t|\tTareas\t|\tM.C\t|\tOrd\t|");
	for(i=0;i<Alu;i++)
	{
		printf("\n|\t%d\t\t|\t%d\t|\t%d\t|\t%d\t|", A[i][0], A[i][1], A[i][2], A[i][3]);
	}
    return;
}

void porce(int A[][5],int Alu)
{
	int can, i;
	float por;
	can = 0;
	for(i=0;i<Alu;i++)
	{
		if(A[i][4] < 70)
		{
			can++;
		}
	}
	por = can / (Alu * 1.0);
	printf("El porcentaje de alumnos reporbados es de %.2f \n", por * 100);
    return;
}

void ApRe(int A[][5], int Alu)
{
	int i;
	for(i=0;i<Alu;i++)
	{
		if(A[i][4] < 70)
		{
			printf("\nEl alumno %d reprobo.", A[i][0]);
		}
		else
		{
			printf("\nEl alumno %d aprobo.", A[i][0]);
		}
	}
	return;
}

void prom(int A[][5], int Alu)
{
	int Sum, i;
	float PG;
	Sum = 0;
	for(i=0;i<Alu;i++)
	{
		Sum = Sum + A[i][4];
	}
	PG = Sum / Alu;
	printf("El promedio grupal es de %.2f.", PG);
	return;
}
