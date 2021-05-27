#include <stdio.h>
#include <math.h>

void main()
{
    double i, Sum;
    Sum = 0;
    for(i=0;i<10;i++)
    {
        Sum = Sum + pow(i, i);
    }
    printf("La suma de los cuadrados de los primeros 10 numeros enteros es de: %f", Sum);
}