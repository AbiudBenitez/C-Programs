#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	printf("Programa para calcular el volumen de un cilindro\n");
	float Rad, Vol;
	printf("Ingrese el valor del radio del cilindro: ");
	scanf("%f", &Rad);
	Vol = 1.333 * 3.1416 * pow(Rad, 3);
	printf("El volumen del cilindro es de: %f", Vol);
	getch();
}
