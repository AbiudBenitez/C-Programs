#include <stdio.h>

int main()
{
    int i, Num, j;
    int pri[10] = {2,3,5,7,11,13,17,19,23,29};
    printf("Ingrese un numero entero: ");
    scanf("%d", &Num);
    i = 0;
    printf("%d = ", Num);
    while(Num!=1)
    {
        if(Num%pri[i]==0)
        {
            if(Num/pri[i]==1)
            {
                printf("%d", pri[i]);
                Num = Num / pri[i];
            }
            else
            {
                printf("%d x ", pri[i]);
                Num = Num / pri[i];
            }
        }
        else
        {
            i++;
        }
    }
    return 0;
}