#include <stdio.h>

int main(){
	printf("Programa que permita elegir a un usuario entre multiplicar y sumar 2 n�meros otorgados por el mismo\n");
	float Num1, Num2, Pro, Sum, Mul;
	printf("\nIngrese el valor del primer numero: ");
	scanf("%f", &Num1);
	printf("Ingrese el valor del segundo numero: ");
	scanf("%f", &Num2);
	printf("�Que es lo que desea hacer?\n Nota: 0 = SUMA, 1 = MULTIPLICACION\n");
	scanf("%f", &Pro);
	if(Pro == 0){
		Sum = Num1 + Num2;
		printf("La suma de los numeros es de: %.0f", Sum);
	}else if(Pro == 1){
		Mul = Num1 * Num2;
		printf("La multiplicacion de los numeros es de: %.0f", Mul);
	}else{
		printf("Solo se puede poner 0 o 1");
	}
	return 0;
}
