#include <stdio.h>
#include <conio.h>

main(){
	printf("Programa que dado un grupo de 3 alumnos con sus calificaciones correspondientes, indica cuantos aprobaron y cuantos reporbaron ademas de cual es el porcentaje de aprobacion\n");
	float A, R, Por;
	int Calif[2], c;
	for(c = 1; c <= 3; c++){
		printf("Introduce una calificacion: ");
		scanf("%d", &Calif[c]);
		if(Calif[c] >= 70){
			if(Calif[c] <= 100){
				A = A + 1;
			}else{
				printf("La maxima calificacion es de 100");
				Calif[c] = 0;
			}
		}else{
			R = R + 1;
		}
	}
	Por = (A * 100) / 3;
	printf("\nLos alumnos que aprobaron fueron de %.0f y los que reprobaron de %.0f con un procentaje de aprobacion de %.0f porciento", A, R, Por);
	getch();
}
