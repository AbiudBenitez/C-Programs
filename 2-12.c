#include <stdio.h>
#include <stdlib.h>
int age;
int i, j;

void read(int [][j]);
void saleage (int [][j], int[]);

int main()
{
    printf("Seleccione la catidad de años que desee capturar: ");
    scanf("%d", &age);
    int sale[age][4], sum[age];
    read(sale);
    saleage(sale,sum);
}

void read(int sale[][j])
{
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

void saleage(int sale[][j], int sum[])
{
    for(i=0;i<age;i++)
    {
        for(j=0;j<4;j++)
        {
            sum[i] = sum[i] + sale[i][j];
            printf("La venta del año fue: %d", sum[i]);
        }
        printf("\n");
    }
}