#include <stdio.h>
#include <windows.h>


int main()
{
	char CAD[50];
	printf("Ingresa la cadena de caracteres: ");
	gets(CAD);
	printf("\nLa cadena con solo las letras en posiciones pares es: ");
	for(int i=0;i<30;i++)
	{
		if(i%2==0)
		{
			printf("%c", CAD[i]);
		}
		else 
		if(CAD[i] == NULL)
		{
			break;
		}
	}
	printf("\n\n");
	system("PAUSE");
}
