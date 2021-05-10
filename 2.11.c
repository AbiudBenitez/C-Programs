#include <stdio.h>
#include <conio.h>
#include <windows.h>

main()
{
	int i, j, N;
	printf("Ingrese la cantidad de alumnos: ");
	scanf("%d", &N);
	int Alu[N][3];
	for(i=0;i<N;i++)
	{
		for(j=0;j<3;j++)
		{
			switch(j)
			{
				case 0:
					printf("Ingrese la matricula: ");
					scanf("%d", &Alu[i][j]);
				break;
				case 1:
					printf("Ingrese calificacion de medio curso: ");
					scanf("%d", &Alu[i][j]);
				break;
				case 2:
					printf("Ingrese calificacion de ordinario: ");
					scanf("%d", &Alu[i][j]);
				break;
			}
		}
	}
	system("PAUSE");
	system("CLS");
	printf("\t\t\tAlumnos\n|\tMatricula\t|\tM.C.\t|\tOrd\t|\n---------------------------------------------------------\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<3;j++)
		{
			switch(j)
			{
				case 0:
					printf("|\t%d\t\t", Alu[i][j]);
				break;
				case 1:
					printf("|\t%d\t|", Alu[i][j]);
				break;
				case 2:
					printf("\t%d\t|\n", Alu[i][j]);
				break;
			}
		}
	}
	printf("---------------------------------------------------------");
	getch();
}
