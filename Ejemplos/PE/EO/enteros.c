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
    printf("La suma de los cuadrados de los primeros 10 numeros enteros es de: %.2f", Sum);
    printf("\n\nNombre de la materia: Programacion Estructurada \tFecha: 28/05/21");
    printf("\nNombre: Abiud Misael Benitez Franco \tMatricula: 1904987 \tHora inscrito: M3");
    return 0;
}
