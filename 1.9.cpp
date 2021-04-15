#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	srand(time(NULL));
	printf("%d", rand() % 7);
	getch();
}
