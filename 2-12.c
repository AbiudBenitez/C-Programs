#include <stdio.h>
#include <stdlib.h>
int age;

void read(int [][4], int[]);
void saleage (int [][4], int []);
void saleop(int [][4],int [],int);
void suma(int [][4], int []);
void prom(int [][4], int []);
void hist(int [][4], int []);

int main()
{
    int i, op;
    printf("Seleccione la catidad de años que desee capturar: ");
    scanf("%d", &age);
    int sale[age][4], sum[age];
    read(sale,sum);
    printf("Selecciona la opcion que desees:");
    printf("\n\t1.- Imprimir ventas de: (año)");
    printf("\n\t2.- Imprimir año y ventas del año mas productivo.");
    printf("\n\t3.- Imprimir año y ventas del año menos productivo.");
    printf("\n\t4.- Promedio total de ventas.");
    printf("\n\t5.- Inprimir histograma de ventas por año. ");
    printf("\n\t6.- Ordenar los años del mejor al peor en ventas.");
    scanf("%d", &op);
    switch(op)
    {
        case 1:
            saleage(sale,sum);
        break;
        case 2:
        case 3:
            saleop(sale,sum,op);
        break;
        case 4:
            prom(sale,sum);
        break;
        case 5:
            hist(sale,sum);
        break;
    }
}

void read(int sale[][4], int sum[])
{
    int i, j, op;
    for(i=0;i<age;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Ingrese las ventas del trimestre %d del año %d: ", j+1, i+1);
            scanf("%d", &sale[i][j]);
        }
        printf("\n");
    }
    
}

void suma(int sale[][4], int sum[])
{
    int i, j;
    for(i=0;i<age;i++)
    {
        for(j=0;j<4;j++)
        {
            sum[i] = sum[i] + sale[i][j];
        }
    }
}

void saleage(int sale[][4], int sum[])
{
    int age_op;
    suma(sale,sum);
    printf("Seleccione el año: ");
    scanf("%d", &age_op);
    printf("\nLas ventas del año %d fueron de %d.", age_op, sum[age_op-1]);
}

void saleop(int sale[][4], int sum[], int op)
{
    int i, aux;
    suma(sale,sum);
    for(i=0;i<age-1;i++)
    {
        if(sum[i] < sum[i+1])
        {
            aux = i+1;
        }
        else
        {
            aux = i;
        }
    }
    if(op == 2)
    {
        printf("\nEl año que mas ventas tuvo fue el numero %d.", aux+1);
        printf("\nSus ventas totales fueron: %d", sum[aux]);
    }
    else
    {
        printf("\nEl año que mas ventas tuvo fue el numero %d.", aux);
        printf("\nSus ventas totales fueron: %d", sum[aux-1]);
    }
}

void prom(int sale[][4], int sum[])
{
    int i, j, age_op, pro;
    suma(sale,sum);
    for(i=0;i<age;i++)
    {
        j = j + sum[i];
    }
    pro = j / (age * 4);
    printf("\nEl promedio total de las ventas es de: %d", pro);
}

void hist(int sale[][4], int sum[])
{
    int i, aux, j;
    suma(sale,sum);
    for(i=0;i<age-1;i++)
    {
        if(sum[i] < sum[i+1])
        {
            aux = i+1;
        }
        else
        {
            aux = i;
        }
    }
    for(i=0;i<sum[aux]/10;i++)
    {
        printf("\t█");
        for(j=0;j<age;j++)
        {
            if(aux==sum[j]-1)
            {

            }
        }
    }
}