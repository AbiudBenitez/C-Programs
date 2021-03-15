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
	for(Se = 1; Se < s + 1 && Mi < m && Ho < h + 1; Se++)

	getch();
}
