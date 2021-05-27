#include <stdio.h>
#include <math.h>

int main()
{
    double i, Sum;
    Sum = 0;
    for(i=1;i<11;i++)
    {
        Sum = Sum + pow(i, 2);
    }
    printf("La suma de los cuadrados de los primeros 10 numeros enteros es de: %f", Sum);
    return 0;
}