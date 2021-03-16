#include <stdio.h>
#include <conio.h>
#include <time.h>

int main()
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
	for(; Se < 60; Se++)
	{	
		printf("%d:%d:%d\n", Ho, Mi, Se);
		if(Se == 59)
		{
			Mi = Mi + 1;
			Se = 0;
			printf("%d:%d:%d\n", Ho, Mi, Se);
		}
		if(Mi == 59)
		{
			Ho = Ho + 1;
			Mi = 0;
			printf("%d:%d:%d\n", Ho, Mi, Se);
		}
		if(Se == s && Mi == m && Ho == h)
		{
			return 0;
		}
	}
}
