#include <stdio.h>

int main()
{
    int Num1, Num2;
    printf("Ingrese el primer numero: ");
    scanf("%d", &Num1);
    printf("\nIngrese el numero 2: ");
    scanf("%d", &Num2);
    printf("\nLa suma de los numero es de: %d", Num1 + Num2);
    printf("\nLa resta de los numero es de: %d", Num1 - Num2);
    printf("\nLa multiplicacion de los numero es de: %d", Num1 * Num2);
    printf("\nLa division de los numero es de: %.2f",(float)Num1 / (float)Num2);
    return 0;
}