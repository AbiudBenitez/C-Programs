#include <stdio.h>
#include <conio.h>

void read(int[][4],int);
void echo(int[][4],int);

int main()
{
	int n;
	printf("Ingrese el numero de alumnos que desee capturar: ");
	scanf("%d", &n);
	while(n<1)
	{
		printf("Seleccione un numero valido: ");
		scanf("%d", &n);	
	}
	int alu[n][4];
	read(alu,n);
	echo(alu,n);
	getch();
}

void read(int alu[][4], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Ingrese la matricula del alumno: ");
		scanf("%d", &alu[i][0]);
		while(alu[i][1]<1)
		{
			printf("Seleccione una matricula valida: ");
			scanf("%d", &alu[i][0]);
		}
		printf("Ingrese la calificacion del medio curso: ");
		scanf("%d", &alu[i][1]);
		while(alu[i][1]<1)
		{
			printf("Seleccione una calificacion valida: ");
			scanf("%d", &alu[i][1]);
		}
		printf("Ingrese la calificacion del examen ordinario: ");
		scanf("%d", &alu[i][2]);
		while(alu[i][1]<1)
		{
			printf("Seleccione una calificacion valida: ");
			scanf("%d", &alu[i][2]);
		}
		printf("Ingrese la calificacion de las tareas: ");
		scanf("%d", &alu[i][3]);
		while(alu[i][1]<1)
		{
			printf("Seleccione una calificacion valida: ");
			scanf("%d", &alu[i][3]);
		}
		printf("\n");
	}
}

void echo(int alu[][4], int n)
{
	int i;
	printf("|\tMatricula\t|\tMC\t|\tEO\t|\tTareas\t|\n");
	printf("-------------------------------------------------------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("|\t%d\t", alu[i][0]);
		printf("\t|\t%d\t|", alu[i][1]);
		printf("\t%d\t|", alu[i][2]);
		printf("\t%d\t|", alu[i][3]);
		printf("\n");
	}
	printf("-------------------------------------------------------------------------\n");
}
