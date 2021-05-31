#include <stdio.h>

int main()
{
    int i, Num, j;
    int primos[10] = {2,3,5,7,11,13,17,19,23,29};
    printf("Ingrese un numero entero: ");
    scanf("%d", &Num);
    i = 0;
    printf("%d = ", Num);
    while(Num!=1)
    {
        if(Num%primos[i]==0)
        {
            if(Num/primos[i]==1)
            {
                printf("%d", primos[i]);
                Num = Num / primos[i];
            }
            else
            {
                printf("%d x ", primos[i]);
                Num = Num / primos[i];
            }
        }
        else
        {
            i++;
        }
    }
    printf("\n\nNombre de la materia: Programacion Estructurada \tFecha: 28/05/21");
    printf("\nNombre: Abiud Misael Benitez Franco \tMatricula: 1904987 \tHora inscrito: M3");
    return 0;
}
