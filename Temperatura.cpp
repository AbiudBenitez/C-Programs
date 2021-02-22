#include <stdio.h>
#include <conio.h>

main(){
	printf("Programa para convertir la temperatura en grados celsius a farenheit y kelvin\n");
	float Cel, Kel, Far;
	printf("\nIngrese el valor de la temperatura en grados centigrados: ");
	scanf("%f", &Cel);
	Kel = 273.15 + Cel;
	printf("\nLa temperatura en Kelvin es de %.1f ", Kel);
	Far = (1.8 * Cel) + 32;
	printf("\nLa temperatura en grados farenheit es de %.1f", Far);
	getch();
}
