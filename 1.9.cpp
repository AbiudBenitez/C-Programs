#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int random;
	printf("Programa que genere un numero aleatrio del 1 al 6 simulando un dado\n\n");
	printf("Presiona una tecla para lanzar el dado\n\n"); getch(); 
	srand(time(NULL));
	random = (rand() % 6)+1;
	printf("%d", random);
	getch();
}
