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

int main()
{
	Libro *Lista = ListaLibro(Lista);
	printf("%p", Lista);
	return 0;
}
