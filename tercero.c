#include <stdio.h>
#include <conio.h>

void read(int[][4],int);
void echo(int[][4],int);

int main()
{
	int n;
	printf("Ingrese la cantidad de empleados que desee capturar: ");
	scanf("%d", &n);
	while(n<1)
	{
		printf("Seleccione un numero valido: ");
		scanf("%d", &n);	
	}
	int emp[n][4];
	read(emp,n);
	echo(emp,n);
	getch();
}

void read(int emp[][4], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Ingrese el numero de empleado: ");
		scanf("%d", &emp[i][0]);
		while(emp[i][0]<1)
		{
			printf("Seleccione un numero de empleado correcto: ");
			scanf("%d", &emp[i][0]);
		}
		printf("Ingrese el sueldo del empleado: ");
		scanf("%d", &emp[i][1]);
		while(emp[i][1]<1)
		{
			printf("Seleccione el sueldo del empleado correcto: ");
			scanf("%d", &emp[i][1]);
		}
		printf("Ingrese el numero de departamento del empleado: ");
		scanf("%d", &emp[i][2]);
		while(emp[i][2]<1)
		{
			printf("Seleccione un numero de departamento correcto: ");
			scanf("%d", &emp[i][2]);
		}
		printf("Ingrese las horas trabajadas al mes del empleado: ");
		scanf("%d", &emp[i][3]);
		while(emp[i][3]<1)
		{
			printf("Seleccione un numero de horas correcto: ");
			scanf("%d", &emp[i][3]);
		}
		printf("\n");
	}
}

void echo(int emp[][4], int n)
{
	int i;
	printf("|N° de Empleado\t|\tSueldo\t|\tDepartamento\t|\tHoras Mensuales\t|\n");
	printf("---------------------------------------------------------------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("|\t%d\t", emp[i][0]);
		printf("|\t%d\t|", emp[i][1]);
		printf("\t    %d    \t|", emp[i][2]);
		printf("\t    %d    \t|", emp[i][3]);
		printf("\n");
	}
	printf("---------------------------------------------------------------------------------\n");
}
