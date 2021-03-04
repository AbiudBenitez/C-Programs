#include <stdio.h>
#include <conio.h>

main(){
	printf("Programa que dado tres numeros enteros indica cual es el numero de valor intermedio entre los 3\n");
	int  Num1, Num2, Num3;
	printf("\nIntroduce el valor del primer numero: ");
	scanf("%d", &Num1);
	printf("Introduce el valor del segundo numero: ");
	scanf("%d", &Num2);
	printf("Introduce el valor del tercero numero: ");
	scanf("%d", &Num3);
	if(Num1 < Num2){
		if("Num2 < Num3"){
			printf("\nEl numero intermedio es: %d", Num2);
		}else if(Num1 < Num3){
			printf("\nEl numero intermedio es: %d", Num3);
		}else{
			printf("\nEl numero intermedio es: %d", Num1);
		}
	}else if(Num2 > Num3){
		printf("\nEl numero intermedio es: %d", Num2);
	}else if(Num1 < Num3){
		printf("\nEl numero intermedio es: %d", Num1);
	}else{
		printf("\nEl numero intermedio es: %d", Num3);
	}
	getch();
}
