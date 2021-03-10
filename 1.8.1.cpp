#include <stdio.h>

int main(){
	printf("Programa de tablas\n\n");
	int T, R, i;
	printf("Ingrese el numero de tabla: ");
	scanf("%d", &T);
	for(i = 1; i < 11; i++){
		R = T * i;
		printf("%d x %d = %d\n", T, i, R);
	}
	return 0;
}
