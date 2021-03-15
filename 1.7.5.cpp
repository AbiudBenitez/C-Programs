#include <stdio.h>
#include <conio.h>
#include <time.h>

main()
{
	printf("Reloj\n");
	int Ho, h, Mi, m, Se, s;
	Se = 0;
	Ho = 0;
	Mi = 0;
	printf("Inserte las horas: ");
	scanf("%d", &h);
	printf("Inserte los minutos: ");
	scanf("%d", &m);
	printf("Inserte los segundos: ");
	scanf("%d", &s);
	while(Se < s + 1 && Mi < m + 1 && Ho < h + 1)
	{
		if(Se == 60)
		{
			Mi = Mi + 1;
			Se = 0;
			if(Mi == 60)
			{
				Ho = Ho + 1;
			}
		}
		printf("%d:%d:%d\n", Ho, Mi, Se);
		Se++;
	}
	getch();
}
