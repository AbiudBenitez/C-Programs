#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	printf("Programa que calcule la formula general segun los valores de A, B y C\n");
	float A, B, C, d, x1, x2;
	printf("\nIngrese el valor de la constante A: ");
	scanf("%f", &A);
	if(A==0){
		printf("El valor de A no puede ser de 0");
	}else{
		printf("Ingrese el valor de la constante B: ");
		scanf("%f", &B);
		printf("Ingrese el valor de la constante C: ");
		scanf("%f", &C);
		d = pow(B,2) - (4 * A * C);
		if(d<0){
			printf("No tiene respuesta a causa del valor negativo en la variable d que es: %f ", d);
		}else{
			x1 = (-B + sqrt(d)) / (2 * A);
			x2 = (-B - sqrt(d)) / (2 * A);
			printf("\nEl valor de x1 es de %f y el valor de x2 es %f", x1, x2);
	}
	}
	getch();
	
}
