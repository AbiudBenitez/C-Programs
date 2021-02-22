#include <stdio.h>
#include <conio.h>

main(){
	printf("Programa para calcular el voltaje con la ley de Ohms\n\n");
	int I, R, V;
	printf("Inserte el valor de la corriente electrica: ");
	scanf("%d", &I);
	printf("\nInserte el valor de la resistencia: ");
	scanf("%d", &R);
	V = I * R ;
	printf("\n El valor del voltaje es de %d volts", V);
	getch();
}
