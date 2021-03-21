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
	if(m == 60)
	{
		h = h + 1;
		m = 0;
	}
	printf("Inserte los segundos: ");
	scanf("%d", &s);
	if(s == 60)
	{
		m = m + 1; 
		s = 0;
	}
	for(; Se < 60; Se++)
	{	
		sleep(1);
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
			getch();
			return 0;
		}
	}
}
