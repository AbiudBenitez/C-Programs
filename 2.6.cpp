#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

main()
{
    int n, i, Op, b, Co;
    Co = 0;
    printf("Introduce la cantidad de numeros que deseas: ");
    scanf("%d", &n);
    int *A;
    A = (int*) malloc(n*sizeof(int));
    srand(time(NULL));
    for(i=0;i<n;i++)
    {
        A[i] = 1 + rand() % 6;
    }
    do
    {
    	printf("\n1.- Redefinir el tamano del arreglo. \n2.- Rellenar arreglo. \n3.- Realizar inferencia. \n4.-Imprimir arreglo \n5.- Salir \n\nElige que opcion deseas: ");
		scanf("%d", &Op);
    	switch(Op)
    	{
    		case 1:
    			printf("\nIngrese el nuevo numero de elementos que desea: ");
    			scanf("%d", &n);
    			A = (int*) realloc(A, n*sizeof(int));
    			printf("\n");
    			system("PAUSE");
    		break;
    		case 2:
    			for(i=0;i<n;i++)
    			{
        			A[i] = 1 + rand() % 6;
    			}
    			printf("\nLa serie de numeros ha sido cambiada.\n\n");
    			system("PAUSE");
    		break;
    		case 3:
    			printf("\nIntrodusca el valor a buscar: ");
    			scanf("%d", &b);
    			for(i=0;i<n;i++)
    			{
    				if(A[i] == b)
    				{
    					printf("\nEl valor buscado se encuentra en la posicion: %d \n", i+1);
    					Co++;
					}
				}
				printf("\nEl numero de veces que se repite el numero es de %d \n", Co);
				printf("\n");
    			system("PAUSE");
			break;
			case 4:
				printf("\nLa serie de numeros es: ");
				for(i=0;i<n;i++)
    			{
    				if(i==n-1)
    				{
    					printf(" %d\n", A[i]);
					}
					else
					{
						printf("%d, ", A[i]);
					}
    			}
    			printf("\n");
    			system("PAUSE");
    		break;
    		case 5:
    			printf("\n¡Gracias por usarme! :)");
    		break;
    		default:
    			printf("\nNo se eligio un numero valido\n");
		}
	}
	while(Op!=5);
    getch();
}
