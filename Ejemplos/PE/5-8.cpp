#include<stdio.h>

	/* Primos.
	El programa almacena en un arreglo unidimensional los primeros 100 números
	primos. */
	
	const int TAM = 100;
	
	void Imprime(int[], int); 
	void Primo(int, int *);
	
main()
{
	int P[TAM] = {1,2};
	int FLA;
	int J = 2, PRI = 3;
	while (J <= TAM)
	{
		FLA = 1;
		Primo(PRI, &FLA); 
		
		if (FLA) 
		{
			P[J] = PRI;
			J++;
		}
		PRI += 2;
	}
	Imprime(P, TAM);
}
void Primo(int A, int *B)
{
	int DI = 3;
	while (*B && (DI < (A / 2)))
	{
		if ((A % DI) == 0)
		*B = 0;
		DI++;
	}
}
void Imprime(int Primos[], int T)
{
	int i;
	for (i=0; i<T; i++)
	printf("\nPrimos[%d]: %d", i+1, Primos[i]);
}
