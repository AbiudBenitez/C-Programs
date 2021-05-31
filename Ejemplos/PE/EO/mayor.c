#include <stdio.h>

int main()
{
    int Num[3], aux, i;
    for(i=0;i<3;i++)
    {
        printf("Ingrese el numero %d: ", i+1);
        scanf("%d", &Num[i]);
    }
    for(i=0;i<2;i++)
    {
        if(Num[i]>Num[i+1])
        {
            if(aux > Num[i])
            {
                break;
            }
            else
            {
                aux = Num[i];
            }
        }
        else
        {
            if(aux > Num[i+1])
            {
                break;
            }
            else
            {
                aux = Num[i+1];
            }
        }
    }
    printf("\nEl numero mayor es: %d", aux);
    printf("\n\nNombre de la materia: Programacion Estructurada \tFecha: 28/05/21");
    printf("\nNombre: Abiud Misael Benitez Franco \tMatricula: 1904987 \tHora inscrito: M3");
    return 0;
}
