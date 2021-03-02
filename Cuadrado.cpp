#include <stdio.h>
#include <conio.h>

main(){
	int Lad, Higth, Width, Num1, Num2, Num0;
	printf("Programa para saber cuantas veces cabe un cuadrado dentro de un rectangulo segun sus medidas\n\n");
	printf("Ingrese el valor del lado del cuadrado: ");
	scanf("%d", &Lad);
	printf("Ingrese el valor de la altura del rectangulo: ");
	scanf("%d", &Higth);
	printf("Ingrese el valor del ancho del rectangulo: ");
	scanf("%d", &Width);
	Num1 = Higth / Lad;
	Num2 = Width / Lad;
	Num0 = Num1 * Num2;
	printf("\nEl numero de veces que cabe el cuadrado en el rectangulo es de: %d", Num0);
	getch();
}
