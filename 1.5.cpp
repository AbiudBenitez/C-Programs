#include <stdio.h>
#include <conio.h>

main(){
	printf("Programa que dado un grupo de 3 alumnos con sus calificaciones correspondientes, indica cuantos aprobaron y cuantos reprobaron ademas de cual es el porcentaje de aprobacion\n\n");
	float A, R, Por;
	int Calif[3], c, Mat[3], i;
	for(c = 1; c <= 3; c++){
		printf("Introduce una matricula: ");
		scanf("%d", &Mat[c]);
		printf("Introduce su calificacion: ");
		scanf("%d", &Calif[c]);
		if(Calif[c] >= 70){
			if(Calif[c] <= 100){
				A = A + 1;
			}else{
				printf("ERROR: La maxima calificacion es de 100\n");
				Calif[c] = 0;
			}
		}else{
			R = R + 1;
		}
	}
	for(i = 1; i<=3; i++){
		printf("\nEl alumno con la matricula %d saco: %d", Mat[i], Calif[i]);
	}
	Por = (A * 100) / 3;
	printf("\n\nEl porcentaje de aprobacion es del: %.0f porciento", Por);
	getch();
}
