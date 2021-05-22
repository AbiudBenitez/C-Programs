#include <stdio.h>
#include <stdlib.h>
int age;

void read(int [][4]);
int saleage(int []);

int main()
{
    int totalSum;
    int i = 0;
    printf("Seleccione la catidad de años que desee capturar: ");
    scanf("%d", &age);
    int sale[age][4];
    read(sale);
    for (i = 0; i < age; i++) {
        totalSum = saleage(sale[i]);
        printf("The total sum of the sales is: %d\n\n", totalSum);
    }
}

void read(int sale[][4])
{
    int i, j;
    for(i=0;i<age;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Ingrese las ventas del trimestre %d del año %d: ", j, i);
            scanf("%d", &sale[i][j]);
        }
        printf("\n");
    }
}

int saleage(int sale[])
{
    int i, j;
    int sum = 0;
    for(j=0;j<4;j++)
    {
        sum = sum + sale[j];
        printf("La venta del año fue: %d\n", sum);
    }
    printf("\n");
    return sum;
}