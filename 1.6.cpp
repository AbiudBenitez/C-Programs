#include <stdio.h>
#include <conio.h>

main(){
	printf("Programa que indica si un numero dado por el usuario es un valor par o impar\n\n");
	int Num;
	printf("Ingrese un numero: ");
	scanf("%d", &Num);
	if(Num % 2 == 0){
		printf("\nEl numero %d es par", Num);
	}else{
		printf("\nEl numero %d es impar", Num);
	}
	getch();
}
