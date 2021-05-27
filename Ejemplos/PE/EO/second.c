#include <stdio.h>

int main()
{
    int Pra, Te, Pa; 
    float Calif;
    printf("Ingrese la calificacion de las practicas: ");
    scanf("%d", &Pra);
    printf("\nIngrese la calificacion de las tareas teorica: ");
    scanf("%d", &Te);
    printf("\nIngrese la calificacion de las participaciones: ");
    scanf("%d", &Pa);
    Calif = (Pra * .3) + (Te * .6) + (Pa * .1);
    printf("La calificacion final es de: %.2f", Calif);
    return 0;
}