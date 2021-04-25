#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

main()
{
	int a[10], i, po[3], no[3], A, e, j;
	A = 0;
	e = 0;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		a[i] = 1 + rand()%10;
		printf("%d", a[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("\nElija la posicion del numero a adivinar: ");
		scanf("%d", &po[i]);
		for(j=0;po[i]>10;j++)
		{
			printf("Solo puede elegir valores entre 1 y 10: ");
			scanf("%d", &po[i]);
		}
		for(j=0;po[i]<1;j++)
		{
			printf("Solo puede elegir valores entre 1 y 10: ");
			scanf("%d", &po[i]);
		}
		if(po[i] == po[i-1] || po[i] == po[i-2])
		{
			if(a[i-1] == no[i-1] || a[i-1] == no[i-2])
			{
				printf("Usted ya selecciono este valor, seleccione otro: ");
				scanf("%d", &po[i]);
			}
		}
		printf("Elija el numero que usted cree que este en la posicion %d: ", po[i]);
		scanf("%d", &no[i]);
		for(j=0;no[i]>10;j++)
		{
			printf("Solo puede elegir valores entre 1 y 10: ");
			scanf("%d", &no[i]);
		}
		for(j=0;no[i]<1;j++)
		{
			printf("Solo puede elegir valores entre 1 y 10: ");
			scanf("%d", &no[i]);
		}
	}
	for(i=0;i<3;i++)
	{
		printf("\nSe selecciono la posicion %d y el numero %d ", po[i], no[i]);
		if(a[po[i]-1] == no[i])
		{
			printf("\n\t\tUsted acerto\n");
		}
		else
		{
			printf("\n\tSe equivoco el numero era %d\n", a[po[i]-1]);
		}
	}
	printf("\nLos numeros eran: ");
	for(i=0;i<10;i++)
	{
		if(i==9)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	getch();	
}
