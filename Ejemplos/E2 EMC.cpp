#include <stdio.h>
#include <conio.h>

main()
{
	int i, j, SUM, NUM, NUM2;
	SUM = 0;
	do
	{
		printf("Ingrese un número: ");
		scanf("%d", &NUM);
		SUM = SUM + NUM2;
		NUM2 = NUM;
		if(NUM != SUM)
		{
			for(j = 1; j < NUM+1; j++)
			{
				printf("%d\n", NUM);
			}
		}		
	}
	while(NUM != SUM);
	getch();
}
