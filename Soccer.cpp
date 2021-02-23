#include <stdio.h>
#include <conio.h>

main(){
	printf("Programa que otrogando un marcador final, de un partido de futbol soccer, indica cual de ambos equipos es el ganador.\n");
	char E1[10], E2[10]; 
	int M1, M2;
	printf("\nIngrese el nombre del primer equipo: ");
	scanf("%s", &E1);
	printf("\nIngrese el nombre del segundo equipo: ");
	scanf("%s", &E2);
	printf("\nIngrese el marcador del primer equipo: ");
	scanf("%d", &M1);
	printf("\nIngrese el marcador del segundo equipo: ");
	scanf("%d", &M2);
	if (M1 == M2){
		printf("Los equips de %s y de %s quedaron empate", E1, E2);
	}else{
		if(M1>M2){
			printf("El equipo de %s gano con un marcador de %d a %d", E1, M1, M2);
		}else{
			printf("El equipo de %s gano con un marcador de %d a %d", E2, M1, M2);
		}
	}
	getch();
}
