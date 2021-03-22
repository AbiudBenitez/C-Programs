#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
	char *nombre;
	struct nodo *sig;
}Libro;

Libro *ListaLibro(Libro *Lista)
{
	Lista = NULL;
	return Lista;
}

Libro *agregarLibro(Libro *Lista, char *nombre)
{
	Libro *nuevoLibro, *aux;
	nuevoLibro = (Libro*)malloc(sizeof(Libro));
	nuevoLibro -> nombre = nombre;
	nuevoLibro -> sig = NULL;
	if(Lista == NULL)
	{
		Lista = nuevoLibro;
	}
	else
	{
		aux = Lista;
		while(aux->sig != NULL)
		{
			aux = aux->sig;
			
		}
		aux->sig = nuevoLibro;
	}
	return Lista;
}

int main()
{
	Libro *Lista = ListaLibro(Lista);
	Lista = agregarLibro(Lista, "Primera Lista");
	Lista = agregarLibro(Lista, "Segunda Lista");
	while(Lista != NULL)
	{
		printf("%s\n", Lista->nombre);
		Lista = Lista->sig;
	}
	
	return 0;
}
