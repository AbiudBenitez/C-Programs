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
    printf("El numero mayor es: %d", aux);
    return 0;
}