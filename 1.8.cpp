#include <stdio.h>
#include <conio.h>

main(){
	printf("Porgrama que imprime la tabla de multiplicar dada por el usuario\n\n");
	int T, R, i;
	printf("Insertar el numero de la tabla que desea imprimir: ");
	scanf("%d", &T);
	for(i = 1; i < 11; i++){
		R = T * i;
		printf("%d x %d = %d\n", T, i, R);
	}
	getch();
}
